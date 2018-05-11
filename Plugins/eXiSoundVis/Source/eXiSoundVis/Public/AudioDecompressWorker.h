// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AudioDecompress.h"

//#include "AudioDecompressWorker.generated.h"

class FAudioDecompressWorker : public FRunnable
{
	/// VARIABLES ///

public:

	// Singleton Instance, can access the Thread any time via static accessors 
	static FAudioDecompressWorker* Runnable;

	// Thread to run the worker FRunnable on
	FRunnableThread* Thread;

private:

	// Stop this thread? Uses Thread Safe Counter
	FThreadSafeCounter StopTaskCounter;

	// Bool to check if the thread is running
	bool bIsFinished;

	// Counter for the ThreadNames
	static int32 ThreadCounter;

protected:

	// Pointer to SoundWave Object we want to Decompress
	class USoundWave* SoundWaveRef;

	// Some Compressed Audio Information
	ICompressedAudioInfo* AudioInfo;

	/// FUNCTIONS ///

public:

	// Constructor for my De-Compressor
	FAudioDecompressWorker(class USoundWave* InSoundWaveRef);
	~FAudioDecompressWorker();

	// Custom Init function
	static FAudioDecompressWorker* InitializeWorker(class USoundWave* InSoundWaveRef);

	// Custom Shutdown function
	static void ShutdownWorker();

	// Start FRunnable Interface
	virtual bool Init();
	virtual uint32 Run();
	virtual void Stop();
	virtual void Exit();
	// End FRunnable Interface

	// Make sure Thread completed
	void EnsureCompletion();

	/// GETTER / SETTER

	class USoundWave* GetSoundWaveRef() const {
		return SoundWaveRef;
	}

	bool IsFinished() const {
		return bIsFinished;
	}
};