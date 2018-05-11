// Fill out your copyright notice in the Description page of Project Settings.

#include "eXiSoundVisPrivatePCH.h"

#include "SoundVisComponent.h"

#include "Sound/SoundWave.h"
#include "AudioDevice.h"
#include "Runtime/Engine/Public/VorbisAudioInfo.h"
#include "Developer/TargetPlatform/Public/Interfaces/IAudioFormat.h"

/// De-/Constructors

USoundVisComponent::USoundVisComponent()
{
	AudioComponent = CreateDefaultSubobject<UAudioComponent>(FName("AudioComponent"));

	PrimaryComponentTick.bCanEverTick = true;
}

USoundVisComponent::~USoundVisComponent()
{
}

void USoundVisComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction * ThisTickFunction)
{
	UGameViewportClient* Viewport = GetWorld()->GetGameViewport();

	if (bSoundPaused && bSoundPausedByBackgroundWindow)
	{
		if (Viewport->Viewport->IsForegroundWindow())
		{
			PrintLog(TEXT("Window is in foreground. Resuming!"));

			BP_ResumeCalculatingFrequencySpectrum();

			bSoundPausedByBackgroundWindow = false;
		}
	}
}

/// Functions to load Data from the HardDrive

void USoundVisComponent::LoadSoundFileFromHD(const FString& InFilePath)
{
	// Create new SoundWave Object
	CompressedSoundWaveRef = NewObject<USoundWave>(USoundWave::StaticClass());

	// Make sure the SoundWave Object is Valid
	if (!CompressedSoundWaveRef) {

		PrintError(TEXT("Failed to create new SoundWave Object!"));
		return;
	}

	// If true, the Sound was successfully loaded
	bool bLoaded = false;

	// TArray that holds the binary and encoded Sound data
	TArray<uint8> RawFile;

	// Load file into RawFile Array
	bLoaded = FFileHelper::LoadFileToArray(RawFile, InFilePath.GetCharArray().GetData());

	if (bLoaded)
	{
		// Fill the SoundData into the SoundWave Object
		if (RawFile.Num() > 0) {

			bLoaded = FillSoundWaveInfo(CompressedSoundWaveRef, &RawFile);
		}
		else {

			PrintError(TEXT("RawFile Array is empty! Seams like Sound couldn't be loaded correctly."));

			bLoaded = false;
		}

		// Get Pointer to the Compressed OGG Data
		FByteBulkData* BulkData = &CompressedSoundWaveRef->CompressedFormatData.GetFormat(FName("OGG"));

		// Set the Lock of the BulkData to ReadWrite
		BulkData->Lock(LOCK_READ_WRITE);

		// Copy compressed RawFile Data to the Address of the OGG Data of the SW File
		FMemory::Memmove(BulkData->Realloc(RawFile.Num()), RawFile.GetData(), RawFile.Num());

		// Unlock the BulkData again
		BulkData->Unlock();
	}

	if (!bLoaded) {

		PrintError(TEXT("Something went wrong while loading the Sound Data!"));
		return;
	}

	// Fill the PCMSampleBuffer
	GetPCMDataFromFile(CompressedSoundWaveRef);
}

bool USoundVisComponent::FillSoundWaveInfo(USoundWave* InSoundWave, TArray<uint8>* InRawFile)
{
	// Info Structs
	FSoundQualityInfo SoundQualityInfo;
	FVorbisAudioInfo VorbisAudioInfo;
	
	// Save the Info into SoundQualityInfo
	if (!VorbisAudioInfo.ReadCompressedInfo(InRawFile->GetData(), InRawFile->Num(), &SoundQualityInfo))
	{
		return false;
	}

	// Fill in all the Data we have
	InSoundWave->DecompressionType = EDecompressionType::DTYPE_RealTime;
	InSoundWave->SoundGroup = ESoundGroup::SOUNDGROUP_Default;
	InSoundWave->NumChannels = SoundQualityInfo.NumChannels;
	InSoundWave->Duration = SoundQualityInfo.Duration;
	InSoundWave->RawPCMDataSize = SoundQualityInfo.SampleDataSize;
	InSoundWave->SampleRate = SoundQualityInfo.SampleRate;

	return true;
}

/// Function to decompress the compressed Data that comes with the .ogg file

void USoundVisComponent::GetPCMDataFromFile(USoundWave* InSoundWave)
{
	if (InSoundWave == nullptr)	{
		
		PrintError(TEXT("Passed SoundWave pointer is a nullptr!"));
		return;
	}

	if (InSoundWave->NumChannels < 1 || InSoundWave->NumChannels > 2) {
		
		PrintError(TEXT("SoundWave Object has not the right amount of Channels. Plugin only supports 1 or 2!"));
		return;
	}

	if (GEngine)
	{
		// Get a Pointer to the Main Audio Device
		FAudioDevice* AudioDevice = GEngine->GetMainAudioDevice();

		if (AudioDevice) {

			InSoundWave->InitAudioResource(AudioDevice->GetRuntimeFormat(InSoundWave));

			PrintLog(TEXT("Creating new DecompressWorker."));
				
			// Creates a new DecompressWorker and starts it
			InitNewDecompressTask(InSoundWave);
		}
		else {

			PrintError(TEXT("Couldn't get a valid Pointer to the Main AudioDevice!"));
			return;
		}
	}
}

void USoundVisComponent::CalculateFrequencySpectrum(USoundWave* InSoundWaveRef, const float InStartTime, const float InDuration, TArray<float>& OutFrequencies)
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
			kiss_fft_cpx* Buffer[2] = { 0 };
			kiss_fft_cpx* Output[2] = { 0 };

			// Create 1-dim Array with one slot for SamplesToRead
			int32 Dims[1] = { SamplesToRead };

			kiss_fftnd_cfg STF = kiss_fftnd_alloc(Dims, 1, 0, nullptr, nullptr);

     		int16* SamplePtr = reinterpret_cast<int16*>(InSoundWaveRef->CachedRealtimeFirstBuffer);

			// Allocate space in the Buffer and Output Arrays for all the data that FFT returns
			for (int32 ChannelIndex = 0; ChannelIndex < NumChannels; ChannelIndex++)
			{
				Buffer[ChannelIndex] = (kiss_fft_cpx*)KISS_FFT_MALLOC(sizeof(kiss_fft_cpx) * SamplesToRead);
				Output[ChannelIndex] = (kiss_fft_cpx*)KISS_FFT_MALLOC(sizeof(kiss_fft_cpx) * SamplesToRead);
			}

			// Shift our SamplePointer to the Current "FirstSample"
			SamplePtr += FirstSample * NumChannels;

			for (int32 SampleIndex = 0; SampleIndex < SamplesToRead; SampleIndex++)
			{
				for (int32 ChannelIndex = 0; ChannelIndex < NumChannels; ChannelIndex++)
				{
					// Make sure the Point is Valid and we don't go out of bounds
					if (SamplePtr != NULL && (SampleIndex + FirstSample < SampleCount))
					{
						// Use Window function to get a better result for the Data (Hann Window)
						Buffer[ChannelIndex][SampleIndex].r = GetFFTInValue(*SamplePtr, SampleIndex, SamplesToRead);
						Buffer[ChannelIndex][SampleIndex].i = 0.f;
					}
					else
					{
						// Use Window function to get a better result for the Data (Hann Window)
						Buffer[ChannelIndex][SampleIndex].r = 0.f;
						Buffer[ChannelIndex][SampleIndex].i = 0.f;
					}

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
				}
				else
				{
					OutFrequencies[SampleIndex] = ChannelSum / NumChannels;
				}
			}

			// Make sure to free up the FFT stuff
			KISS_FFT_FREE(STF);

			for (int32 ChannelIndex = 0; ChannelIndex < NumChannels; ++ChannelIndex)
			{
				KISS_FFT_FREE(Buffer[ChannelIndex]);
				KISS_FFT_FREE(Output[ChannelIndex]);
			}
		}
		else {
			PrintError(TEXT("InSoundVisData.PCMData is a nullptr!"));
		}
	}
	else {
		PrintError(TEXT("Number of Channels is < 0!"));
	}
}

float USoundVisComponent::GetFFTInValue(const int16 InSampleValue, const int16 InSampleIndex, const int16 InSampleCount)
{
	float FFTValue = InSampleValue;

	// Apply the Hann window
	FFTValue *= 0.5f * (1 - FMath::Cos(2 * PI * InSampleIndex / (InSampleCount - 1)));

	return FFTValue;
}

void USoundVisComponent::InitNewDecompressTask(USoundWave* InSoundWaveRef)
{
	// Do we already have a valid Runnable? If not, create a new one
	if (FAudioDecompressWorker::Runnable == NULL)
	{
		// Start Timer that watches the DecompressWorker State
		GetWorld()->GetTimerManager().ClearTimer(AudioDecompressTimer);
		GetWorld()->GetTimerManager().SetTimer(AudioDecompressTimer, this, &USoundVisComponent::Notify_SoundDecompressed, 0.1f, true);

		// Init new Worker and pass the SoundWaveRef to decompress it
		FAudioDecompressWorker::Runnable->InitializeWorker(InSoundWaveRef);
	}
	else if(FAudioDecompressWorker::Runnable->IsFinished())
	{
		// The Worker is finished and still valid, shut it down!
		FAudioDecompressWorker::ShutdownWorker();

		// Start Timer that watches the DecompressWorker State
		GetWorld()->GetTimerManager().ClearTimer(AudioDecompressTimer);
		GetWorld()->GetTimerManager().SetTimer(AudioDecompressTimer, this, &USoundVisComponent::Notify_SoundDecompressed, 0.1f, true);

		// Init new Worker and pass the SoundWaveRef to decompress it
		FAudioDecompressWorker::Runnable->InitializeWorker(InSoundWaveRef);
	}
	else {
		PrintLog(TEXT("Worker not finished!"));
	}
}

void USoundVisComponent::Notify_SoundDecompressed()
{
	// If the Worker finished..
	if (FAudioDecompressWorker::Runnable->IsFinished())
	{
		// ..clear the timer and..
		GetWorld()->GetTimerManager().ClearTimer(AudioDecompressTimer);

		//..broadcast the result to the Blueprint
		OnFileLoadCompleted.Broadcast(FAudioDecompressWorker::Runnable->GetSoundWaveRef());

		PrintLog(TEXT("Worker finished!"));
	}
	else {
		PrintLog(TEXT("Worker is working!"));
	}
}

void USoundVisComponent::HandleFrequencySpectrumCalculation()
{
	// Reference to the Client Viewport
	UGameViewportClient* Viewport = GetWorld()->GetGameViewport();

	// If the Window is not in the foreground, make sure to pause everything, so it won't get async!
	if (!Viewport->Viewport->IsForegroundWindow() && bPauseWhenWindowInBackground)
	{
		PrintLog(TEXT("Window is not in foreground. Pausing!"));

		BP_PauseCalculatingFrequencySpectrum();

		bSoundPausedByBackgroundWindow = true;
	}

	// Only proceed if we are not over the duration, or stopped/pause calculating
	if (CurrentSoundData && GetWorld()->GetTimerManager().GetTimerElapsed(SoundPlayerTimer) <= CurrentSoundData->Duration && bSoundPlaying)
	{
		// Dummy Array to Store the Frequencies in
		TArray<float> OutFrequencies;

		// Let our Function Calculate the Frequency Spectrum
		CalculateFrequencySpectrum(CurrentSoundData, GetWorld()->GetTimerManager().GetTimerElapsed(SoundPlayerTimer), CurrentSegmentLength, OutFrequencies);

		// Now that this is done, call the Delegate, so the Blueprint can work with it
		OnFrequencySpectrumCalculated.Broadcast(OutFrequencies);

		// Start this function again after a short delay
		FrequencySpectrumTimerDelegate.BindUFunction(this, FName("HandleFrequencySpectrumCalculation"));
		GetWorld()->GetTimerManager().SetTimer(FrequencySpectrumTimer, FrequencySpectrumTimerDelegate, 0.01f, false);
	}
	else
	{
		GetWorld()->GetTimerManager().ClearTimer(FrequencySpectrumTimer);
	}
}


/// Blueprint Versions of the File Data Functions

void USoundVisComponent::BP_LoadSoundFileFromHD(const FString InFilePath)
{
	LoadSoundFileFromHD(InFilePath);
}

void USoundVisComponent::BP_LoadAllSoundFileNamesFromHD(bool& bLoaded, const FString InDirectoryPath, const bool bInAbsolutePath, const FString InFileExtension, TArray<FString>& OutSoundFileNamesWithPath, TArray<FString>& OutSoundFileNamesWithoutPath)
{
	FString FinalPath = InDirectoryPath;

	if (!bInAbsolutePath)
	{
		FinalPath = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir()) + InDirectoryPath;
	}

	TArray<FString> DirectoriesToSkip;

	IPlatformFile &PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	FLocalTimestampDirectoryVisitor Visitor(PlatformFile, DirectoriesToSkip, DirectoriesToSkip, false);
	PlatformFile.IterateDirectory(*FinalPath, Visitor);

	for (TMap<FString, FDateTime>::TIterator TimestampIt(Visitor.FileTimes); TimestampIt; ++TimestampIt)
	{
		const FString FilePath = TimestampIt.Key();
		FString FileName = FPaths::GetCleanFilename(FilePath);

		bool bShouldAddFile = true;

		if (!InFileExtension.IsEmpty())
		{
			if (!(FPaths::GetExtension(FileName, false).Equals(InFileExtension, ESearchCase::IgnoreCase)))
			{
				bShouldAddFile = false;
			}
		}

		if (bShouldAddFile)
		{
			OutSoundFileNamesWithPath.Add(FilePath);

			FileName.FString::Split(FString("."), &FileName, nullptr, ESearchCase::IgnoreCase);

			OutSoundFileNamesWithoutPath.Add(FileName);
		}
	}

	bLoaded = true;
}

/// Blueprint Versions of the Analyze Functions

void USoundVisComponent::BP_CalculateFrequencySpectrum(USoundWave* InSoundWaveRef, const float InStartTime, const float InDuration, TArray<float>& OutFrequencies)
{
	CalculateFrequencySpectrum(InSoundWaveRef, InStartTime, InDuration, OutFrequencies);
}

void USoundVisComponent::BP_StartCalculatingFrequencySpectrum(USoundWave* InSoundWaveRef, const float InSegmentLength)
{
	// When the Sound Ref is NULL, better not start analyzing
	if (InSoundWaveRef == nullptr) {

		PrintError(TEXT("SoundWaveRef is a nullptr. Please load a Sound first!"));
		return;
	}

	// Make sure we are not already playing something
	if (!bSoundPlaying)
	{
		// If we pause, make sure to stop the Player first
		if (GetWorld()->GetTimerManager().IsTimerPaused(SoundPlayerTimer))
		{
			BP_StopCalculatingFrequencySpectrum();
		}
	
		// Save the Current SoundVisData
		CurrentSoundData = InSoundWaveRef;

		// And the Current SegmentLength
		CurrentSegmentLength = InSegmentLength;

		// Set the Sound and Play it
		AudioComponent->SetSound(InSoundWaveRef);
		AudioComponent->Play();

		// Mark Sound as playing
		bSoundPlaying = true;

		// Start Timer that is way too long, so we can use it as some kind of AudioPlayer Timer
		GetWorld()->GetTimerManager().SetTimer(SoundPlayerTimer, 99999.f, false);

		// Start the Calculation Loop
		HandleFrequencySpectrumCalculation();
	}
	else {
		PrintWarning(TEXT("AudioComponent is already Playing. Please stop it first!"));
	}
}

void USoundVisComponent::BP_PauseCalculatingFrequencySpectrum()
{
	// We can only pause, if we are playing
	if (bSoundPlaying && !bSoundPaused)
	{
		// Stop the Audio Component
		AudioComponent->Stop();

		// Mark sound as being paused
		bSoundPaused = true;

		// Pause the timer
		GetWorld()->GetTimerManager().PauseTimer(SoundPlayerTimer);

		// Start the tick, so we can check when the Player is back in the game
		SetComponentTickEnabled(true);
	}
	else {
		PrintWarning(TEXT("You can't pause something, that is not playing!"));
	}
}

void USoundVisComponent::BP_StopCalculatingFrequencySpectrum()
{
	// If we are playing the Sound, or it's paused, stop it
	if (bSoundPlaying || bSoundPaused)
	{
		// Stop the AudioComponent
		AudioComponent->Stop();

		// Mark Sound as not playing or paused
		bSoundPaused = false;
		bSoundPlaying = false;
		bSoundPausedByBackgroundWindow = false;

		// Clear the timer
		GetWorld()->GetTimerManager().ClearTimer(SoundPlayerTimer);

		// Clear Current SoundVisData
		CurrentSoundData = nullptr;

		// Clear CurrentSegmentLength
		CurrentSegmentLength = 0.0f;

		// Stop the Tick Function
		SetComponentTickEnabled(false);
	}
	else {
		PrintWarning(TEXT("You can't stop something, that is not playing or paused!"));
	}
}

void USoundVisComponent::BP_ResumeCalculatingFrequencySpectrum()
{
	if (bSoundPlaying && bSoundPaused)
	{
		// Start the Sound at the Point where we left it
		AudioComponent->Play(GetWorld()->GetTimerManager().GetTimerElapsed(SoundPlayerTimer));

		// Mark sound as no longer paused
		bSoundPaused = false;

		// UnPause the Timer again
		GetWorld()->GetTimerManager().UnPauseTimer(SoundPlayerTimer);

		// And start the Calculation again
		HandleFrequencySpectrumCalculation();	

		// Stop the Tick Function
		SetComponentTickEnabled(false);
	}
	else {
		PrintWarning(TEXT("AudioComponent is Playing or not paused!"));
	}
}

bool USoundVisComponent::IsPlayerPlaying()
{
	return (bSoundPlaying && !bSoundPaused);
}

bool USoundVisComponent::IsPlayerPaused()
{
	UWorld* World = GetWorld();

	if (World)
	{
		return (bSoundPlaying && bSoundPaused);
	}

	return false;
}

float USoundVisComponent::GetCurrentPlayBackTime()
{
	UWorld* World = GetWorld();

	if (World)
	{
		return World->GetTimerManager().GetTimerElapsed(SoundPlayerTimer);
	}

	return 0.0f;
}

/// Frequency Data Functions

void USoundVisComponent::BP_GetSpecificFrequencyValue(USoundWave* InSoundWave, TArray<float> InFrequencies, int32 InWantedFrequency, float& OutFrequencyValue)
{
	if (InSoundWave && InFrequencies.Num() > 0 && (int32)(InWantedFrequency * InFrequencies.Num() * 2 / InSoundWave->SampleRate) < InFrequencies.Num())
	{
		OutFrequencyValue = InFrequencies[(int32)(InWantedFrequency * InFrequencies.Num() * 2 / InSoundWave->SampleRate)];
	}
}

void USoundVisComponent::BP_GetAverageSubBassValue(USoundWave* InSoundWave, TArray<float> InFrequencies, float& OutAverageSubBass)
{
	BP_GetAverageFrequencyValueInRange(InSoundWave, InFrequencies, 20, 60, OutAverageSubBass);
}

void USoundVisComponent::BP_GetAverageBassValue(USoundWave* InSoundWave, TArray<float> InFrequencies, float& OutAverageBass)
{
	if (InSoundWave)
	{
		BP_GetAverageFrequencyValueInRange(InSoundWave, InFrequencies, 60, 250, OutAverageBass);
	}
}

void USoundVisComponent::BP_GetAverageFrequencyValueInRange(USoundWave* InSoundWave, TArray<float> InFrequencies, int32 InStartFrequence, int32 InEndFrequence, float& OutAverageFrequency)
{
	// Init the Return Value
	OutAverageFrequency = 0.0f;

	if (InSoundWave == nullptr)	
		return;

	if (InStartFrequence >= InEndFrequence || InStartFrequence < 0 || InEndFrequence > 22000) 
		return;

	int32 FStart = (int32)(InStartFrequence  * InFrequencies.Num() * 2 / InSoundWave->SampleRate);
	int32 FEnd = (int32)(InEndFrequence * InFrequencies.Num() * 2 / InSoundWave->SampleRate);

	if (FStart < 0 || FEnd >= InFrequencies.Num())
		return;

	int32 NumberOfFrequencies = 0;

	float ValueSum = 0.0f;

	for (int i = FStart; i <= FEnd; i++)
	{
		NumberOfFrequencies++;

		ValueSum += InFrequencies[i];
	}

	OutAverageFrequency = ValueSum / NumberOfFrequencies;
}