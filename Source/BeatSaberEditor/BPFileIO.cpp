// Fill out your copyright notice in the Description page of Project Settings.

#include "BPFileIO.h"

bool UBPFileIO::VerifyOrCreateDirectory(const FString & TestDir)
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	// Directory Exists?
	if (!PlatformFile.DirectoryExists(*TestDir))
	{
		PlatformFile.CreateDirectory(*TestDir);

		if (!PlatformFile.DirectoryExists(*TestDir))
		{
			return false;
		}
	}
	return true;
}

bool UBPFileIO::VerifyDirectory(const FString & TestDir)
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	// Directory Exists?
	if (!PlatformFile.DirectoryExists(*TestDir))
	{
		return false;
	}
	return true;
}

TArray<FString> UBPFileIO::FindAllDirectories(const FString & TestDir)
{
	TArray<FString> result;
	IFileManager& FileManager = IFileManager::Get();
	FString FinalPath = TestDir + "/*";

	FileManager.FindFiles(result, *FinalPath, false, true);
	return result;
}

TArray<FString> UBPFileIO::FindAllFiles(const FString & TestDir)
{
	TArray<FString> result;
	IFileManager& FileManager = IFileManager::Get();
	FString FinalPath = TestDir + "/*";

	FileManager.FindFiles(result, *FinalPath, true, false);
	return result;
}

bool UBPFileIO::VerifyFile(const FString & TestFile)
{
	if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*TestFile))
	{
		return true;
	}
	return false;
}

bool UBPFileIO::RenameOrMoveFile(const FString & InputFile, const FString & OutputFile)
{
	if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*InputFile))
	{
		return false;
	}

	if (!FPlatformFileManager::Get().GetPlatformFile().MoveFile(*OutputFile, *InputFile))
	{
		return false;
	}

	return true;
}

bool UBPFileIO::CopyFile(const FString & File, const FString& OutputDirectory, const FString& newName)
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	if (PlatformFile.FileExists(*File))
	{
		if (PlatformFile.DirectoryExists(*OutputDirectory))
		{
			PlatformFile.CopyFile(*FString(OutputDirectory + "/" + newName), *File);
			return true;
		}
	}
	return false;
}

bool UBPFileIO::DeleteFile(const FString & File)
{
	if (!FPlatformFileManager::Get().GetPlatformFile().DeleteFile(*File))
	{
		return false;
	}

	return true;
}

bool UBPFileIO::DeleteDirectory(const FString & Directory)
{
	if (!FPlatformFileManager::Get().GetPlatformFile().DeleteDirectory(*Directory))
	{
		return false;
	}

	return true;
}
