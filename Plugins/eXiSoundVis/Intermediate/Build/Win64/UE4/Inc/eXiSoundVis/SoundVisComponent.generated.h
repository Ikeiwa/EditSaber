// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundWave;
#ifdef EXISOUNDVIS_SoundVisComponent_generated_h
#error "SoundVisComponent.generated.h already included, missing '#pragma once' in SoundVisComponent.h"
#endif
#define EXISOUNDVIS_SoundVisComponent_generated_h

#define BeatSaberEditor_Plugins_eXiSoundVis_Source_eXiSoundVis_Public_SoundVisComponent_h_19_GENERATED_BODY \
	friend EXISOUNDVIS_API class UScriptStruct* Z_Construct_UScriptStruct_FSoundVisData(); \
	EXISOUNDVIS_API static class UScriptStruct* StaticStruct();


#define BeatSaberEditor_Plugins_eXiSoundVis_Source_eXiSoundVis_Public_SoundVisComponent_h_40_DELEGATE \
struct _Script_eXiSoundVis_eventFrequencySpectrumCalculated_Parms \
{ \
	TArray<float> OutFrequencies; \
}; \
static inline void FFrequencySpectrumCalculated_DelegateWrapper(const FMulticastScriptDelegate& FrequencySpectrumCalculated, TArray<float> const& OutFrequencies) \
{ \
	_Script_eXiSoundVis_eventFrequencySpectrumCalculated_Parms Parms; \
	Parms.OutFrequencies=OutFrequencies; \
	FrequencySpectrumCalculated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BeatSaberEditor_Plugins_eXiSoundVis_Source_eXiSoundVis_Public_SoundVisComponent_h_37_DELEGATE \
struct _Script_eXiSoundVis_eventWorkerFinished_Parms \
{ \
	USoundWave* SoundWaveRef; \
}; \
static inline void FWorkerFinished_DelegateWrapper(const FMulticastScriptDelegate& WorkerFinished, USoundWave* SoundWaveRef) \
{ \
	_Script_eXiSoundVis_eventWorkerFinished_Parms Parms; \
	Parms.SoundWaveRef=SoundWaveRef; \
	WorkerFinished.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BeatSaberEditor_Plugins_eXiSoundVis_Source_eXiSoundVis_Public_SoundVisComponent_h_34_DELEGATE \
struct _Script_eXiSoundVis_eventFileLoadCompleted_Parms \
{ \
	USoundWave* SoundWaveRef; \
}; \
static inline void FFileLoadCompleted_DelegateWrapper(const FMulticastScriptDelegate& FileLoadCompleted, USoundWave* SoundWaveRef) \
{ \
	_Script_eXiSoundVis_eventFileLoadCompleted_Parms Parms; \
	Parms.SoundWaveRef=SoundWaveRef; \
	FileLoadCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BeatSaberEditor_Plugins_eXiSoundVis_Source_eXiSoundVis_Public_SoundVisComponent_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_GetAverageFrequencyValueInRange) \
	{ \
		P_GET_OBJECT(USoundWave,Z_Param_InSoundWave); \
		P_GET_TARRAY(float,Z_Param_InFrequencies); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InStartFrequence); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InEndFrequence); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutAverageFrequency); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USoundVisComponent::BP_GetAverageFrequencyValueInRange(Z_Param_InSoundWave,Z_Param_InFrequencies,Z_Param_InStartFrequence,Z_Param_InEndFrequence,Z_Param_Out_OutAverageFrequency); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetAverageBassValue) \
	{ \
		P_GET_OBJECT(USoundWave,Z_Param_InSoundWave); \
		P_GET_TARRAY(float,Z_Param_InFrequencies); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutAverageBass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USoundVisComponent::BP_GetAverageBassValue(Z_Param_InSoundWave,Z_Param_InFrequencies,Z_Param_Out_OutAverageBass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetAverageSubBassValue) \
	{ \
		P_GET_OBJECT(USoundWave,Z_Param_InSoundWave); \
		P_GET_TARRAY(float,Z_Param_InFrequencies); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutAverageSubBass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USoundVisComponent::BP_GetAverageSubBassValue(Z_Param_InSoundWave,Z_Param_InFrequencies,Z_Param_Out_OutAverageSubBass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetSpecificFrequencyValue) \
	{ \
		P_GET_OBJECT(USoundWave,Z_Param_InSoundWave); \
		P_GET_TARRAY(float,Z_Param_InFrequencies); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InWantedFrequency); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutFrequencyValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USoundVisComponent::BP_GetSpecificFrequencyValue(Z_Param_InSoundWave,Z_Param_InFrequencies,Z_Param_InWantedFrequency,Z_Param_Out_OutFrequencyValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPlayBackTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentPlayBackTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayerPaused) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlayerPaused(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayerPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlayerPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_ResumeCalculatingFrequencySpectrum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_ResumeCalculatingFrequencySpectrum(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_StopCalculatingFrequencySpectrum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_StopCalculatingFrequencySpectrum(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_PauseCalculatingFrequencySpectrum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_PauseCalculatingFrequencySpectrum(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_StartCalculatingFrequencySpectrum) \
	{ \
		P_GET_OBJECT(USoundWave,Z_Param_InSoundWaveRef); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InSegmentLength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_StartCalculatingFrequencySpectrum(Z_Param_InSoundWaveRef,Z_Param_InSegmentLength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_CalculateFrequencySpectrum) \
	{ \
		P_GET_OBJECT(USoundWave,Z_Param_InSoundWaveRef); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InStartTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InDuration); \
		P_GET_TARRAY_REF(float,Z_Param_Out_OutFrequencies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_CalculateFrequencySpectrum(Z_Param_InSoundWaveRef,Z_Param_InStartTime,Z_Param_InDuration,Z_Param_Out_OutFrequencies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_LoadAllSoundFileNamesFromHD) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bLoaded); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InDirectoryPath); \
		P_GET_UBOOL(Z_Param_bInAbsolutePath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InFileExtension); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutSoundFileNamesWithPath); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutSoundFileNamesWithoutPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_LoadAllSoundFileNamesFromHD(Z_Param_Out_bLoaded,Z_Param_InDirectoryPath,Z_Param_bInAbsolutePath,Z_Param_InFileExtension,Z_Param_Out_OutSoundFileNamesWithPath,Z_Param_Out_OutSoundFileNamesWithoutPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_LoadSoundFileFromHD) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_LoadSoundFileFromHD(Z_Param_InFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleFrequencySpectrumCalculation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleFrequencySpectrumCalculation(); \
		P_NATIVE_END; \
	}


#define BeatSaberEditor_Plugins_eXiSoundVis_Source_eXiSoundVis_Public_SoundVisComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_GetAverageFrequencyValueInRange) \
	{ \
		P_GET_OBJECT(USoundWave,Z_Param_InSoundWave); \
		P_GET_TARRAY(float,Z_Param_InFrequencies); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InStartFrequence); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InEndFrequence); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutAverageFrequency); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USoundVisComponent::BP_GetAverageFrequencyValueInRange(Z_Param_InSoundWave,Z_Param_InFrequencies,Z_Param_InStartFrequence,Z_Param_InEndFrequence,Z_Param_Out_OutAverageFrequency); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetAverageBassValue) \
	{ \
		P_GET_OBJECT(USoundWave,Z_Param_InSoundWave); \
		P_GET_TARRAY(float,Z_Param_InFrequencies); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutAverageBass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USoundVisComponent::BP_GetAverageBassValue(Z_Param_InSoundWave,Z_Param_InFrequencies,Z_Param_Out_OutAverageBass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetAverageSubBassValue) \
	{ \
		P_GET_OBJECT(USoundWave,Z_Param_InSoundWave); \
		P_GET_TARRAY(float,Z_Param_InFrequencies); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutAverageSubBass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USoundVisComponent::BP_GetAverageSubBassValue(Z_Param_InSoundWave,Z_Param_InFrequencies,Z_Param_Out_OutAverageSubBass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetSpecificFrequencyValue) \
	{ \
		P_GET_OBJECT(USoundWave,Z_Param_InSoundWave); \
		P_GET_TARRAY(float,Z_Param_InFrequencies); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InWantedFrequency); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutFrequencyValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USoundVisComponent::BP_GetSpecificFrequencyValue(Z_Param_InSoundWave,Z_Param_InFrequencies,Z_Param_InWantedFrequency,Z_Param_Out_OutFrequencyValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPlayBackTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentPlayBackTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayerPaused) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlayerPaused(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayerPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlayerPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_ResumeCalculatingFrequencySpectrum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_ResumeCalculatingFrequencySpectrum(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_StopCalculatingFrequencySpectrum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_StopCalculatingFrequencySpectrum(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_PauseCalculatingFrequencySpectrum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_PauseCalculatingFrequencySpectrum(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_StartCalculatingFrequencySpectrum) \
	{ \
		P_GET_OBJECT(USoundWave,Z_Param_InSoundWaveRef); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InSegmentLength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_StartCalculatingFrequencySpectrum(Z_Param_InSoundWaveRef,Z_Param_InSegmentLength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_CalculateFrequencySpectrum) \
	{ \
		P_GET_OBJECT(USoundWave,Z_Param_InSoundWaveRef); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InStartTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InDuration); \
		P_GET_TARRAY_REF(float,Z_Param_Out_OutFrequencies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_CalculateFrequencySpectrum(Z_Param_InSoundWaveRef,Z_Param_InStartTime,Z_Param_InDuration,Z_Param_Out_OutFrequencies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_LoadAllSoundFileNamesFromHD) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bLoaded); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InDirectoryPath); \
		P_GET_UBOOL(Z_Param_bInAbsolutePath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InFileExtension); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutSoundFileNamesWithPath); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutSoundFileNamesWithoutPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_LoadAllSoundFileNamesFromHD(Z_Param_Out_bLoaded,Z_Param_InDirectoryPath,Z_Param_bInAbsolutePath,Z_Param_InFileExtension,Z_Param_Out_OutSoundFileNamesWithPath,Z_Param_Out_OutSoundFileNamesWithoutPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_LoadSoundFileFromHD) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_LoadSoundFileFromHD(Z_Param_InFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleFrequencySpectrumCalculation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleFrequencySpectrumCalculation(); \
		P_NATIVE_END; \
	}


#define BeatSaberEditor_Plugins_eXiSoundVis_Source_eXiSoundVis_Public_SoundVisComponent_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundVisComponent(); \
	friend EXISOUNDVIS_API class UClass* Z_Construct_UClass_USoundVisComponent(); \
public: \
	DECLARE_CLASS(USoundVisComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/eXiSoundVis"), NO_API) \
	DECLARE_SERIALIZER(USoundVisComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BeatSaberEditor_Plugins_eXiSoundVis_Source_eXiSoundVis_Public_SoundVisComponent_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUSoundVisComponent(); \
	friend EXISOUNDVIS_API class UClass* Z_Construct_UClass_USoundVisComponent(); \
public: \
	DECLARE_CLASS(USoundVisComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/eXiSoundVis"), NO_API) \
	DECLARE_SERIALIZER(USoundVisComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BeatSaberEditor_Plugins_eXiSoundVis_Source_eXiSoundVis_Public_SoundVisComponent_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundVisComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundVisComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundVisComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundVisComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundVisComponent(USoundVisComponent&&); \
	NO_API USoundVisComponent(const USoundVisComponent&); \
public:


#define BeatSaberEditor_Plugins_eXiSoundVis_Source_eXiSoundVis_Public_SoundVisComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundVisComponent(USoundVisComponent&&); \
	NO_API USoundVisComponent(const USoundVisComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundVisComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundVisComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USoundVisComponent)


#define BeatSaberEditor_Plugins_eXiSoundVis_Source_eXiSoundVis_Public_SoundVisComponent_h_45_PRIVATE_PROPERTY_OFFSET
#define BeatSaberEditor_Plugins_eXiSoundVis_Source_eXiSoundVis_Public_SoundVisComponent_h_42_PROLOG
#define BeatSaberEditor_Plugins_eXiSoundVis_Source_eXiSoundVis_Public_SoundVisComponent_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BeatSaberEditor_Plugins_eXiSoundVis_Source_eXiSoundVis_Public_SoundVisComponent_h_45_PRIVATE_PROPERTY_OFFSET \
	BeatSaberEditor_Plugins_eXiSoundVis_Source_eXiSoundVis_Public_SoundVisComponent_h_45_RPC_WRAPPERS \
	BeatSaberEditor_Plugins_eXiSoundVis_Source_eXiSoundVis_Public_SoundVisComponent_h_45_INCLASS \
	BeatSaberEditor_Plugins_eXiSoundVis_Source_eXiSoundVis_Public_SoundVisComponent_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BeatSaberEditor_Plugins_eXiSoundVis_Source_eXiSoundVis_Public_SoundVisComponent_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BeatSaberEditor_Plugins_eXiSoundVis_Source_eXiSoundVis_Public_SoundVisComponent_h_45_PRIVATE_PROPERTY_OFFSET \
	BeatSaberEditor_Plugins_eXiSoundVis_Source_eXiSoundVis_Public_SoundVisComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	BeatSaberEditor_Plugins_eXiSoundVis_Source_eXiSoundVis_Public_SoundVisComponent_h_45_INCLASS_NO_PURE_DECLS \
	BeatSaberEditor_Plugins_eXiSoundVis_Source_eXiSoundVis_Public_SoundVisComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BeatSaberEditor_Plugins_eXiSoundVis_Source_eXiSoundVis_Public_SoundVisComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
