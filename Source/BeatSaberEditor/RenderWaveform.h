// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "Sound/SoundWave.h"
#include "Engine/CanvasRenderTarget2D.h"
#include "Engine/Canvas.h"
#include "ProceduralMeshComponent.h"

#include "RenderWaveform.generated.h"

/**
 * 
 */
UCLASS()
class BEATSABEREDITOR_API URenderWaveform : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	public:
		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Render Spectrogram"), Category = "Render Spectrogram")
		static void BP_RenderWaveform(USoundWave* InSoundWaveRef, UProceduralMeshComponent* Mesh, float InSongPosition, int SizeX);

		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Generate Spectrogram Mesh"), Category = "Render Spectrogram")
		static void BP_GenerateSpectrogramMesh(UProceduralMeshComponent* Mesh, int SizeX, int SizeY);

	private:
		static int To1D(int x, int y, int sizeX);
};
