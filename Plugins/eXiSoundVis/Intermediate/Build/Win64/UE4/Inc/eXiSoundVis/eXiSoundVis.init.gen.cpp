// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/eXiSoundVisPrivatePCH.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeeXiSoundVis_init() {}
	EXISOUNDVIS_API UFunction* Z_Construct_UDelegateFunction_eXiSoundVis_FileLoadCompleted__DelegateSignature();
	EXISOUNDVIS_API UFunction* Z_Construct_UDelegateFunction_eXiSoundVis_WorkerFinished__DelegateSignature();
	EXISOUNDVIS_API UFunction* Z_Construct_UDelegateFunction_eXiSoundVis_FrequencySpectrumCalculated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_eXiSoundVis()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_eXiSoundVis_FileLoadCompleted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_eXiSoundVis_WorkerFinished__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_eXiSoundVis_FrequencySpectrumCalculated__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/eXiSoundVis",
				PKG_CompiledIn | 0x00000000,
				0xFE4E0266,
				0x430ED400,
				SingletonFuncArray, ARRAY_COUNT(SingletonFuncArray),
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
