// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlatformFilemanager.h"
#include "GenericPlatformFile.h"
#include "FileManager.h"
#include "BPFileIO.generated.h"

/**
 * 
 */
UCLASS()
class BEATSABEREDITOR_API UBPFileIO : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "File IO")
		static bool VerifyOrCreateDirectory(const FString& TestDir);

	UFUNCTION(BlueprintCallable, Category = "File IO")
		static bool VerifyDirectory(const FString& TestDir);

	UFUNCTION(BlueprintCallable, Category = "File IO")
		static TArray<FString> FindAllDirectories(const FString& TestDir);

	UFUNCTION(BlueprintCallable, Category = "File IO")
		static TArray<FString> FindAllFiles(const FString& TestDir);
	
	UFUNCTION(BlueprintCallable, Category = "File IO")
		static bool VerifyFile(const FString& TestFile);

	UFUNCTION(BlueprintCallable, Category = "File IO")
		static bool RenameOrMoveFile(const FString& InputFile, const FString& OutputFile);
	
	UFUNCTION(BlueprintCallable, Category = "File IO")
		static bool CopyFile(const FString& File, const FString& OutputDirectory, const FString& newName);

	UFUNCTION(BlueprintCallable, Category = "File IO")
		static bool DeleteFile(const FString& File);

	UFUNCTION(BlueprintCallable, Category = "File IO")
		static bool DeleteDirectory(const FString& Directory);
};
