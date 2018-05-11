// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"

#include "AudioDecompress.h"

// Workers, to have an Async Decompress worker
#include "Runtime/Core/Public/Async/AsyncWork.h"

#include "AudioDecompressWorker.h"

#include "SoundVisComponent.generated.h"

USTRUCT(BlueprintType, Blueprintable)
struct FSoundVisData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "eXiSoundVis | Sounds")
		class USoundWave* SoundWaveRef;

	TSharedPtr<uint8> PCMData;

	~FSoundVisData()
	{
		SoundWaveRef = nullptr;
		PCMData.Reset();
	}
};

// Delegate that passes FSoundVisData
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFileLoadCompleted, USoundWave*, SoundWaveRef);

// Delegate used by the Worker
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWorkerFinished, USoundWave*, SoundWaveRef);

// Delegate that passes FrequencyValues
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFrequencySpectrumCalculated, const TArray<float>&, OutFrequencies);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), meta=(DisplayName = "SoundVisComponent") )
class EXISOUNDVIS_API USoundVisComponent : public UActorComponent
{
	GENERATED_BODY()

	/// VARIABLES ///
		
private:

	// Reference to the SoundWave we are decompressing
	USoundWave* CompressedSoundWaveRef;

	/// Blueprint Exposed Variables

public:

	// Audio Component to Play our Audio with
	UPROPERTY(BlueprintReadOnly, Category = "SoundVis | Sound Player")
	class UAudioComponent* AudioComponent;

	// TimerHandle for the SoundPlayer, that only exists to check how long a Sound is running
	UPROPERTY(BlueprintReadOnly, Category = "SoundVis | Frequency Spectrum")
		FTimerHandle SoundPlayerTimer;

	UPROPERTY(BlueprintReadOnly, Category = "SoundVis | Sound Player")
		bool bSoundPlaying;

	UPROPERTY(BlueprintReadOnly, Category = "SoundVis | Sound Player")
		bool bSoundPaused;

	UPROPERTY(BlueprintReadOnly, Category = "SoundVis | Sound Player")
		bool bSoundPausedByBackgroundWindow = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SoundVis | Sound Player")
		bool bPauseWhenWindowInBackground = true;
		
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SoundVis | Sound Player")
	bool bNormalizeOutputToDb = false;

	/// Delegates

	// Blueprint Delegate that gets Broadcasted when the File is loaded completely
	UPROPERTY(BlueprintAssignable)
		FFileLoadCompleted OnFileLoadCompleted;

	// Blueprint Delegate that gets Broadcasted each time the Frequency Spectrum is calculated
	UPROPERTY(BlueprintAssignable)
		FFrequencySpectrumCalculated OnFrequencySpectrumCalculated;

	/// Debug

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "SoundVis | Debugging")
		bool bShowLogDebug;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "SoundVis | Debugging")
		bool bShowWarningDebug;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "SoundVis | Debugging")
		bool bShowErrorDebug;

private:

	// The CurrentSoundData is only valid if the AudioPlayer is paused or running!
	USoundWave* CurrentSoundData;

	// The CurrentSegmentLength is only valid if the AudioPlayer is pause or running
	float CurrentSegmentLength;

	// Timer and Delegate for the DecompressWorker
	FTimerHandle AudioDecompressTimer;

	// Timer and Delegate for the auto calculation of the spectrum
	FTimerHandle FrequencySpectrumTimer;
	FTimerDelegate FrequencySpectrumTimerDelegate;

	/// FUNCTIONS ///

public:

	/// De-/Constructors

	// Sets default values for this component's properties
	USoundVisComponent();

	// Cleans up stuff
	~USoundVisComponent();

	/// Overrides

	// Tick called each frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/// Functions to load Data from the HardDrive

	// Function to load a sound file from the HD
	void LoadSoundFileFromHD(const FString& InFilePath);

	// Function to fill in the RawFile sound data into the USoundWave object
	bool FillSoundWaveInfo(class USoundWave* InSoundWave, TArray<uint8>* InRawFile);

	/// Function to decompress the compressed Data that comes with the .ogg file

	void GetPCMDataFromFile(class USoundWave* InSoundWave);

	/// Function to calculate the frequency spectrum

	void CalculateFrequencySpectrum(USoundWave* InSoundWaveRef, const float InStartTime, const float InDuration, TArray<float>& OutFrequencies);

	/// Helper Functions

	// Function used to get a better value for the FFT. Uses Hann Window
	float GetFFTInValue(const int16 InSampleValue, const int16 InSampleIndex, const int16 InSampleCount);

	// Function to Start a new DecompressTask
	void InitNewDecompressTask(USoundWave* InSoundWaveRef);

	// DEBUG Test function to check if Task can call stuff in here
	void Notify_SoundDecompressed();

	// Function that is looped to handle the calculation of the FrequencySpectrum
	UFUNCTION()
		void HandleFrequencySpectrumCalculation();

	/// Blueprint Versions of the File Data Functions

	/**
	* Will load a file (currently .ogg) from your Hard-Drive and save it in a USoundWave variable
	*
	* @param	InFilePath	Absolute path to the File. E.g.: "C:/Sounds/File.ogg"
	*
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Load Sound File"), Category = "SoundVis | SoundFile")
		void BP_LoadSoundFileFromHD(const FString InFilePath);

	/**
	* Will get an Array of Names of the Found SoundFiles
	*
	* @param	InDirectoryPath					Path to the Directory in which the Files are (absolute/relative)
	* @param	bInAbsolutePath					Tells if the DirectoryPath is absolute (C:/..) or relative to the GameDirectory
	* @param	InFileExtension					This is the Extension the Function should look for. For the Plugin it should be .ogg
	* @param	OutSoundFileNamesWithPath		The Array of found SoundFileNames (full Path/Name.Extension)
	* @param	OutSoundFileNamesWithoutPath	The Array of found SoundFileNames (only Name.Extension)
	*
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Load Sound File Names"), Category = "SoundVis | SoundFile")
		void BP_LoadAllSoundFileNamesFromHD(bool& bLoaded, const FString InDirectoryPath, const bool bInAbsolutePath, const FString InFileExtension, TArray<FString>& OutSoundFileNamesWithPath, TArray<FString>& OutSoundFileNamesWithoutPath);

	/**
	* Will call the CalculateFrequencySpectrum function from BP Side
	*
	* @param	InSoundWave		SoundWave that gets analyzed
	* @param	InStartTime		The StartPoint of the TimeWindow we want to analyze
	* @param	InDuration		The length of the TimeWindow we want to analyze
	* @param	OutFrequencies	Array of float values for x Frequencies from 0 to 22000
	*
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Calculate Freq Spectrum"), Category = "SoundVis | Frequency Spectrum")
		void BP_CalculateFrequencySpectrum(USoundWave* InSoundWaveRef, const float InStartTime, const float InDuration, TArray<float>& OutFrequencies);

	/**
	* Will play the passed USoundWave and also start calculating the FrequencySpectrum (loops over the InSegmentLength sized parts)
	*
	* @param	InSoundWaveRef	SoundWave that gets started and analyzed
	* @param	InSegmentLength	Length of the SoundWave segment that should get analyzed
	*
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Start Calculate Freq Spectrum"), Category = "SoundVis | Frequency Spectrum")
		void BP_StartCalculatingFrequencySpectrum(USoundWave* InSoundWaveRef, const float InSegmentLength);

	/**
	* If playing, pauses the current playing USoundWave and FrequencySpectrum calculation
	*
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Pause Calculate Freq Spectrum"), Category = "SoundVis | Frequency Spectrum")
		void BP_PauseCalculatingFrequencySpectrum();

	/**
	* If playing or paused, stops the current USoundWave and FrequencySpectrum calculation
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Stop Calculate Freq Spectrum"), Category = "SoundVis | Frequency Spectrum")
		void BP_StopCalculatingFrequencySpectrum();

	/**
	* If paused, resumes the current USoundWave and FrequencySpectrum calculation
	*
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Resume Calculate Freq Spectrum"), Category = "SoundVis | Frequency Spectrum")
		void BP_ResumeCalculatingFrequencySpectrum();

	/// Sound Player Information

	/**
	* Returns if the Player is currently playing or not
	* 
	* @return True if playing
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Is Player Playing"), Category = "SoundVis | SoundPlayer")
		bool IsPlayerPlaying();

	/**
	* Returns if the Player is currently paused or not
	*
	* @return True if paused
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Is Player Paused"), Category = "SoundVis | SoundPlayer")
		bool IsPlayerPaused();

	/**
	* Return the current PlayBack Time of the Sound Player Timer
	*
	* @return Current PlayBack Time
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Current Playback Time"), Category = "SoundVis | SoundPlayer")
		float GetCurrentPlayBackTime();

	/// Frequency Data Functions

	/**
	* This function will return the value of a specific frequency. It's needs a Frequency Array from the "BP_CalculateFrequencySpectrum" function and the matching SoundWave
	*
	* @param	InSoundWave			SoundWave to get specific data from (SampleRate)
	* @param	InFrequencies		Array of float values for different frequencies from 0 to 22000. Can be get by using the "BP_CalculateFrequencySpectrum" function
	* @param	InWantedFrequency	The Frequency of which you want the value of
	* @param	OutFrequencyValue	Float value of the requested frequency
	*
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Freq Value"), Category = "SoundVis | Frequency Values")
		static void BP_GetSpecificFrequencyValue(USoundWave* InSoundWave, TArray<float> InFrequencies, int32 InWantedFrequency, float& OutFrequencyValue);

	/**
	* This function will return the average value for SubBass (20 to 60hz)
	*
	* @param	InSoundWave		SoundWave to get specific data from (SampleRate)
	* @param	InFrequencies	Array of float values for different frequencies from 0 to 22000. Can be get by using the "BP_CalculateFrequencySpectrum" function
	* @param	OutAverageSubBass Average value of the frequencies from 20 to 60
	*
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Average Subbass Value"), Category = "SoundVis | Frequency Values")
		static void BP_GetAverageSubBassValue(USoundWave* InSoundWave, TArray<float> InFrequencies, float& OutAverageSubBass);

	/**
	* This function will return the average value for Bass (60 to 250hz)
	*
	* @param	InSoundWave		SoundWave to get specific data from (SampleRate)
	* @param	InFrequencies	Array of float values for different frequencies from 0 to 22000. Can be get by using the "BP_CalculateFrequencySpectrum" function
	* @param	OutAverageBass	Average value of the frequencies from 60 to 250
	*
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Average Bass Value"), Category = "SoundVis | Frequency Values")
		static void BP_GetAverageBassValue(USoundWave* InSoundWave, TArray<float> InFrequencies, float& OutAverageBass);

	/**
	* This function will return the average value for a given frequency interval e.g.: 20 to 60 (SubBass)
	*
	* @param	InSoundWave			SoundWave to get specific data from (SampleRate)
	* @param	InFrequencies		Array of float values for different frequencies from 0 to 22000. Can be get by using the "BP_CalculateFrequencySpectrum" function
	* @param	InStartFrequency		Start Frequency of the Frequency interval
	* @param	InEndFrequency		End Frequency of the Frequency interval
	* @param	OutAverageFrequency	Average value of the requested frequency interval
	*
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Average Freq Value In Range"), Category = "SoundVis | Frequency Values")
		static void BP_GetAverageFrequencyValueInRange(USoundWave* InSoundWave, TArray<float> InFrequencies, int32 InStartFrequence, int32 InEndFrequence, float& OutAverageFrequency);
};
