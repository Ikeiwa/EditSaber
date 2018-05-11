// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/eXiSoundVisPrivatePCH.h"
#include "Public/SoundVisComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundVisComponent() {}
// Cross Module References
	EXISOUNDVIS_API UFunction* Z_Construct_UDelegateFunction_eXiSoundVis_FrequencySpectrumCalculated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_eXiSoundVis();
	EXISOUNDVIS_API UFunction* Z_Construct_UDelegateFunction_eXiSoundVis_WorkerFinished__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	EXISOUNDVIS_API UFunction* Z_Construct_UDelegateFunction_eXiSoundVis_FileLoadCompleted__DelegateSignature();
	EXISOUNDVIS_API UScriptStruct* Z_Construct_UScriptStruct_FSoundVisData();
	EXISOUNDVIS_API UClass* Z_Construct_UClass_USoundVisComponent_NoRegister();
	EXISOUNDVIS_API UClass* Z_Construct_UClass_USoundVisComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	EXISOUNDVIS_API UFunction* Z_Construct_UFunction_USoundVisComponent_BP_CalculateFrequencySpectrum();
	EXISOUNDVIS_API UFunction* Z_Construct_UFunction_USoundVisComponent_BP_GetAverageBassValue();
	EXISOUNDVIS_API UFunction* Z_Construct_UFunction_USoundVisComponent_BP_GetAverageFrequencyValueInRange();
	EXISOUNDVIS_API UFunction* Z_Construct_UFunction_USoundVisComponent_BP_GetAverageSubBassValue();
	EXISOUNDVIS_API UFunction* Z_Construct_UFunction_USoundVisComponent_BP_GetSpecificFrequencyValue();
	EXISOUNDVIS_API UFunction* Z_Construct_UFunction_USoundVisComponent_BP_LoadAllSoundFileNamesFromHD();
	EXISOUNDVIS_API UFunction* Z_Construct_UFunction_USoundVisComponent_BP_LoadSoundFileFromHD();
	EXISOUNDVIS_API UFunction* Z_Construct_UFunction_USoundVisComponent_BP_PauseCalculatingFrequencySpectrum();
	EXISOUNDVIS_API UFunction* Z_Construct_UFunction_USoundVisComponent_BP_ResumeCalculatingFrequencySpectrum();
	EXISOUNDVIS_API UFunction* Z_Construct_UFunction_USoundVisComponent_BP_StartCalculatingFrequencySpectrum();
	EXISOUNDVIS_API UFunction* Z_Construct_UFunction_USoundVisComponent_BP_StopCalculatingFrequencySpectrum();
	EXISOUNDVIS_API UFunction* Z_Construct_UFunction_USoundVisComponent_GetCurrentPlayBackTime();
	EXISOUNDVIS_API UFunction* Z_Construct_UFunction_USoundVisComponent_HandleFrequencySpectrumCalculation();
	EXISOUNDVIS_API UFunction* Z_Construct_UFunction_USoundVisComponent_IsPlayerPaused();
	EXISOUNDVIS_API UFunction* Z_Construct_UFunction_USoundVisComponent_IsPlayerPlaying();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_eXiSoundVis_FrequencySpectrumCalculated__DelegateSignature()
	{
		struct _Script_eXiSoundVis_eventFrequencySpectrumCalculated_Parms
		{
			TArray<float> OutFrequencies;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutFrequencies_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutFrequencies = { UE4CodeGen_Private::EPropertyClass::Array, "OutFrequencies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_eXiSoundVis_eventFrequencySpectrumCalculated_Parms, OutFrequencies), METADATA_PARAMS(NewProp_OutFrequencies_MetaData, ARRAY_COUNT(NewProp_OutFrequencies_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutFrequencies_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "OutFrequencies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutFrequencies,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutFrequencies_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
				{ "ToolTip", "Delegate that passes FrequencyValues" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_eXiSoundVis, "FrequencySpectrumCalculated__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_eXiSoundVis_eventFrequencySpectrumCalculated_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_eXiSoundVis_WorkerFinished__DelegateSignature()
	{
		struct _Script_eXiSoundVis_eventWorkerFinished_Parms
		{
			USoundWave* SoundWaveRef;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundWaveRef = { UE4CodeGen_Private::EPropertyClass::Object, "SoundWaveRef", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_eXiSoundVis_eventWorkerFinished_Parms, SoundWaveRef), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundWaveRef,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
				{ "ToolTip", "Delegate used by the Worker" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_eXiSoundVis, "WorkerFinished__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_eXiSoundVis_eventWorkerFinished_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_eXiSoundVis_FileLoadCompleted__DelegateSignature()
	{
		struct _Script_eXiSoundVis_eventFileLoadCompleted_Parms
		{
			USoundWave* SoundWaveRef;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundWaveRef = { UE4CodeGen_Private::EPropertyClass::Object, "SoundWaveRef", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_eXiSoundVis_eventFileLoadCompleted_Parms, SoundWaveRef), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundWaveRef,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
				{ "ToolTip", "Delegate that passes FSoundVisData" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_eXiSoundVis, "FileLoadCompleted__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_eXiSoundVis_eventFileLoadCompleted_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FSoundVisData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EXISOUNDVIS_API uint32 Get_Z_Construct_UScriptStruct_FSoundVisData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundVisData, Z_Construct_UPackage__Script_eXiSoundVis(), TEXT("SoundVisData"), sizeof(FSoundVisData), Get_Z_Construct_UScriptStruct_FSoundVisData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundVisData(FSoundVisData::StaticStruct, TEXT("/Script/eXiSoundVis"), TEXT("SoundVisData"), false, nullptr, nullptr);
static struct FScriptStruct_eXiSoundVis_StaticRegisterNativesFSoundVisData
{
	FScriptStruct_eXiSoundVis_StaticRegisterNativesFSoundVisData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundVisData")),new UScriptStruct::TCppStructOps<FSoundVisData>);
	}
} ScriptStruct_eXiSoundVis_StaticRegisterNativesFSoundVisData;
	UScriptStruct* Z_Construct_UScriptStruct_FSoundVisData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundVisData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_eXiSoundVis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundVisData"), sizeof(FSoundVisData), Get_Z_Construct_UScriptStruct_FSoundVisData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundVisData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundWaveRef_MetaData[] = {
				{ "Category", "eXiSoundVis | Sounds" },
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundWaveRef = { UE4CodeGen_Private::EPropertyClass::Object, "SoundWaveRef", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FSoundVisData, SoundWaveRef), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(NewProp_SoundWaveRef_MetaData, ARRAY_COUNT(NewProp_SoundWaveRef_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundWaveRef,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_eXiSoundVis,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SoundVisData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSoundVisData),
				alignof(FSoundVisData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundVisData_CRC() { return 2612194874U; }
	void USoundVisComponent::StaticRegisterNativesUSoundVisComponent()
	{
		UClass* Class = USoundVisComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_CalculateFrequencySpectrum", &USoundVisComponent::execBP_CalculateFrequencySpectrum },
			{ "BP_GetAverageBassValue", &USoundVisComponent::execBP_GetAverageBassValue },
			{ "BP_GetAverageFrequencyValueInRange", &USoundVisComponent::execBP_GetAverageFrequencyValueInRange },
			{ "BP_GetAverageSubBassValue", &USoundVisComponent::execBP_GetAverageSubBassValue },
			{ "BP_GetSpecificFrequencyValue", &USoundVisComponent::execBP_GetSpecificFrequencyValue },
			{ "BP_LoadAllSoundFileNamesFromHD", &USoundVisComponent::execBP_LoadAllSoundFileNamesFromHD },
			{ "BP_LoadSoundFileFromHD", &USoundVisComponent::execBP_LoadSoundFileFromHD },
			{ "BP_PauseCalculatingFrequencySpectrum", &USoundVisComponent::execBP_PauseCalculatingFrequencySpectrum },
			{ "BP_ResumeCalculatingFrequencySpectrum", &USoundVisComponent::execBP_ResumeCalculatingFrequencySpectrum },
			{ "BP_StartCalculatingFrequencySpectrum", &USoundVisComponent::execBP_StartCalculatingFrequencySpectrum },
			{ "BP_StopCalculatingFrequencySpectrum", &USoundVisComponent::execBP_StopCalculatingFrequencySpectrum },
			{ "GetCurrentPlayBackTime", &USoundVisComponent::execGetCurrentPlayBackTime },
			{ "HandleFrequencySpectrumCalculation", &USoundVisComponent::execHandleFrequencySpectrumCalculation },
			{ "IsPlayerPaused", &USoundVisComponent::execIsPlayerPaused },
			{ "IsPlayerPlaying", &USoundVisComponent::execIsPlayerPlaying },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USoundVisComponent_BP_CalculateFrequencySpectrum()
	{
		struct SoundVisComponent_eventBP_CalculateFrequencySpectrum_Parms
		{
			USoundWave* InSoundWaveRef;
			float InStartTime;
			float InDuration;
			TArray<float> OutFrequencies;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutFrequencies = { UE4CodeGen_Private::EPropertyClass::Array, "OutFrequencies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SoundVisComponent_eventBP_CalculateFrequencySpectrum_Parms, OutFrequencies), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutFrequencies_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "OutFrequencies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDuration_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDuration = { UE4CodeGen_Private::EPropertyClass::Float, "InDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(SoundVisComponent_eventBP_CalculateFrequencySpectrum_Parms, InDuration), METADATA_PARAMS(NewProp_InDuration_MetaData, ARRAY_COUNT(NewProp_InDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStartTime_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InStartTime = { UE4CodeGen_Private::EPropertyClass::Float, "InStartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(SoundVisComponent_eventBP_CalculateFrequencySpectrum_Parms, InStartTime), METADATA_PARAMS(NewProp_InStartTime_MetaData, ARRAY_COUNT(NewProp_InStartTime_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSoundWaveRef = { UE4CodeGen_Private::EPropertyClass::Object, "InSoundWaveRef", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SoundVisComponent_eventBP_CalculateFrequencySpectrum_Parms, InSoundWaveRef), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutFrequencies,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutFrequencies_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InStartTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSoundWaveRef,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SoundVis | Frequency Spectrum" },
				{ "DisplayName", "Calculate Freq Spectrum" },
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
				{ "ToolTip", "Will call the CalculateFrequencySpectrum function from BP Side\n\n@param        InSoundWave             SoundWave that gets analyzed\n@param        InStartTime             The StartPoint of the TimeWindow we want to analyze\n@param        InDuration              The length of the TimeWindow we want to analyze\n@param        OutFrequencies  Array of float values for x Frequencies from 0 to 22000" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundVisComponent, "BP_CalculateFrequencySpectrum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(SoundVisComponent_eventBP_CalculateFrequencySpectrum_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USoundVisComponent_BP_GetAverageBassValue()
	{
		struct SoundVisComponent_eventBP_GetAverageBassValue_Parms
		{
			USoundWave* InSoundWave;
			TArray<float> InFrequencies;
			float OutAverageBass;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutAverageBass = { UE4CodeGen_Private::EPropertyClass::Float, "OutAverageBass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SoundVisComponent_eventBP_GetAverageBassValue_Parms, OutAverageBass), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InFrequencies = { UE4CodeGen_Private::EPropertyClass::Array, "InFrequencies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SoundVisComponent_eventBP_GetAverageBassValue_Parms, InFrequencies), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InFrequencies_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "InFrequencies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSoundWave = { UE4CodeGen_Private::EPropertyClass::Object, "InSoundWave", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SoundVisComponent_eventBP_GetAverageBassValue_Parms, InSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutAverageBass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InFrequencies,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InFrequencies_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSoundWave,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SoundVis | Frequency Values" },
				{ "DisplayName", "Get Average Bass Value" },
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
				{ "ToolTip", "This function will return the average value for Bass (60 to 250hz)\n\n@param        InSoundWave             SoundWave to get specific data from (SampleRate)\n@param        InFrequencies   Array of float values for different frequencies from 0 to 22000. Can be get by using the \"BP_CalculateFrequencySpectrum\" function\n@param        OutAverageBass  Average value of the frequencies from 60 to 250" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundVisComponent, "BP_GetAverageBassValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(SoundVisComponent_eventBP_GetAverageBassValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USoundVisComponent_BP_GetAverageFrequencyValueInRange()
	{
		struct SoundVisComponent_eventBP_GetAverageFrequencyValueInRange_Parms
		{
			USoundWave* InSoundWave;
			TArray<float> InFrequencies;
			int32 InStartFrequence;
			int32 InEndFrequence;
			float OutAverageFrequency;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutAverageFrequency = { UE4CodeGen_Private::EPropertyClass::Float, "OutAverageFrequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SoundVisComponent_eventBP_GetAverageFrequencyValueInRange_Parms, OutAverageFrequency), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InEndFrequence = { UE4CodeGen_Private::EPropertyClass::Int, "InEndFrequence", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SoundVisComponent_eventBP_GetAverageFrequencyValueInRange_Parms, InEndFrequence), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InStartFrequence = { UE4CodeGen_Private::EPropertyClass::Int, "InStartFrequence", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SoundVisComponent_eventBP_GetAverageFrequencyValueInRange_Parms, InStartFrequence), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InFrequencies = { UE4CodeGen_Private::EPropertyClass::Array, "InFrequencies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SoundVisComponent_eventBP_GetAverageFrequencyValueInRange_Parms, InFrequencies), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InFrequencies_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "InFrequencies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSoundWave = { UE4CodeGen_Private::EPropertyClass::Object, "InSoundWave", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SoundVisComponent_eventBP_GetAverageFrequencyValueInRange_Parms, InSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutAverageFrequency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InEndFrequence,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InStartFrequence,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InFrequencies,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InFrequencies_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSoundWave,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SoundVis | Frequency Values" },
				{ "DisplayName", "Get Average Freq Value In Range" },
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
				{ "ToolTip", "This function will return the average value for a given frequency interval e.g.: 20 to 60 (SubBass)\n\n@param        InSoundWave                     SoundWave to get specific data from (SampleRate)\n@param        InFrequencies           Array of float values for different frequencies from 0 to 22000. Can be get by using the \"BP_CalculateFrequencySpectrum\" function\n@param        InStartFrequency                Start Frequency of the Frequency interval\n@param        InEndFrequency          End Frequency of the Frequency interval\n@param        OutAverageFrequency     Average value of the requested frequency interval" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundVisComponent, "BP_GetAverageFrequencyValueInRange", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(SoundVisComponent_eventBP_GetAverageFrequencyValueInRange_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USoundVisComponent_BP_GetAverageSubBassValue()
	{
		struct SoundVisComponent_eventBP_GetAverageSubBassValue_Parms
		{
			USoundWave* InSoundWave;
			TArray<float> InFrequencies;
			float OutAverageSubBass;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutAverageSubBass = { UE4CodeGen_Private::EPropertyClass::Float, "OutAverageSubBass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SoundVisComponent_eventBP_GetAverageSubBassValue_Parms, OutAverageSubBass), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InFrequencies = { UE4CodeGen_Private::EPropertyClass::Array, "InFrequencies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SoundVisComponent_eventBP_GetAverageSubBassValue_Parms, InFrequencies), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InFrequencies_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "InFrequencies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSoundWave = { UE4CodeGen_Private::EPropertyClass::Object, "InSoundWave", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SoundVisComponent_eventBP_GetAverageSubBassValue_Parms, InSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutAverageSubBass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InFrequencies,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InFrequencies_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSoundWave,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SoundVis | Frequency Values" },
				{ "DisplayName", "Get Average Subbass Value" },
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
				{ "ToolTip", "This function will return the average value for SubBass (20 to 60hz)\n\n@param        InSoundWave             SoundWave to get specific data from (SampleRate)\n@param        InFrequencies   Array of float values for different frequencies from 0 to 22000. Can be get by using the \"BP_CalculateFrequencySpectrum\" function\n@param        OutAverageSubBass Average value of the frequencies from 20 to 60" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundVisComponent, "BP_GetAverageSubBassValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(SoundVisComponent_eventBP_GetAverageSubBassValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USoundVisComponent_BP_GetSpecificFrequencyValue()
	{
		struct SoundVisComponent_eventBP_GetSpecificFrequencyValue_Parms
		{
			USoundWave* InSoundWave;
			TArray<float> InFrequencies;
			int32 InWantedFrequency;
			float OutFrequencyValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutFrequencyValue = { UE4CodeGen_Private::EPropertyClass::Float, "OutFrequencyValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SoundVisComponent_eventBP_GetSpecificFrequencyValue_Parms, OutFrequencyValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InWantedFrequency = { UE4CodeGen_Private::EPropertyClass::Int, "InWantedFrequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SoundVisComponent_eventBP_GetSpecificFrequencyValue_Parms, InWantedFrequency), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InFrequencies = { UE4CodeGen_Private::EPropertyClass::Array, "InFrequencies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SoundVisComponent_eventBP_GetSpecificFrequencyValue_Parms, InFrequencies), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InFrequencies_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "InFrequencies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSoundWave = { UE4CodeGen_Private::EPropertyClass::Object, "InSoundWave", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SoundVisComponent_eventBP_GetSpecificFrequencyValue_Parms, InSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutFrequencyValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InWantedFrequency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InFrequencies,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InFrequencies_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSoundWave,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SoundVis | Frequency Values" },
				{ "DisplayName", "Get Freq Value" },
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
				{ "ToolTip", "This function will return the value of a specific frequency. It's needs a Frequency Array from the \"BP_CalculateFrequencySpectrum\" function and the matching SoundWave\n\n@param        InSoundWave                     SoundWave to get specific data from (SampleRate)\n@param        InFrequencies           Array of float values for different frequencies from 0 to 22000. Can be get by using the \"BP_CalculateFrequencySpectrum\" function\n@param        InWantedFrequency       The Frequency of which you want the value of\n@param        OutFrequencyValue       Float value of the requested frequency" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundVisComponent, "BP_GetSpecificFrequencyValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(SoundVisComponent_eventBP_GetSpecificFrequencyValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USoundVisComponent_BP_LoadAllSoundFileNamesFromHD()
	{
		struct SoundVisComponent_eventBP_LoadAllSoundFileNamesFromHD_Parms
		{
			bool bLoaded;
			FString InDirectoryPath;
			bool bInAbsolutePath;
			FString InFileExtension;
			TArray<FString> OutSoundFileNamesWithPath;
			TArray<FString> OutSoundFileNamesWithoutPath;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutSoundFileNamesWithoutPath = { UE4CodeGen_Private::EPropertyClass::Array, "OutSoundFileNamesWithoutPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SoundVisComponent_eventBP_LoadAllSoundFileNamesFromHD_Parms, OutSoundFileNamesWithoutPath), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutSoundFileNamesWithoutPath_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "OutSoundFileNamesWithoutPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutSoundFileNamesWithPath = { UE4CodeGen_Private::EPropertyClass::Array, "OutSoundFileNamesWithPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SoundVisComponent_eventBP_LoadAllSoundFileNamesFromHD_Parms, OutSoundFileNamesWithPath), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutSoundFileNamesWithPath_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "OutSoundFileNamesWithPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFileExtension_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFileExtension = { UE4CodeGen_Private::EPropertyClass::Str, "InFileExtension", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(SoundVisComponent_eventBP_LoadAllSoundFileNamesFromHD_Parms, InFileExtension), METADATA_PARAMS(NewProp_InFileExtension_MetaData, ARRAY_COUNT(NewProp_InFileExtension_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInAbsolutePath_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			auto NewProp_bInAbsolutePath_SetBit = [](void* Obj){ ((SoundVisComponent_eventBP_LoadAllSoundFileNamesFromHD_Parms*)Obj)->bInAbsolutePath = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInAbsolutePath = { UE4CodeGen_Private::EPropertyClass::Bool, "bInAbsolutePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SoundVisComponent_eventBP_LoadAllSoundFileNamesFromHD_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInAbsolutePath_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInAbsolutePath_MetaData, ARRAY_COUNT(NewProp_bInAbsolutePath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDirectoryPath_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InDirectoryPath = { UE4CodeGen_Private::EPropertyClass::Str, "InDirectoryPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(SoundVisComponent_eventBP_LoadAllSoundFileNamesFromHD_Parms, InDirectoryPath), METADATA_PARAMS(NewProp_InDirectoryPath_MetaData, ARRAY_COUNT(NewProp_InDirectoryPath_MetaData)) };
			auto NewProp_bLoaded_SetBit = [](void* Obj){ ((SoundVisComponent_eventBP_LoadAllSoundFileNamesFromHD_Parms*)Obj)->bLoaded = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoaded = { UE4CodeGen_Private::EPropertyClass::Bool, "bLoaded", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SoundVisComponent_eventBP_LoadAllSoundFileNamesFromHD_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLoaded_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutSoundFileNamesWithoutPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutSoundFileNamesWithoutPath_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutSoundFileNamesWithPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutSoundFileNamesWithPath_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InFileExtension,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInAbsolutePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InDirectoryPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLoaded,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SoundVis | SoundFile" },
				{ "DisplayName", "Load Sound File Names" },
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
				{ "ToolTip", "Will get an Array of Names of the Found SoundFiles\n\n@param        InDirectoryPath                                 Path to the Directory in which the Files are (absolute/relative)\n@param        bInAbsolutePath                                 Tells if the DirectoryPath is absolute (C:/..) or relative to the GameDirectory\n@param        InFileExtension                                 This is the Extension the Function should look for. For the Plugin it should be .ogg\n@param        OutSoundFileNamesWithPath               The Array of found SoundFileNames (full Path/Name.Extension)\n@param        OutSoundFileNamesWithoutPath    The Array of found SoundFileNames (only Name.Extension)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundVisComponent, "BP_LoadAllSoundFileNamesFromHD", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(SoundVisComponent_eventBP_LoadAllSoundFileNamesFromHD_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USoundVisComponent_BP_LoadSoundFileFromHD()
	{
		struct SoundVisComponent_eventBP_LoadSoundFileFromHD_Parms
		{
			FString InFilePath;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFilePath_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "InFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(SoundVisComponent_eventBP_LoadSoundFileFromHD_Parms, InFilePath), METADATA_PARAMS(NewProp_InFilePath_MetaData, ARRAY_COUNT(NewProp_InFilePath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InFilePath,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SoundVis | SoundFile" },
				{ "DisplayName", "Load Sound File" },
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
				{ "ToolTip", "Will load a file (currently .ogg) from your Hard-Drive and save it in a USoundWave variable\n\n@param        InFilePath      Absolute path to the File. E.g.: \"C:/Sounds/File.ogg\"" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundVisComponent, "BP_LoadSoundFileFromHD", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SoundVisComponent_eventBP_LoadSoundFileFromHD_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USoundVisComponent_BP_PauseCalculatingFrequencySpectrum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SoundVis | Frequency Spectrum" },
				{ "DisplayName", "Pause Calculate Freq Spectrum" },
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
				{ "ToolTip", "If playing, pauses the current playing USoundWave and FrequencySpectrum calculation" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundVisComponent, "BP_PauseCalculatingFrequencySpectrum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USoundVisComponent_BP_ResumeCalculatingFrequencySpectrum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SoundVis | Frequency Spectrum" },
				{ "DisplayName", "Resume Calculate Freq Spectrum" },
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
				{ "ToolTip", "If paused, resumes the current USoundWave and FrequencySpectrum calculation" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundVisComponent, "BP_ResumeCalculatingFrequencySpectrum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USoundVisComponent_BP_StartCalculatingFrequencySpectrum()
	{
		struct SoundVisComponent_eventBP_StartCalculatingFrequencySpectrum_Parms
		{
			USoundWave* InSoundWaveRef;
			float InSegmentLength;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSegmentLength_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InSegmentLength = { UE4CodeGen_Private::EPropertyClass::Float, "InSegmentLength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(SoundVisComponent_eventBP_StartCalculatingFrequencySpectrum_Parms, InSegmentLength), METADATA_PARAMS(NewProp_InSegmentLength_MetaData, ARRAY_COUNT(NewProp_InSegmentLength_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSoundWaveRef = { UE4CodeGen_Private::EPropertyClass::Object, "InSoundWaveRef", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SoundVisComponent_eventBP_StartCalculatingFrequencySpectrum_Parms, InSoundWaveRef), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSegmentLength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSoundWaveRef,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SoundVis | Frequency Spectrum" },
				{ "DisplayName", "Start Calculate Freq Spectrum" },
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
				{ "ToolTip", "Will play the passed USoundWave and also start calculating the FrequencySpectrum (loops over the InSegmentLength sized parts)\n\n@param        InSoundWaveRef  SoundWave that gets started and analyzed\n@param        InSegmentLength Length of the SoundWave segment that should get analyzed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundVisComponent, "BP_StartCalculatingFrequencySpectrum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SoundVisComponent_eventBP_StartCalculatingFrequencySpectrum_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USoundVisComponent_BP_StopCalculatingFrequencySpectrum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SoundVis | Frequency Spectrum" },
				{ "DisplayName", "Stop Calculate Freq Spectrum" },
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
				{ "ToolTip", "If playing or paused, stops the current USoundWave and FrequencySpectrum calculation" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundVisComponent, "BP_StopCalculatingFrequencySpectrum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USoundVisComponent_GetCurrentPlayBackTime()
	{
		struct SoundVisComponent_eventGetCurrentPlayBackTime_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SoundVisComponent_eventGetCurrentPlayBackTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SoundVis | SoundPlayer" },
				{ "DisplayName", "Get Current Playback Time" },
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
				{ "ToolTip", "Return the current PlayBack Time of the Sound Player Timer\n\n@return Current PlayBack Time" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundVisComponent, "GetCurrentPlayBackTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(SoundVisComponent_eventGetCurrentPlayBackTime_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USoundVisComponent_HandleFrequencySpectrumCalculation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
				{ "ToolTip", "Function that is looped to handle the calculation of the FrequencySpectrum" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundVisComponent, "HandleFrequencySpectrumCalculation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USoundVisComponent_IsPlayerPaused()
	{
		struct SoundVisComponent_eventIsPlayerPaused_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SoundVisComponent_eventIsPlayerPaused_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SoundVisComponent_eventIsPlayerPaused_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SoundVis | SoundPlayer" },
				{ "DisplayName", "Is Player Paused" },
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
				{ "ToolTip", "Returns if the Player is currently paused or not\n\n@return True if paused" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundVisComponent, "IsPlayerPaused", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(SoundVisComponent_eventIsPlayerPaused_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USoundVisComponent_IsPlayerPlaying()
	{
		struct SoundVisComponent_eventIsPlayerPlaying_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SoundVisComponent_eventIsPlayerPlaying_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SoundVisComponent_eventIsPlayerPlaying_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SoundVis | SoundPlayer" },
				{ "DisplayName", "Is Player Playing" },
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
				{ "ToolTip", "Returns if the Player is currently playing or not\n\n@return True if playing" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundVisComponent, "IsPlayerPlaying", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(SoundVisComponent_eventIsPlayerPlaying_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USoundVisComponent_NoRegister()
	{
		return USoundVisComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundVisComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_eXiSoundVis,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USoundVisComponent_BP_CalculateFrequencySpectrum, "BP_CalculateFrequencySpectrum" }, // 250030489
				{ &Z_Construct_UFunction_USoundVisComponent_BP_GetAverageBassValue, "BP_GetAverageBassValue" }, // 3114913720
				{ &Z_Construct_UFunction_USoundVisComponent_BP_GetAverageFrequencyValueInRange, "BP_GetAverageFrequencyValueInRange" }, // 4030243439
				{ &Z_Construct_UFunction_USoundVisComponent_BP_GetAverageSubBassValue, "BP_GetAverageSubBassValue" }, // 1948954891
				{ &Z_Construct_UFunction_USoundVisComponent_BP_GetSpecificFrequencyValue, "BP_GetSpecificFrequencyValue" }, // 4058210616
				{ &Z_Construct_UFunction_USoundVisComponent_BP_LoadAllSoundFileNamesFromHD, "BP_LoadAllSoundFileNamesFromHD" }, // 1650360585
				{ &Z_Construct_UFunction_USoundVisComponent_BP_LoadSoundFileFromHD, "BP_LoadSoundFileFromHD" }, // 2422903627
				{ &Z_Construct_UFunction_USoundVisComponent_BP_PauseCalculatingFrequencySpectrum, "BP_PauseCalculatingFrequencySpectrum" }, // 3969164559
				{ &Z_Construct_UFunction_USoundVisComponent_BP_ResumeCalculatingFrequencySpectrum, "BP_ResumeCalculatingFrequencySpectrum" }, // 2405591813
				{ &Z_Construct_UFunction_USoundVisComponent_BP_StartCalculatingFrequencySpectrum, "BP_StartCalculatingFrequencySpectrum" }, // 1115569563
				{ &Z_Construct_UFunction_USoundVisComponent_BP_StopCalculatingFrequencySpectrum, "BP_StopCalculatingFrequencySpectrum" }, // 2513320699
				{ &Z_Construct_UFunction_USoundVisComponent_GetCurrentPlayBackTime, "GetCurrentPlayBackTime" }, // 3851743034
				{ &Z_Construct_UFunction_USoundVisComponent_HandleFrequencySpectrumCalculation, "HandleFrequencySpectrumCalculation" }, // 2241690603
				{ &Z_Construct_UFunction_USoundVisComponent_IsPlayerPaused, "IsPlayerPaused" }, // 3133339631
				{ &Z_Construct_UFunction_USoundVisComponent_IsPlayerPlaying, "IsPlayerPlaying" }, // 1463126065
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "DisplayName", "SoundVisComponent" },
				{ "IncludePath", "SoundVisComponent.h" },
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowErrorDebug_MetaData[] = {
				{ "Category", "SoundVis | Debugging" },
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
			};
#endif
			auto NewProp_bShowErrorDebug_SetBit = [](void* Obj){ ((USoundVisComponent*)Obj)->bShowErrorDebug = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowErrorDebug = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowErrorDebug", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USoundVisComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowErrorDebug_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowErrorDebug_MetaData, ARRAY_COUNT(NewProp_bShowErrorDebug_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowWarningDebug_MetaData[] = {
				{ "Category", "SoundVis | Debugging" },
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
			};
#endif
			auto NewProp_bShowWarningDebug_SetBit = [](void* Obj){ ((USoundVisComponent*)Obj)->bShowWarningDebug = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowWarningDebug = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowWarningDebug", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USoundVisComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowWarningDebug_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowWarningDebug_MetaData, ARRAY_COUNT(NewProp_bShowWarningDebug_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowLogDebug_MetaData[] = {
				{ "Category", "SoundVis | Debugging" },
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
				{ "ToolTip", "Debug" },
			};
#endif
			auto NewProp_bShowLogDebug_SetBit = [](void* Obj){ ((USoundVisComponent*)Obj)->bShowLogDebug = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowLogDebug = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowLogDebug", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USoundVisComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowLogDebug_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowLogDebug_MetaData, ARRAY_COUNT(NewProp_bShowLogDebug_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFrequencySpectrumCalculated_MetaData[] = {
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
				{ "ToolTip", "Blueprint Delegate that gets Broadcasted each time the Frequency Spectrum is calculated" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFrequencySpectrumCalculated = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnFrequencySpectrumCalculated", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(USoundVisComponent, OnFrequencySpectrumCalculated), Z_Construct_UDelegateFunction_eXiSoundVis_FrequencySpectrumCalculated__DelegateSignature, METADATA_PARAMS(NewProp_OnFrequencySpectrumCalculated_MetaData, ARRAY_COUNT(NewProp_OnFrequencySpectrumCalculated_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFileLoadCompleted_MetaData[] = {
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
				{ "ToolTip", "Blueprint Delegate that gets Broadcasted when the File is loaded completely" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFileLoadCompleted = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnFileLoadCompleted", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(USoundVisComponent, OnFileLoadCompleted), Z_Construct_UDelegateFunction_eXiSoundVis_FileLoadCompleted__DelegateSignature, METADATA_PARAMS(NewProp_OnFileLoadCompleted_MetaData, ARRAY_COUNT(NewProp_OnFileLoadCompleted_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNormalizeOutputToDb_MetaData[] = {
				{ "Category", "SoundVis | Sound Player" },
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
			};
#endif
			auto NewProp_bNormalizeOutputToDb_SetBit = [](void* Obj){ ((USoundVisComponent*)Obj)->bNormalizeOutputToDb = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNormalizeOutputToDb = { UE4CodeGen_Private::EPropertyClass::Bool, "bNormalizeOutputToDb", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USoundVisComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNormalizeOutputToDb_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNormalizeOutputToDb_MetaData, ARRAY_COUNT(NewProp_bNormalizeOutputToDb_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPauseWhenWindowInBackground_MetaData[] = {
				{ "Category", "SoundVis | Sound Player" },
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
			};
#endif
			auto NewProp_bPauseWhenWindowInBackground_SetBit = [](void* Obj){ ((USoundVisComponent*)Obj)->bPauseWhenWindowInBackground = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPauseWhenWindowInBackground = { UE4CodeGen_Private::EPropertyClass::Bool, "bPauseWhenWindowInBackground", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USoundVisComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPauseWhenWindowInBackground_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPauseWhenWindowInBackground_MetaData, ARRAY_COUNT(NewProp_bPauseWhenWindowInBackground_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoundPausedByBackgroundWindow_MetaData[] = {
				{ "Category", "SoundVis | Sound Player" },
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
			};
#endif
			auto NewProp_bSoundPausedByBackgroundWindow_SetBit = [](void* Obj){ ((USoundVisComponent*)Obj)->bSoundPausedByBackgroundWindow = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSoundPausedByBackgroundWindow = { UE4CodeGen_Private::EPropertyClass::Bool, "bSoundPausedByBackgroundWindow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USoundVisComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSoundPausedByBackgroundWindow_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSoundPausedByBackgroundWindow_MetaData, ARRAY_COUNT(NewProp_bSoundPausedByBackgroundWindow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoundPaused_MetaData[] = {
				{ "Category", "SoundVis | Sound Player" },
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
			};
#endif
			auto NewProp_bSoundPaused_SetBit = [](void* Obj){ ((USoundVisComponent*)Obj)->bSoundPaused = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSoundPaused = { UE4CodeGen_Private::EPropertyClass::Bool, "bSoundPaused", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USoundVisComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSoundPaused_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSoundPaused_MetaData, ARRAY_COUNT(NewProp_bSoundPaused_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoundPlaying_MetaData[] = {
				{ "Category", "SoundVis | Sound Player" },
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
			};
#endif
			auto NewProp_bSoundPlaying_SetBit = [](void* Obj){ ((USoundVisComponent*)Obj)->bSoundPlaying = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSoundPlaying = { UE4CodeGen_Private::EPropertyClass::Bool, "bSoundPlaying", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USoundVisComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSoundPlaying_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSoundPlaying_MetaData, ARRAY_COUNT(NewProp_bSoundPlaying_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundPlayerTimer_MetaData[] = {
				{ "Category", "SoundVis | Frequency Spectrum" },
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
				{ "ToolTip", "TimerHandle for the SoundPlayer, that only exists to check how long a Sound is running" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoundPlayerTimer = { UE4CodeGen_Private::EPropertyClass::Struct, "SoundPlayerTimer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(USoundVisComponent, SoundPlayerTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(NewProp_SoundPlayerTimer_MetaData, ARRAY_COUNT(NewProp_SoundPlayerTimer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
				{ "Category", "SoundVis | Sound Player" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SoundVisComponent.h" },
				{ "ToolTip", "Audio Component to Play our Audio with" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent = { UE4CodeGen_Private::EPropertyClass::Object, "AudioComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008001c, 1, nullptr, STRUCT_OFFSET(USoundVisComponent, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(NewProp_AudioComponent_MetaData, ARRAY_COUNT(NewProp_AudioComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowErrorDebug,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowWarningDebug,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowLogDebug,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnFrequencySpectrumCalculated,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnFileLoadCompleted,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNormalizeOutputToDb,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPauseWhenWindowInBackground,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSoundPausedByBackgroundWindow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSoundPaused,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSoundPlaying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundPlayerTimer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AudioComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundVisComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundVisComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundVisComponent, 2258519391);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundVisComponent(Z_Construct_UClass_USoundVisComponent, &USoundVisComponent::StaticClass, TEXT("/Script/eXiSoundVis"), TEXT("USoundVisComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundVisComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
