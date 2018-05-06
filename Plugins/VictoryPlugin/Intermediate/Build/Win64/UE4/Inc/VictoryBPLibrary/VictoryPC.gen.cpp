// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/VictoryBPLibraryPrivatePCH.h"
#include "Public/VictoryPC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVictoryPC() {}
// Cross Module References
	VICTORYBPLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FVictorySubtitleCue();
	UPackage* Z_Construct_UPackage__Script_VictoryBPLibrary();
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_AVictoryPC_NoRegister();
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_AVictoryPC();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitleCue();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_DataReceived();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_SendRequest();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
class UScriptStruct* FVictorySubtitleCue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VICTORYBPLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FVictorySubtitleCue_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVictorySubtitleCue, Z_Construct_UPackage__Script_VictoryBPLibrary(), TEXT("VictorySubtitleCue"), sizeof(FVictorySubtitleCue), Get_Z_Construct_UScriptStruct_FVictorySubtitleCue_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVictorySubtitleCue(FVictorySubtitleCue::StaticStruct, TEXT("/Script/VictoryBPLibrary"), TEXT("VictorySubtitleCue"), false, nullptr, nullptr);
static struct FScriptStruct_VictoryBPLibrary_StaticRegisterNativesFVictorySubtitleCue
{
	FScriptStruct_VictoryBPLibrary_StaticRegisterNativesFVictorySubtitleCue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VictorySubtitleCue")),new UScriptStruct::TCppStructOps<FVictorySubtitleCue>);
	}
} ScriptStruct_VictoryBPLibrary_StaticRegisterNativesFVictorySubtitleCue;
	UScriptStruct* Z_Construct_UScriptStruct_FVictorySubtitleCue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVictorySubtitleCue_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_VictoryBPLibrary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VictorySubtitleCue"), sizeof(FVictorySubtitleCue), Get_Z_Construct_UScriptStruct_FVictorySubtitleCue_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/VictoryPC.h" },
				{ "ToolTip", "Exposing the UE4 Subtitle system for Solus\n <3 Rama" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVictorySubtitleCue>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "Category", "SubtitleCue" },
				{ "ModuleRelativePath", "Public/VictoryPC.h" },
				{ "ToolTip", "The time at which the subtitle is to be displayed, in seconds relative to the beginning of the line." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FVictorySubtitleCue, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitleText_MetaData[] = {
				{ "Category", "SubtitleCue" },
				{ "ModuleRelativePath", "Public/VictoryPC.h" },
				{ "ToolTip", "The text to appear in the subtitle." },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_SubtitleText = { UE4CodeGen_Private::EPropertyClass::Text, "SubtitleText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FVictorySubtitleCue, SubtitleText), METADATA_PARAMS(NewProp_SubtitleText_MetaData, ARRAY_COUNT(NewProp_SubtitleText_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubtitleText,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_VictoryBPLibrary,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"VictorySubtitleCue",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FVictorySubtitleCue),
				alignof(FVictorySubtitleCue),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVictorySubtitleCue_CRC() { return 2177413433U; }
	static FName NAME_AVictoryPC_OnVictorySubtitlesQueued = FName(TEXT("OnVictorySubtitlesQueued"));
	void AVictoryPC::OnVictorySubtitlesQueued(TArray<FVictorySubtitleCue> const& VictorySubtitles, float CueDuration)
	{
		VictoryPC_eventOnVictorySubtitlesQueued_Parms Parms;
		Parms.VictorySubtitles=VictorySubtitles;
		Parms.CueDuration=CueDuration;
		ProcessEvent(FindFunctionChecked(NAME_AVictoryPC_OnVictorySubtitlesQueued),&Parms);
	}
	static FName NAME_AVictoryPC_VictoryPC_GetMyIP_DataReceived = FName(TEXT("VictoryPC_GetMyIP_DataReceived"));
	void AVictoryPC::VictoryPC_GetMyIP_DataReceived(const FString& YourIP)
	{
		VictoryPC_eventVictoryPC_GetMyIP_DataReceived_Parms Parms;
		Parms.YourIP=YourIP;
		ProcessEvent(FindFunctionChecked(NAME_AVictoryPC_VictoryPC_GetMyIP_DataReceived),&Parms);
	}
	void AVictoryPC::StaticRegisterNativesAVictoryPC()
	{
		UClass* Class = AVictoryPC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Subtitles_CPPDelegate", &AVictoryPC::execSubtitles_CPPDelegate },
			{ "VictoryPC_GetMyIP_SendRequest", &AVictoryPC::execVictoryPC_GetMyIP_SendRequest },
			{ "VictoryPlaySpeechSound", &AVictoryPC::execVictoryPlaySpeechSound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CueDuration = { UE4CodeGen_Private::EPropertyClass::Float, "CueDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VictoryPC_eventOnVictorySubtitlesQueued_Parms, CueDuration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VictorySubtitles_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VictorySubtitles = { UE4CodeGen_Private::EPropertyClass::Array, "VictorySubtitles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VictoryPC_eventOnVictorySubtitlesQueued_Parms, VictorySubtitles), METADATA_PARAMS(NewProp_VictorySubtitles_MetaData, ARRAY_COUNT(NewProp_VictorySubtitles_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VictorySubtitles_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "VictorySubtitles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVictorySubtitleCue, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CueDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VictorySubtitles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VictorySubtitles_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory Subtitles" },
				{ "ModuleRelativePath", "Public/VictoryPC.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVictoryPC, "OnVictorySubtitlesQueued", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420800, sizeof(VictoryPC_eventOnVictorySubtitlesQueued_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate()
	{
		struct VictoryPC_eventSubtitles_CPPDelegate_Parms
		{
			TArray<FSubtitleCue> VictorySubtitles;
			float CueDuration;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CueDuration = { UE4CodeGen_Private::EPropertyClass::Float, "CueDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VictoryPC_eventSubtitles_CPPDelegate_Parms, CueDuration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VictorySubtitles_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VictorySubtitles = { UE4CodeGen_Private::EPropertyClass::Array, "VictorySubtitles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VictoryPC_eventSubtitles_CPPDelegate_Parms, VictorySubtitles), METADATA_PARAMS(NewProp_VictorySubtitles_MetaData, ARRAY_COUNT(NewProp_VictorySubtitles_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VictorySubtitles_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "VictorySubtitles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSubtitleCue, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CueDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VictorySubtitles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VictorySubtitles_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VictoryPC.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVictoryPC, "Subtitles_CPPDelegate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00420401, sizeof(VictoryPC_eventSubtitles_CPPDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_DataReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YourIP_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_YourIP = { UE4CodeGen_Private::EPropertyClass::Str, "YourIP", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VictoryPC_eventVictoryPC_GetMyIP_DataReceived_Parms, YourIP), METADATA_PARAMS(NewProp_YourIP_MetaData, ARRAY_COUNT(NewProp_YourIP_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_YourIP,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory PC" },
				{ "DisplayName", "Victory PC ~ GetMyIP ~ Data Received!" },
				{ "ModuleRelativePath", "Public/VictoryPC.h" },
				{ "ToolTip", "Implement this event to receive your IP once the request is processed! This requires that your computer has a live internet connection" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVictoryPC, "VictoryPC_GetMyIP_DataReceived", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(VictoryPC_eventVictoryPC_GetMyIP_DataReceived_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_SendRequest()
	{
		struct VictoryPC_eventVictoryPC_GetMyIP_SendRequest_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VictoryPC_eventVictoryPC_GetMyIP_SendRequest_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VictoryPC_eventVictoryPC_GetMyIP_SendRequest_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory PC" },
				{ "ModuleRelativePath", "Public/VictoryPC.h" },
				{ "ToolTip", "This node relies on http://api.ipify.org, so if this node ever stops working, check out http://api.ipify.org.  Returns false if the operation could not occur because HTTP module was not loaded or unable to process request." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVictoryPC, "VictoryPC_GetMyIP_SendRequest", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VictoryPC_eventVictoryPC_GetMyIP_SendRequest_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound()
	{
		struct VictoryPC_eventVictoryPlaySpeechSound_Parms
		{
			USoundBase* Sound;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			UAudioComponent* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(VictoryPC_eventVictoryPlaySpeechSound_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime = { UE4CodeGen_Private::EPropertyClass::Float, "StartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VictoryPC_eventVictoryPlaySpeechSound_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "PitchMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VictoryPC_eventVictoryPlaySpeechSound_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "VolumeMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VictoryPC_eventVictoryPlaySpeechSound_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound = { UE4CodeGen_Private::EPropertyClass::Object, "Sound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VictoryPC_eventVictoryPlaySpeechSound_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PitchMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumeMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sound,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory Subtitles" },
				{ "CPP_Default_PitchMultiplier", "1.000000" },
				{ "CPP_Default_StartTime", "0.000000" },
				{ "CPP_Default_VolumeMultiplier", "1.000000" },
				{ "Keywords", "play" },
				{ "ModuleRelativePath", "Public/VictoryPC.h" },
				{ "ToolTip", "When the sound is played OnVictorySubtitlesQueued will be called with the subtitles!\nYou can bind an event off of the audio component for OnAudioFinished to know hwen the sound is done!" },
				{ "UnsafeDuringActorConstruction", "true" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVictoryPC, "VictoryPlaySpeechSound", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020409, sizeof(VictoryPC_eventVictoryPlaySpeechSound_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVictoryPC_NoRegister()
	{
		return AVictoryPC::StaticClass();
	}
	UClass* Z_Construct_UClass_AVictoryPC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_VictoryBPLibrary,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued, "OnVictorySubtitlesQueued" }, // 2793172378
				{ &Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate, "Subtitles_CPPDelegate" }, // 752205023
				{ &Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_DataReceived, "VictoryPC_GetMyIP_DataReceived" }, // 2497538836
				{ &Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_SendRequest, "VictoryPC_GetMyIP_SendRequest" }, // 3601122929
				{ &Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound, "VictoryPlaySpeechSound" }, // 3334521122
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "VictoryPC.h" },
				{ "ModuleRelativePath", "Public/VictoryPC.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AVictoryPC>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AVictoryPC::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900284u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVictoryPC, 1107005815);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVictoryPC(Z_Construct_UClass_AVictoryPC, &AVictoryPC::StaticClass, TEXT("/Script/VictoryBPLibrary"), TEXT("AVictoryPC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVictoryPC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
