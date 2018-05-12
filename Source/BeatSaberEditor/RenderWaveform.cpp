// Fill out your copyright notice in the Description page of Project Settings.

#include "RenderWaveform.h"

// KISS Headers, that we need for the decompression part
#include "ThirdParty/Kiss_FFT/kiss_fft129/kiss_fft.h"
#include "ThirdParty/Kiss_FFT/kiss_fft129/tools/kiss_fftnd.h"

bool bNormalizeOutputToDb = false;
bool bShowLogDebug = false;
bool bShowWarningDebug = false;
bool bShowErrorDebug = false;

// Log Category
DECLARE_LOG_CATEGORY_EXTERN(LogRenderWave, Log, All);

// Short Defines to faster debug
#define PrintLog(TextToLog) if(bShowLogDebug) UE_LOG(LogRenderWave, Log, TextToLog)
#define PrintWarning(TextToLog) if(bShowWarningDebug) UE_LOG(LogRenderWave, Warning, TextToLog)
#define PrintError(TextToLog) if(bShowErrorDebug) UE_LOG(LogRenderWave, Error, TextToLog)

#include "Sound/SoundWave.h"
#include "AudioDevice.h"
#include "Runtime/Engine/Public/VorbisAudioInfo.h"
#include "Developer/TargetPlatform/Public/Interfaces/IAudioFormat.h"

DEFINE_LOG_CATEGORY(LogRenderWave);

float GetFFTInValue(const int16 InSampleValue, const int16 InSampleIndex, const int16 InSampleCount)
{
	float FFTValue = InSampleValue;

	// Apply the Hann window
	FFTValue *= 0.5f * (1 - FMath::Cos(2 * PI * InSampleIndex / (InSampleCount - 1)));

	return FFTValue;
}

void CalculateFrequencySpectrum(USoundWave* InSoundWaveRef, const float InStartTime, const float InDuration, TArray<float>& OutFrequencies)
{
	// Clear the Array before continuing
	OutFrequencies.Empty();

	const int32 NumChannels = InSoundWaveRef->NumChannels;
	const int32 SampleRate = InSoundWaveRef->SampleRate;

	// Make sure the Number of Channels is correct
	if (NumChannels > 0 && NumChannels <= 2)
	{
		// Check if we actually have a Buffer to work with
		if (InSoundWaveRef->CachedRealtimeFirstBuffer)
		{
			// The first sample is just the StartTime * SampleRate
			int32 FirstSample = SampleRate * InStartTime;

			// The last sample is the SampleRate times (StartTime plus the Duration)
			int32 LastSample = SampleRate * (InStartTime + InDuration);

			// Get Maximum amount of samples in this Sound
			const int32 SampleCount = InSoundWaveRef->RawPCMDataSize / (2 * NumChannels);

			// An early check if we can create a Sample window
			FirstSample = FMath::Min(SampleCount, FirstSample);
			LastSample = FMath::Min(SampleCount, LastSample);

			// Actual amount of samples we gonna read
			int32 SamplesToRead = LastSample - FirstSample;

			if (SamplesToRead < 0) {

				PrintError(TEXT("Number of SamplesToRead is < 0!"));
				return;
			}

			// Shift the window enough so that we get a PowerOfTwo. FFT works better with that
			int32 PoT = 2;

			while (SamplesToRead > PoT) {
				PoT *= 2;
			}

			// Now we have a good PowerOfTwo to work with
			SamplesToRead = PoT;

			// Create two 2-dim Arrays for complex numbers | Buffer and Output
			kiss_fft_cpx* Buffer[2] = {0};
			kiss_fft_cpx* Output[2] = {0};

			// Create 1-dim Array with one slot for SamplesToRead
			int32 Dims[1] = {SamplesToRead};

			// alloc once and forget, should probably move to a init/deinit func
			static kiss_fftnd_cfg STF = kiss_fftnd_alloc(Dims, 1, 0, nullptr, nullptr);

			int16* SamplePtr = reinterpret_cast<int16*>(InSoundWaveRef->CachedRealtimeFirstBuffer);

			// Allocate space in the Buffer and Output Arrays for all the data that FFT returns
			for (int32 ChannelIndex = 0; ChannelIndex < NumChannels; ChannelIndex++)
			{
				Buffer[ChannelIndex] = (kiss_fft_cpx*)KISS_FFT_MALLOC(sizeof(kiss_fft_cpx) * SamplesToRead);
				Output[ChannelIndex] = (kiss_fft_cpx*)KISS_FFT_MALLOC(sizeof(kiss_fft_cpx) * SamplesToRead);
			}

			// Shift our SamplePointer to the Current "FirstSample"
			SamplePtr += FirstSample * NumChannels;

			float precomputeMultiplier = 2.f * PI / (SamplesToRead - 1);

			for (int32 SampleIndex = 0; SampleIndex < SamplesToRead; SampleIndex++)
			{
				float rMult = 0.f;
				if (SamplePtr != NULL && (SampleIndex + FirstSample < SampleCount))
				{
					rMult = 0.5f * (1.f - FMath::Cos(precomputeMultiplier * SampleIndex));
				}
				for (int32 ChannelIndex = 0; ChannelIndex < NumChannels; ChannelIndex++)
				{
					// Make sure the Point is Valid and we don't go out of bounds
					if (SamplePtr != NULL && (SampleIndex + FirstSample < SampleCount))
					{
						// Use Window function to get a better result for the Data (Hann Window)
						Buffer[ChannelIndex][SampleIndex].r = rMult * (*SamplePtr);
					}
					else
					{
						Buffer[ChannelIndex][SampleIndex].r = 0.f;
					}
					Buffer[ChannelIndex][SampleIndex].i = 0.f;

					// Take the next Sample
					SamplePtr++;
				}
			}

			// Now that the Buffer is filled, use the FFT
			for (int32 ChannelIndex = 0; ChannelIndex < NumChannels; ChannelIndex++)
			{
				if (Buffer[ChannelIndex])
				{
					kiss_fftnd(STF, Buffer[ChannelIndex], Output[ChannelIndex]);
				}
			}

			OutFrequencies.AddZeroed(SamplesToRead);

			for (int32 SampleIndex = 0; SampleIndex < SamplesToRead; ++SampleIndex)
			{
				float ChannelSum = 0.0f;

				for (int32 ChannelIndex = 0; ChannelIndex < NumChannels; ++ChannelIndex)
				{
					if (Output[ChannelIndex])
					{
						// With this we get the actual Frequency value for the frequencies from 0hz to ~22000hz
						ChannelSum += FMath::Sqrt(FMath::Square(Output[ChannelIndex][SampleIndex].r) + FMath::Square(Output[ChannelIndex][SampleIndex].i));
					}
				}

				if (bNormalizeOutputToDb)
				{
					OutFrequencies[SampleIndex] = FMath::LogX(10, ChannelSum / NumChannels) * 10;
				} else
				{
					OutFrequencies[SampleIndex] = ChannelSum / NumChannels;
				}
			}

			// Make sure to free up the FFT stuff
			// KISS_FFT_FREE(STF);

			for (int32 ChannelIndex = 0; ChannelIndex < NumChannels; ++ChannelIndex)
			{
				KISS_FFT_FREE(Buffer[ChannelIndex]);
				KISS_FFT_FREE(Output[ChannelIndex]);
			}
		} else {
			PrintError(TEXT("InSoundVisData.PCMData is a nullptr!"));
		}
	} else {
		PrintError(TEXT("Number of Channels is < 0!"));
	}
}

void URenderWaveform::BP_RenderWaveform(USoundWave* InSoundWaveRef, UProceduralMeshComponent* Mesh, float InSongPosition, int SizeX){
	if (!IsValid(InSoundWaveRef)){
		return;
	}
	if (!IsValid(Mesh)){
		return;
	}

	int nbVert = Mesh->GetProcMeshSection(0)->ProcVertexBuffer.Num();
	bool valid;

	TArray<FVector> Vertices;
	TArray<FVector> Normals;
	TArray<FVector2D> UV0;
	TArray<FLinearColor> VertexColors;
	TArray<FProcMeshTangent> Tangents;

	Vertices.AddDefaulted(nbVert);
	Normals.Init(FVector(0.0f, 0.0f, 1.0f), nbVert);
	UV0.AddDefaulted(nbVert);
	VertexColors.AddDefaulted(nbVert);
	Tangents.Init(FProcMeshTangent(1.0f, 0.0f, 0.0f), nbVert);

	for (size_t i = 0; i < 320; ++i){
		float duration = (1 / 64.f);
		float startTime = duration * i + InSongPosition;

		valid = true;
		if (startTime < 0.0f || startTime >= InSoundWaveRef->Duration || startTime + duration >= InSoundWaveRef->Duration) {
			valid = false;
		}

		TArray<float> results;

		if (valid) CalculateFrequencySpectrum(InSoundWaveRef, startTime, duration, results);

		for (size_t j = 0; j < 64; ++j){
			float height;

			if (valid) height = results[j * 8.f] / 50000.f;
			else height = 0;

			Vertices[To1D(i, j, SizeX)] = FVector(i, j, height);
			VertexColors[To1D(i, j, SizeX)] = FLinearColor(height, 0.0f, 0.0f);
		}
	}

	Mesh->UpdateMeshSection_LinearColor(0, Vertices, Normals, UV0, VertexColors, Tangents);

	return;
}

void URenderWaveform::BP_GenerateSpectrogramMesh(UProceduralMeshComponent* Mesh, int SizeX, int SizeY)
{
	if (!IsValid(Mesh) || SizeX <= 0 || SizeY <= 0) {
		return;
	}

	TArray<FVector> Vertices;
	TArray<int> Faces;
	TArray<FVector> Normals;
	TArray<FVector2D> UV0;
	TArray<FLinearColor> VertexColors;
	TArray<FProcMeshTangent> Tangents;

	Vertices.AddDefaulted(SizeX * SizeY);
	Normals.AddDefaulted(SizeX * SizeY);
	UV0.AddDefaulted(SizeX * SizeY);
	VertexColors.AddDefaulted(SizeX * SizeY);
	Tangents.AddDefaulted(SizeX * SizeY);
	Faces.AddZeroed((SizeX - 1) * (SizeY - 1) * 6);

	for (int j = 0; j < SizeY; ++j)
	{
		for (int i = 0; i < SizeX; ++i)
		{
			Vertices[To1D(i, j, SizeX)] = FVector(i,j, 0.0f);
			Normals[To1D(i, j, SizeX)] = FVector(0.0f, 0.0f, 1.0f);
			UV0[To1D(i, j, SizeX)] = FVector2D(0.0f, 0.0f);
			VertexColors[To1D(i, j, SizeX)] = FLinearColor(0.0f, 0.0f, 0.0f);
			Tangents[To1D(i, j, SizeX)] = FProcMeshTangent(1.0f, 0.0f, 0.0f);
		}
	}

	for (int j = 0; j < SizeY - 1; ++j)
	{
		for (int i = 0; i < SizeX - 1; ++i)
		{
			Faces[To1D(i, j, SizeX - 1) * 6] = To1D(i, j, SizeX);
			Faces[To1D(i, j, SizeX - 1) * 6 + 1] = To1D(i, j + 1, SizeX);
			Faces[To1D(i, j, SizeX - 1) * 6 + 2] = To1D(i + 1, j, SizeX);

			Faces[To1D(i, j, SizeX - 1) * 6 + 3] = To1D(i + 1, j, SizeX);
			Faces[To1D(i, j, SizeX - 1) * 6 + 4] = To1D(i, j + 1, SizeX);
			Faces[To1D(i, j, SizeX - 1) * 6 + 5] = To1D(i + 1, j + 1, SizeX);
		}
	}

	Mesh->CreateMeshSection_LinearColor(0, Vertices, Faces, Normals, UV0, VertexColors, Tangents, false);
}

int URenderWaveform::To1D(int x, int y, int sizeX)
{
	return (sizeX * y) + x;
}
