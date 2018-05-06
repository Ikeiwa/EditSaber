// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FRotator;
class USceneComponent;
struct FVector;
class APlayerController;
class UWidget;
class UPanelSlot;
class UObject;
struct FVector2D;
struct FHitResult;
class UMeshComponent;
class ULevelStreamingKismet;
struct FLevelStreamInstanceInfo;
class UUserWidget;
class UTexture2D;
class ASceneCapture2D;
struct FLinearColor;
class USceneCaptureComponent2D;
class APostProcessVolume;
class USoundWave;
class USoundAttenuation;
class UAudioComponent;
enum class EJoyImageFormats : uint8;
class AStaticMeshActor;
class USkeletalMeshComponent;
struct FKey;
class UMaterialInterface;
class ACharacter;
class UStaticMeshComponent;
class UPrimitiveComponent;
struct FKeyEvent;
class APlayerStart;
struct FPlane;
class USoundClass;
struct FVictoryInput;
struct FVictoryInputAxis;
class AVictoryISM;
class UDestructibleComponent;
class UTextureRenderTarget2D;
class UActorComponent;
struct FDateTime;
class APawn;
class UNavigationQueryFilter;
class ULevelStreaming;
#ifdef VICTORYBPLIBRARY_VictoryBPFunctionLibrary_generated_h
#error "VictoryBPFunctionLibrary.generated.h already included, missing '#pragma once' in VictoryBPFunctionLibrary.h"
#endif
#define VICTORYBPLIBRARY_VictoryBPFunctionLibrary_generated_h

#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_182_GENERATED_BODY \
	friend VICTORYBPLIBRARY_API class UScriptStruct* Z_Construct_UScriptStruct_FLevelStreamInstanceInfo(); \
	VICTORYBPLIBRARY_API static class UScriptStruct* StaticStruct();


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_132_GENERATED_BODY \
	friend VICTORYBPLIBRARY_API class UScriptStruct* Z_Construct_UScriptStruct_FVictoryInputAxis(); \
	VICTORYBPLIBRARY_API static class UScriptStruct* StaticStruct();


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_81_GENERATED_BODY \
	friend VICTORYBPLIBRARY_API class UScriptStruct* Z_Construct_UScriptStruct_FVictoryInput(); \
	VICTORYBPLIBRARY_API static class UScriptStruct* StaticStruct();


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_230_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAppendMultiple) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::AppendMultiple(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStringIsEmpty) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::StringIsEmpty(Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVerticalFOV) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HorizontalFOV); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AspectRatio); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::VerticalFOV(Z_Param_HorizontalFOV,Z_Param_AspectRatio); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHorizontalFOV) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VerticalFOV); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AspectRatio); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::HorizontalFOV(Z_Param_VerticalFOV,Z_Param_AspectRatio); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorRelativeRotation) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ParentActor); \
		P_GET_OBJECT(AActor,Z_Param_ChildActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UVictoryBPFunctionLibrary::GetActorRelativeRotation(Z_Param_ParentActor,Z_Param_ChildActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComponentRelativeRotation) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_ParentComponent); \
		P_GET_OBJECT(USceneComponent,Z_Param_ChildComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UVictoryBPFunctionLibrary::GetComponentRelativeRotation(Z_Param_ParentComponent,Z_Param_ChildComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRotatorRelativeRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_ParentRotation); \
		P_GET_STRUCT(FRotator,Z_Param_ChildRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UVictoryBPFunctionLibrary::GetRotatorRelativeRotation(Z_Param_ParentRotation,Z_Param_ChildRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorRelativeLocation) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ParentActor); \
		P_GET_OBJECT(AActor,Z_Param_ChildActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UVictoryBPFunctionLibrary::GetActorRelativeLocation(Z_Param_ParentActor,Z_Param_ChildActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComponentRelativeLocation) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_ParentComponent); \
		P_GET_OBJECT(USceneComponent,Z_Param_ChildComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UVictoryBPFunctionLibrary::GetComponentRelativeLocation(Z_Param_ParentComponent,Z_Param_ChildComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVectorRelativeLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ParentLocation); \
		P_GET_STRUCT(FRotator,Z_Param_ParentRotation); \
		P_GET_STRUCT(FVector,Z_Param_ChildLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UVictoryBPFunctionLibrary::GetVectorRelativeLocation(Z_Param_ParentLocation,Z_Param_ParentRotation,Z_Param_ChildLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlushPressedKeys) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::FlushPressedKeys(Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInsertChildAt) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Parent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPanelSlot**)Z_Param__Result=UVictoryBPFunctionLibrary::InsertChildAt(Z_Param_Parent,Z_Param_Index,Z_Param_Content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewportPositionDeproject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ViewportPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutWorldOrigin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutWorldDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::ViewportPositionDeproject(Z_Param_WorldContextObject,Z_Param_Out_ViewportPosition,Z_Param_Out_OutWorldOrigin,Z_Param_Out_OutWorldDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewportPositionHitResultByChannel) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ViewportPosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::GetViewportPositionHitResultByChannel(Z_Param_WorldContextObject,Z_Param_Out_ViewportPosition,ECollisionChannel(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_OutHitResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewportPosition) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenPosition); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutViewportPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::GetViewportPosition(Z_Param_WorldContextObject,Z_Param_Out_ScreenPosition,Z_Param_Out_OutViewportPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComponent_PrestreamTextures) \
	{ \
		P_GET_OBJECT(UMeshComponent,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Seconds); \
		P_GET_UBOOL(Z_Param_bEnableStreaming); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CinematicTextureGroups); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Component_PrestreamTextures(Z_Param_Target,Z_Param_Seconds,Z_Param_bEnableStreaming,Z_Param_CinematicTextureGroups); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActor_PrestreamTextures) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Seconds); \
		P_GET_UBOOL(Z_Param_bEnableStreaming); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CinematicTextureGroups); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Actor_PrestreamTextures(Z_Param_Target,Z_Param_Seconds,Z_Param_bEnableStreaming,Z_Param_CinematicTextureGroups); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnloadStreamingLevel) \
	{ \
		P_GET_OBJECT(ULevelStreamingKismet,Z_Param_LevelInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::UnloadStreamingLevel(Z_Param_LevelInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideStreamingLevel) \
	{ \
		P_GET_OBJECT(ULevelStreamingKismet,Z_Param_LevelInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::HideStreamingLevel(Z_Param_LevelInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveFromStreamingLevels) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FLevelStreamInstanceInfo,Z_Param_Out_LevelInstanceInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::RemoveFromStreamingLevels(Z_Param_WorldContextObject,Z_Param_Out_LevelInstanceInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToStreamingLevels) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FLevelStreamInstanceInfo,Z_Param_Out_LevelInstanceInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::AddToStreamingLevels(Z_Param_WorldContextObject,Z_Param_Out_LevelInstanceInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLevelInstanceInfo) \
	{ \
		P_GET_OBJECT(ULevelStreamingKismet,Z_Param_LevelInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLevelStreamInstanceInfo*)Z_Param__Result=UVictoryBPFunctionLibrary::GetLevelInstanceInfo(Z_Param_LevelInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGenericTeamId) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewTeamId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::SetGenericTeamId(Z_Param_Target,Z_Param_NewTeamId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGenericTeamId) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UVictoryBPFunctionLibrary::GetGenericTeamId(Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWidgetFromName) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_ParentUserWidget); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=UVictoryBPFunctionLibrary::GetWidgetFromName(Z_Param_ParentUserWidget,Z_Param_Out_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWidgetGetChildrenOfClass) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_ParentWidget); \
		P_GET_TARRAY_REF(UUserWidget*,Z_Param_Out_ChildWidgets); \
		P_GET_OBJECT(UClass,Z_Param_WidgetClass); \
		P_GET_UBOOL(Z_Param_bImmediateOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::WidgetGetChildrenOfClass(Z_Param_ParentWidget,Z_Param_Out_ChildWidgets,Z_Param_WidgetClass,Z_Param_bImmediateOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWidgetGetParentOfClass) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_ChildWidget); \
		P_GET_OBJECT(UClass,Z_Param_WidgetClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUserWidget**)Z_Param__Result=UVictoryBPFunctionLibrary::WidgetGetParentOfClass(Z_Param_ChildWidget,Z_Param_WidgetClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWidgetIsChildOf) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_ChildWidget); \
		P_GET_OBJECT(UWidget,Z_Param_PossibleParent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::WidgetIsChildOf(Z_Param_ChildWidget,Z_Param_PossibleParent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFirstWidgetOfClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_WidgetClass); \
		P_GET_UBOOL(Z_Param_TopLevelOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUserWidget**)Z_Param__Result=UVictoryBPFunctionLibrary::GetFirstWidgetOfClass(Z_Param_WorldContextObject,Z_Param_WidgetClass,Z_Param_TopLevelOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTexture2D_FromFileByExtension) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ImagePath); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutWidth); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UVictoryBPFunctionLibrary::LoadTexture2D_FromFileByExtension(Z_Param_ImagePath,Z_Param_Out_IsValid,Z_Param_Out_OutWidth,Z_Param_Out_OutHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapture2D_SaveImage) \
	{ \
		P_GET_OBJECT(ASceneCapture2D,Z_Param_Target); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ImagePath); \
		P_GET_STRUCT(FLinearColor,Z_Param_ClearColour); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Capture2D_SaveImage(Z_Param_Target,Z_Param_ImagePath,Z_Param_ClearColour); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCaptureComponent2D_SaveImage) \
	{ \
		P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_Target); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ImagePath); \
		P_GET_STRUCT(FLinearColor,Z_Param_ClearColour); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::CaptureComponent2D_SaveImage(Z_Param_Target,Z_Param_ImagePath,Z_Param_ClearColour); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapture2D_Project) \
	{ \
		P_GET_OBJECT(ASceneCapture2D,Z_Param_Target); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutPixelLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Capture2D_Project(Z_Param_Target,Z_Param_Location,Z_Param_Out_OutPixelLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCaptureComponent2D_Project) \
	{ \
		P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_Target); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutPixelLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::CaptureComponent2D_Project(Z_Param_Target,Z_Param_Location,Z_Param_Out_OutPixelLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeAlive) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::GetTimeAlive(Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCreationTime) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::GetCreationTime(Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBloomIntensity) \
	{ \
		P_GET_OBJECT(APostProcessVolume,Z_Param_PostProcessVolume); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Intensity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::SetBloomIntensity(Z_Param_PostProcessVolume,Z_Param_Intensity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActor__GetAttachedActors) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ParentActor); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Actor__GetAttachedActors(Z_Param_ParentActor,Z_Param_Out_ActorsArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandFloat_MINMAX_uniDis_MT) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_iMin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_iMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::RandFloat_MINMAX_uniDis_MT(Z_Param_iMin,Z_Param_iMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandFloat_uniDis_MT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::RandFloat_uniDis_MT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandInt_MINMAX_uniDis_MT) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_iMin); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UVictoryBPFunctionLibrary::RandInt_MINMAX_uniDis_MT(Z_Param_iMin,Z_Param_iMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandInt_uniDis_MT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UVictoryBPFunctionLibrary::RandInt_uniDis_MT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandBool_Bernoulli_MT) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_fBias); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::RandBool_Bernoulli_MT(Z_Param_fBias); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandFloat_MINMAX_uniDis) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_iMin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_iMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::RandFloat_MINMAX_uniDis(Z_Param_iMin,Z_Param_iMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandFloat_uniDis) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::RandFloat_uniDis(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandInt_MINMAX_uniDis) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_iMin); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UVictoryBPFunctionLibrary::RandInt_MINMAX_uniDis(Z_Param_iMin,Z_Param_iMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandInt_uniDis) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UVictoryBPFunctionLibrary::RandInt_uniDis(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandBool_Bernoulli) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_fBias); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::RandBool_Bernoulli(Z_Param_fBias); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execseedRandWithEntropy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::seedRandWithEntropy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execseedRandWithTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::seedRandWithTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execseedRand) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_seed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::seedRand(Z_Param_seed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execconstructRand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::constructRand(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSoundWaveFromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundWave**)Z_Param__Result=UVictoryBPFunctionLibrary::GetSoundWaveFromFile(Z_Param_FilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySoundAtLocationFromFile) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::PlaySoundAtLocationFromFile(Z_Param_WorldContextObject,Z_Param_FilePath,Z_Param_Location,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySoundAttachedFromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttachPointName); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UByteProperty,Z_Param_LocationType); \
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=UVictoryBPFunctionLibrary::PlaySoundAttachedFromFile(Z_Param_FilePath,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bStopWhenAttachedToDestroyed,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_GetPixelsArrayFromT2D) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_T2D); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_TextureWidth); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_TextureHeight); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_PixelArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_GetPixelsArrayFromT2D(Z_Param_T2D,Z_Param_Out_TextureWidth,Z_Param_Out_TextureHeight,Z_Param_Out_PixelArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_GetPixelFromT2D) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_T2D); \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_PixelColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_GetPixelFromT2D(Z_Param_T2D,Z_Param_X,Z_Param_Y,Z_Param_Out_PixelColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_SavePixels) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullFilePath); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_ImagePixels); \
		P_GET_UBOOL(Z_Param_SaveAsBMP); \
		P_GET_UBOOL(Z_Param_sRGB); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_SavePixels(Z_Param_FullFilePath,Z_Param_Width,Z_Param_Height,Z_Param_Out_ImagePixels,Z_Param_SaveAsBMP,Z_Param_sRGB,Z_Param_Out_ErrorString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_Get_Pixel) \
	{ \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_Pixels); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ImageHeight); \
		P_GET_PROPERTY(UIntProperty,Z_Param_x); \
		P_GET_PROPERTY(UIntProperty,Z_Param_y); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_FoundColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_Get_Pixel(Z_Param_Out_Pixels,Z_Param_ImageHeight,Z_Param_x,Z_Param_y,Z_Param_Out_FoundColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_LoadTexture2D_FromFile_Pixels) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullFilePath); \
		P_GET_ENUM(EJoyImageFormats,Z_Param_ImageFormat); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Width); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Height); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_OutPixels); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_LoadTexture2D_FromFile_Pixels(Z_Param_FullFilePath,EJoyImageFormats(Z_Param_ImageFormat),Z_Param_Out_IsValid,Z_Param_Out_Width,Z_Param_Out_Height,Z_Param_Out_OutPixels); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_LoadTexture2D_FromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullFilePath); \
		P_GET_ENUM(EJoyImageFormats,Z_Param_ImageFormat); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Width); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_LoadTexture2D_FromFile(Z_Param_FullFilePath,EJoyImageFormats(Z_Param_ImageFormat),Z_Param_Out_IsValid,Z_Param_Out_Width,Z_Param_Out_Height); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTexture2D_FromDDSFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UVictoryBPFunctionLibrary::LoadTexture2D_FromDDSFile(Z_Param_FullFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString__ExplodeString) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutputStrings); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InputString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Separator); \
		P_GET_PROPERTY(UIntProperty,Z_Param_limit); \
		P_GET_UBOOL(Z_Param_bTrimElements); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::String__ExplodeString(Z_Param_Out_OutputStrings,Z_Param_InputString,Z_Param_Separator,Z_Param_limit,Z_Param_bTrimElements); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoyGraphicsSettings__FullScreen_Set) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewSetting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::JoyGraphicsSettings__FullScreen_Set(EJoyGraphicsFullScreen::Type(Z_Param_NewSetting)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoyGraphicsSettings__FullScreen_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EJoyGraphicsFullScreen::Type>*)Z_Param__Result=UVictoryBPFunctionLibrary::JoyGraphicsSettings__FullScreen_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__LogsDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryPaths__LogsDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__ScreenShotsDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryPaths__ScreenShotsDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__ConfigDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryPaths__ConfigDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__SavedDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryPaths__SavedDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__GameRootDirectory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryPaths__GameRootDirectory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__WindowsNoEditorDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryPaths__WindowsNoEditorDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__Win64Dir_BinaryLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryPaths__Win64Dir_BinaryLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMobility__SetSceneCompMobility) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_SceneComp); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewMobility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Mobility__SetSceneCompMobility(Z_Param_SceneComp,EComponentMobility::Type(Z_Param_NewMobility)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDistanceToSurface__DistaceOfPointToMeshSurface) \
	{ \
		P_GET_OBJECT(AStaticMeshActor,Z_Param_TheSMA); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TestPoint); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ClosestSurfacePoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::DistanceToSurface__DistaceOfPointToMeshSurface(Z_Param_TheSMA,Z_Param_Out_TestPoint,Z_Param_Out_ClosestSurfacePoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLensFlare__GetLensFlareOffsets) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_OBJECT(AActor,Z_Param_LightSource); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PitchOffset); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_YawOffset); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_RollOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::LensFlare__GetLensFlareOffsets(Z_Param_PlayerController,Z_Param_LightSource,Z_Param_Out_PitchOffset,Z_Param_Out_YawOffset,Z_Param_Out_RollOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStringConversion__GetFloatAsStringWithPrecision) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TheFloat); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_TheString); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Precision); \
		P_GET_UBOOL(Z_Param_IncludeLeadingZero); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::StringConversion__GetFloatAsStringWithPrecision(Z_Param_TheFloat,Z_Param_Out_TheString,Z_Param_Precision,Z_Param_IncludeLeadingZero); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTraces__CharacterMeshTrace___ClosestSocket) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(AActor,Z_Param_TraceOwner); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceEnd); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutImpactPoint); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutImpactNormal); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_ClosestSocketName); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SocketLocation); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UVictoryBPFunctionLibrary::Traces__CharacterMeshTrace___ClosestSocket(Z_Param_WorldContextObject,Z_Param_TraceOwner,Z_Param_Out_TraceStart,Z_Param_Out_TraceEnd,Z_Param_Out_OutImpactPoint,Z_Param_Out_OutImpactNormal,Z_Param_Out_ClosestSocketName,Z_Param_Out_SocketLocation,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTraces__CharacterMeshTrace___ClosestBone) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TraceOwner); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceEnd); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutImpactPoint); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutImpactNormal); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_ClosestBoneName); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ClosestBoneLocation); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UVictoryBPFunctionLibrary::Traces__CharacterMeshTrace___ClosestBone(Z_Param_TraceOwner,Z_Param_Out_TraceStart,Z_Param_Out_TraceEnd,Z_Param_Out_OutImpactPoint,Z_Param_Out_OutImpactNormal,Z_Param_Out_ClosestBoneName,Z_Param_Out_ClosestBoneLocation,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTraceData__GetTraceDataFromSkeletalMeshSocket) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceEnd); \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_TraceRotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TraceLength); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Socket); \
		P_GET_UBOOL(Z_Param_DrawTraceData); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceDataColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TraceDataThickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::TraceData__GetTraceDataFromSkeletalMeshSocket(Z_Param_Out_TraceStart,Z_Param_Out_TraceEnd,Z_Param_Mesh,Z_Param_Out_TraceRotation,Z_Param_TraceLength,Z_Param_Socket,Z_Param_DrawTraceData,Z_Param_TraceDataColor,Z_Param_TraceDataThickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTraceData__GetTraceDataFromCharacterSocket) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceEnd); \
		P_GET_OBJECT(AActor,Z_Param_TheCharacter); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_TraceRotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TraceLength); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Socket); \
		P_GET_UBOOL(Z_Param_DrawTraceData); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceDataColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TraceDataThickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::TraceData__GetTraceDataFromCharacterSocket(Z_Param_Out_TraceStart,Z_Param_Out_TraceEnd,Z_Param_TheCharacter,Z_Param_Out_TraceRotation,Z_Param_TraceLength,Z_Param_Socket,Z_Param_DrawTraceData,Z_Param_TraceDataColor,Z_Param_TraceDataThickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllBoneNamesBelowBone) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComp); \
		P_GET_PROPERTY(UNameProperty,Z_Param_StartingBoneName); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_BoneNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UVictoryBPFunctionLibrary::GetAllBoneNamesBelowBone(Z_Param_SkeletalMeshComp,Z_Param_StartingBoneName,Z_Param_Out_BoneNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAccessor__GetCharacterSkeletalMesh) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TheCharacter); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshComponent**)Z_Param__Result=UVictoryBPFunctionLibrary::Accessor__GetCharacterSkeletalMesh(Z_Param_TheCharacter,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execData__GetCharacterBoneLocations) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TheCharacter); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_BoneLocations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Data__GetCharacterBoneLocations(Z_Param_TheCharacter,Z_Param_Out_BoneLocations); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalcs__ClosestPointToSourcePoint) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Source); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OtherPoints); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ClosestPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::Calcs__ClosestPointToSourcePoint(Z_Param_Out_Source,Z_Param_Out_OtherPoints,Z_Param_Out_ClosestPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRendering__UnFreezeGameRendering) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Rendering__UnFreezeGameRendering(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRendering__FreezeGameRendering) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Rendering__FreezeGameRendering(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlashGameOnTaskBar) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PC); \
		P_GET_UBOOL(Z_Param_FlashContinuous); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxFlashCount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FlashFrequencyMilliseconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::FlashGameOnTaskBar(Z_Param_PC,Z_Param_FlashContinuous,Z_Param_MaxFlashCount,Z_Param_FlashFrequencyMilliseconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientWindow__GameWindowIsForeGroundInOS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::ClientWindow__GameWindowIsForeGroundInOS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVisibility__GetNotRenderedActors) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_CurrentlyNotRenderedActors); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinRecentTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Visibility__GetNotRenderedActors(Z_Param_WorldContextObject,Z_Param_Out_CurrentlyNotRenderedActors,Z_Param_MinRecentTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVisibility__GetRenderedActors) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_CurrentlyRenderedActors); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinRecentTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Visibility__GetRenderedActors(Z_Param_WorldContextObject,Z_Param_Out_CurrentlyRenderedActors,Z_Param_MinRecentTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileIO__SaveStringArrayToFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveDirectory); \
		P_GET_PROPERTY(UStrProperty,Z_Param_JoyfulFileName); \
		P_GET_TARRAY(FString,Z_Param_SaveText); \
		P_GET_UBOOL(Z_Param_AllowOverWriting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::FileIO__SaveStringArrayToFile(Z_Param_SaveDirectory,Z_Param_JoyfulFileName,Z_Param_SaveText,Z_Param_AllowOverWriting); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileIO__SaveStringTextToFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveDirectory); \
		P_GET_PROPERTY(UStrProperty,Z_Param_JoyfulFileName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveText); \
		P_GET_UBOOL(Z_Param_AllowOverWriting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::FileIO__SaveStringTextToFile(Z_Param_SaveDirectory,Z_Param_JoyfulFileName,Z_Param_SaveText,Z_Param_AllowOverWriting); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnimation__GetAimOffsetsFromRotation) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_AnimBPOwner); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_TheRotation); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Pitch); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Yaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Animation__GetAimOffsetsFromRotation(Z_Param_AnimBPOwner,Z_Param_Out_TheRotation,Z_Param_Out_Pitch,Z_Param_Out_Yaw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnimation__GetAimOffsets) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_AnimBPOwner); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Pitch); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Yaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Animation__GetAimOffsets(Z_Param_AnimBPOwner,Z_Param_Out_Pitch,Z_Param_Out_Yaw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDraw__Thick3DLineBetweenActors) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_StartActor); \
		P_GET_OBJECT(AActor,Z_Param_EndActor); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Draw__Thick3DLineBetweenActors(Z_Param_StartActor,Z_Param_EndActor,Z_Param_LineColor,Z_Param_Thickness,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDraw__Thick3DLineFromSocket) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EndPoint); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Socket); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Draw__Thick3DLineFromSocket(Z_Param_Mesh,Z_Param_Out_EndPoint,Z_Param_Socket,Z_Param_LineColor,Z_Param_Thickness,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDraw__Thick3DLineFromCharacterSocket) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TheCharacter); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EndPoint); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Socket); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Draw__Thick3DLineFromCharacterSocket(Z_Param_TheCharacter,Z_Param_Out_EndPoint,Z_Param_Socket,Z_Param_LineColor,Z_Param_Thickness,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCharacter__GetControllerRotation) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TheCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UVictoryBPFunctionLibrary::Character__GetControllerRotation(Z_Param_TheCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConversions__RotatorToVector) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_TheRotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UVictoryBPFunctionLibrary::Conversions__RotatorToVector(Z_Param_Out_TheRotator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConversions__VectorToRotator) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TheVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UVictoryBPFunctionLibrary::Conversions__VectorToRotator(Z_Param_Out_TheVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewport__GetCenterOfViewport) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_ThePC); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PosX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PosY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Viewport__GetCenterOfViewport(Z_Param_ThePC,Z_Param_Out_PosX,Z_Param_Out_PosY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewport__GetMousePosition) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_ThePC); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PosX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PosY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Viewport__GetMousePosition(Z_Param_ThePC,Z_Param_Out_PosX,Z_Param_Out_PosY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewport__SetMousePosition) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_ThePC); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PosX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PosY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Viewport__SetMousePosition(Z_Param_ThePC,Z_Param_Out_PosX,Z_Param_Out_PosY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewport__EnableWorldRendering) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_ThePC); \
		P_GET_UBOOL(Z_Param_RenderTheWorld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Viewport__EnableWorldRendering(Z_Param_ThePC,Z_Param_RenderTheWorld); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySimulateKeyPress) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_ThePC); \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EventType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictorySimulateKeyPress(Z_Param_ThePC,Z_Param_Key,EInputEvent(Z_Param_EventType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySimulateMouseWheel) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictorySimulateMouseWheel(Z_Param_Out_Delta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAccessor__GetPlayerController) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TheCharacter); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerController**)Z_Param__Result=UVictoryBPFunctionLibrary::Accessor__GetPlayerController(Z_Param_TheCharacter,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAccessor__GetNameAsString) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_TheObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::Accessor__GetNameAsString(Z_Param_TheObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesMaterialHaveParameter) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Mat); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Parameter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::DoesMaterialHaveParameter(Z_Param_Mat,Z_Param_Parameter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPhysics__UpdateCharacterCameraToRagdollLocation) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TheCharacter); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HeightOffset); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InterpSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Physics__UpdateCharacterCameraToRagdollLocation(Z_Param_TheCharacter,Z_Param_HeightOffset,Z_Param_InterpSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPhysics__InitializeVictoryRagDoll) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TheCharacter); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InitLocation); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InitRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Physics__InitializeVictoryRagDoll(Z_Param_TheCharacter,Z_Param_Out_InitLocation,Z_Param_Out_InitRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPhysics__GetLocationofRagDoll) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TheCharacter); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RagdollLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Physics__GetLocationofRagDoll(Z_Param_TheCharacter,Z_Param_Out_RagdollLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPhysics__IsRagDoll) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TheCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Physics__IsRagDoll(Z_Param_TheCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPhysics__LeaveRagDoll) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TheCharacter); \
		P_GET_UBOOL(Z_Param_SetToFallingMovementMode); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HeightAboveRBMesh); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InitLocation); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InitRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Physics__LeaveRagDoll(Z_Param_TheCharacter,Z_Param_SetToFallingMovementMode,Z_Param_HeightAboveRBMesh,Z_Param_Out_InitLocation,Z_Param_Out_InitRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPhysics__EnterRagDoll) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TheCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Physics__EnterRagDoll(Z_Param_TheCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWorldType__InGameInstanceWorld) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::WorldType__InGameInstanceWorld(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWorldType__InPIEWorld) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::WorldType__InPIEWorld(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWorldType__InEditorWorld) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::WorldType__InEditorWorld(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActor__TeleportToActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToTeleport); \
		P_GET_OBJECT(AActor,Z_Param_DestinationActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Actor__TeleportToActor(Z_Param_ActorToTeleport,Z_Param_DestinationActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClone__StaticMeshActor) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_GET_OBJECT(AStaticMeshActor,Z_Param_ToClone); \
		P_GET_STRUCT(FVector,Z_Param_LocationOffset); \
		P_GET_STRUCT(FRotator,Z_Param_RotationOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AStaticMeshActor**)Z_Param__Result=UVictoryBPFunctionLibrary::Clone__StaticMeshActor(Z_Param_WorldContextObject,Z_Param_Out_IsValid,Z_Param_ToClone,Z_Param_LocationOffset,Z_Param_RotationOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserDisplayAdapterBrand) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_IsAMD); \
		P_GET_UBOOL_REF(Z_Param_Out_IsNvidia); \
		P_GET_UBOOL_REF(Z_Param_Out_IsIntel); \
		P_GET_UBOOL_REF(Z_Param_Out_IsUnknown); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_UnknownId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::GetUserDisplayAdapterBrand(Z_Param_Out_IsAMD,Z_Param_Out_IsNvidia,Z_Param_Out_IsIntel,Z_Param_Out_IsUnknown,Z_Param_Out_UnknownId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOptionsMenu__GetDisplayAdapterScreenResolutions) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Widths); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Heights); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_RefreshRates); \
		P_GET_UBOOL(Z_Param_IncludeRefreshRates); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::OptionsMenu__GetDisplayAdapterScreenResolutions(Z_Param_Out_Widths,Z_Param_Out_Heights,Z_Param_Out_RefreshRates,Z_Param_IncludeRefreshRates); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString__CombineStrings_Multi) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::String__CombineStrings_Multi(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString__CombineStrings) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_StringFirst); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StringSecond); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Separator); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StringFirstLabel); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StringSecondLabel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::String__CombineStrings(Z_Param_StringFirst,Z_Param_StringSecond,Z_Param_Separator,Z_Param_StringFirstLabel,Z_Param_StringSecondLabel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasSubstring) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SearchIn); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Substring); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SearchCase); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SearchDir); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::HasSubstring(Z_Param_SearchIn,Z_Param_Substring,ESearchCase::Type(Z_Param_SearchCase),ESearchDir::Type(Z_Param_SearchDir)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_SaveStringToOSClipboard) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ToClipboard); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Victory_SaveStringToOSClipboard(Z_Param_ToClipboard); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_GetStringFromOSClipboard) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_FromClipboard); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Victory_GetStringFromOSClipboard(Z_Param_Out_FromClipboard); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAlphaNumeric) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_String); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::IsAlphaNumeric(Z_Param_String); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_SecondsToHoursMinutesSeconds) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Seconds); \
		P_GET_UBOOL(Z_Param_TrimZeroes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_SecondsToHoursMinutesSeconds(Z_Param_Seconds,Z_Param_TrimZeroes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryAppendInline) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_String); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ToAppend); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Result); \
		P_GET_UBOOL(Z_Param_AppendNewline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictoryAppendInline(Z_Param_Out_String,Z_Param_ToAppend,Z_Param_Out_Result,Z_Param_AppendNewline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCountOccurrancesOfSubString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Source); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SubString); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SearchCase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UVictoryBPFunctionLibrary::CountOccurrancesOfSubString(Z_Param_Source,Z_Param_SubString,ESearchCase::Type(Z_Param_SearchCase)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConversion__FloatToRoundedInteger) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_IN_Float); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UVictoryBPFunctionLibrary::Conversion__FloatToRoundedInteger(Z_Param_IN_Float); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCharacterMovement__SetMaxMoveSpeed) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_TheCharacter); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMaxMoveSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::CharacterMovement__SetMaxMoveSpeed(Z_Param_TheCharacter,Z_Param_NewMaxMoveSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMinOfIntArray) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_IntArray); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IndexOfMinValue); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_MinValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::MinOfIntArray(Z_Param_Out_IntArray,Z_Param_Out_IndexOfMinValue,Z_Param_Out_MinValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMinOfFloatArray) \
	{ \
		P_GET_TARRAY_REF(float,Z_Param_Out_FloatArray); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IndexOfMinValue); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MinValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::MinOfFloatArray(Z_Param_Out_FloatArray,Z_Param_Out_IndexOfMinValue,Z_Param_Out_MinValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMaxOfIntArray) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_IntArray); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IndexOfMaxValue); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_MaxValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::MaxOfIntArray(Z_Param_Out_IntArray,Z_Param_Out_IndexOfMaxValue,Z_Param_Out_MaxValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMaxOfFloatArray) \
	{ \
		P_GET_TARRAY_REF(float,Z_Param_Out_FloatArray); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IndexOfMaxValue); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MaxValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::MaxOfFloatArray(Z_Param_Out_FloatArray,Z_Param_Out_IndexOfMaxValue,Z_Param_Out_MaxValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadStringFromFile) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Result); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::LoadStringFromFile(Z_Param_Out_Result,Z_Param_FullFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadStringArrayFromFile) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_StringArray); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_ArraySize); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullFilePath); \
		P_GET_UBOOL(Z_Param_ExcludeEmptyLines); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::LoadStringArrayFromFile(Z_Param_Out_StringArray,Z_Param_Out_ArraySize,Z_Param_FullFilePath,Z_Param_ExcludeEmptyLines); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRealWorldTime__GetDifferenceBetweenTimes) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PreviousTime1); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PreviousTime2); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Milliseconds); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Seconds); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Minutes); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Hours); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::RealWorldTime__GetDifferenceBetweenTimes(Z_Param_PreviousTime1,Z_Param_PreviousTime2,Z_Param_Out_Milliseconds,Z_Param_Out_Seconds,Z_Param_Out_Minutes,Z_Param_Out_Hours); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRealWorldTime__GetTimePassedSincePreviousTime) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PreviousTime); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Milliseconds); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Seconds); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Minutes); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Hours); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::RealWorldTime__GetTimePassedSincePreviousTime(Z_Param_PreviousTime,Z_Param_Out_Milliseconds,Z_Param_Out_Seconds,Z_Param_Out_Minutes,Z_Param_Out_Hours); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRealWorldTime__GetCurrentOSTime) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_MilliSeconds); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Seconds); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Minutes); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Hours12); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Hours24); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Day); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Month); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Year); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::RealWorldTime__GetCurrentOSTime(Z_Param_Out_MilliSeconds,Z_Param_Out_Seconds,Z_Param_Out_Minutes,Z_Param_Out_Hours12,Z_Param_Out_Hours24,Z_Param_Out_Day,Z_Param_Out_Month,Z_Param_Out_Year); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOperatingSystem__GetCurrentPlatform) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_Windows_); \
		P_GET_UBOOL_REF(Z_Param_Out_Mac); \
		P_GET_UBOOL_REF(Z_Param_Out_Linux); \
		P_GET_UBOOL_REF(Z_Param_Out_iOS); \
		P_GET_UBOOL_REF(Z_Param_Out_Android); \
		P_GET_UBOOL_REF(Z_Param_Out_Android_ARM); \
		P_GET_UBOOL_REF(Z_Param_Out_Android_Vulkan); \
		P_GET_UBOOL_REF(Z_Param_Out_PS4); \
		P_GET_UBOOL_REF(Z_Param_Out_XBoxOne); \
		P_GET_UBOOL_REF(Z_Param_Out_HTML5); \
		P_GET_UBOOL_REF(Z_Param_Out_Apple); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::OperatingSystem__GetCurrentPlatform(Z_Param_Out_Windows_,Z_Param_Out_Mac,Z_Param_Out_Linux,Z_Param_Out_iOS,Z_Param_Out_Android,Z_Param_Out_Android_ARM,Z_Param_Out_Android_Vulkan,Z_Param_Out_PS4,Z_Param_Out_XBoxOne,Z_Param_Out_HTML5,Z_Param_Out_Apple); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpen_URL_In_Web_Browser) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TheURL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Open_URL_In_Web_Browser(Z_Param_TheURL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsStandAlone) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::IsStandAlone(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayerState_GetPlayerID) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_ThePC); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_PlayerID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::PlayerState_GetPlayerID(Z_Param_ThePC,Z_Param_Out_PlayerID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayerController_GetControllerID) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_ThePC); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_ControllerID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::PlayerController_GetControllerID(Z_Param_ThePC,Z_Param_Out_ControllerID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelection_SelectionBox) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_SelectedActors); \
		P_GET_STRUCT(FVector2D,Z_Param_AnchorPoint); \
		P_GET_STRUCT(FVector2D,Z_Param_DraggedPoint); \
		P_GET_OBJECT(UClass,Z_Param_ClassFilter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Selection_SelectionBox(Z_Param_WorldContextObject,Z_Param_Out_SelectedActors,Z_Param_AnchorPoint,Z_Param_DraggedPoint,Z_Param_ClassFilter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoxContainingWorldPoints) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Center); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Extent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::GetBoxContainingWorldPoints(Z_Param_Out_Points,Z_Param_Out_Center,Z_Param_Out_Extent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestActorOfClassInRadiusOfActor) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_GET_OBJECT(AActor,Z_Param_ActorCenter); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UVictoryBPFunctionLibrary::GetClosestActorOfClassInRadiusOfActor(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_ActorCenter,Z_Param_Radius,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestActorOfClassInRadiusOfLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_GET_STRUCT(FVector,Z_Param_Center); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UVictoryBPFunctionLibrary::GetClosestActorOfClassInRadiusOfLocation(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Center,Z_Param_Radius,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawCircle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Center); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumPoints); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_STRUCT(FVector,Z_Param_YAxis); \
		P_GET_STRUCT(FVector,Z_Param_ZAxis); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_UBOOL(Z_Param_PersistentLines); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::DrawCircle(Z_Param_WorldContextObject,Z_Param_Center,Z_Param_Radius,Z_Param_NumPoints,Z_Param_Thickness,Z_Param_LineColor,Z_Param_YAxis,Z_Param_ZAxis,Z_Param_Duration,Z_Param_PersistentLines); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToActorRotation) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TheActor); \
		P_GET_STRUCT(FRotator,Z_Param_AddRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::AddToActorRotation(Z_Param_TheActor,Z_Param_AddRot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStaticMeshVertexLocations) \
	{ \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_Comp); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_VertexPositions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::GetStaticMeshVertexLocations(Z_Param_Comp,Z_Param_Out_VertexPositions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNamesOfLoadedLevels) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_NamesOfLoadedLevels); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::GetNamesOfLoadedLevels(Z_Param_WorldContextObject,Z_Param_Out_NamesOfLoadedLevels); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnActorIntoLevel) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Level); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_UBOOL(Z_Param_SpawnEvenIfColliding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UVictoryBPFunctionLibrary::SpawnActorIntoLevel(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Level,Z_Param_Location,Z_Param_Rotation,Z_Param_SpawnEvenIfColliding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreatePrimitiveComponent) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_CompClass); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPrimitiveComponent**)Z_Param__Result=UVictoryBPFunctionLibrary::CreatePrimitiveComponent(Z_Param_WorldContextObject,Z_Param_CompClass,Z_Param_Name,Z_Param_Location,Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_TheObjectClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UVictoryBPFunctionLibrary::CreateObject(Z_Param_WorldContextObject,Z_Param_TheObjectClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectWorldToScreenPosition) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UVictoryBPFunctionLibrary::ProjectWorldToScreenPosition(Z_Param_Out_WorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGraphicsSettings__SetFrameRateToBeUnbound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::GraphicsSettings__SetFrameRateToBeUnbound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGraphicsSettings__SetFrameRateCap) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::GraphicsSettings__SetFrameRateCap(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoops_ResetBPRunawayCounter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Loops_ResetBPRunawayCounter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerUniqueNetID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UVictoryBPFunctionLibrary::GetPlayerUniqueNetID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoyIsKey) \
	{ \
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_KeyEvent); \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_GET_UBOOL_REF(Z_Param_Out_Ctrl); \
		P_GET_UBOOL_REF(Z_Param_Out_Shift); \
		P_GET_UBOOL_REF(Z_Param_Out_Alt); \
		P_GET_UBOOL_REF(Z_Param_Out_Cmd); \
		P_GET_UBOOL_REF(Z_Param_Out_Match); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::JoyIsKey(Z_Param_Out_KeyEvent,Z_Param_Key,Z_Param_Out_Ctrl,Z_Param_Out_Shift,Z_Param_Out_Alt,Z_Param_Out_Cmd,Z_Param_Out_Match); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWidgetOfClassInViewport) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_WidgetClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::IsWidgetOfClassInViewport(Z_Param_WorldContextObject,Z_Param_WidgetClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllWidgetsOfClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_WidgetClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::RemoveAllWidgetsOfClass(Z_Param_WorldContextObject,Z_Param_WidgetClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllWidgetsOfClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_WidgetClass); \
		P_GET_TARRAY_REF(UUserWidget*,Z_Param_Out_FoundWidgets); \
		P_GET_UBOOL(Z_Param_TopLevelOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::GetAllWidgetsOfClass(Z_Param_WorldContextObject,Z_Param_WidgetClass,Z_Param_Out_FoundWidgets,Z_Param_TopLevelOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectPath) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UVictoryBPFunctionLibrary::GetObjectPath(Z_Param_Obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadObjectFromAssetPath) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ObjectClass); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Path); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UVictoryBPFunctionLibrary::LoadObjectFromAssetPath(Z_Param_ObjectClass,Z_Param_Path,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeadMountedDisplayDeviceType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UVictoryBPFunctionLibrary::GetHeadMountedDisplayDeviceType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformVectorToActorSpace) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->TransformVectorToActorSpace(Z_Param_Actor,Z_Param_Out_InVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformVectorToActorSpaceAngle) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->TransformVectorToActorSpaceAngle(Z_Param_Actor,Z_Param_Out_InVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_String) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_String(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Color) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_STRUCT(FLinearColor,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Color(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Rotator) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_STRUCT(FRotator,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Rotator(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Vector) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Vector(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Float) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Float(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Int) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Int(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Bool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Bool(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Vector2D) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_STRUCT(FVector2D,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Vector2D(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Vector2D) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Vector2D(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_String) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_String(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Color) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Color(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Rotator) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Rotator(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Vector) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Vector(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Float) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Float(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Int) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Int(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Bool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Bool(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConversions__ColorToString) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ColorAsString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Conversions__ColorToString(Z_Param_Out_Color,Z_Param_Out_ColorAsString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConversions__StringToColor) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_String); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_ConvertedColor); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Conversions__StringToColor(Z_Param_String,Z_Param_Out_ConvertedColor,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConversions__StringToRotator) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_String); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_ConvertedRotator); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Conversions__StringToRotator(Z_Param_String,Z_Param_Out_ConvertedRotator,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConversions__StringToVector) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_String); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ConvertedVector); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Conversions__StringToVector(Z_Param_String,Z_Param_Out_ConvertedVector,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerStart) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerStartName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerStart**)Z_Param__Result=UVictoryBPFunctionLibrary::GetPlayerStart(Z_Param_WorldContextObject,Z_Param_PlayerStartName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerTravel) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MapName); \
		P_GET_UBOOL(Z_Param_bNotifyPlayers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::ServerTravel(Z_Param_WorldContextObject,Z_Param_MapName,Z_Param_bNotifyPlayers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMapRangeClamped) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InRangeA); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InRangeB); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OutRangeA); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OutRangeB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::MapRangeClamped(Z_Param_Value,Z_Param_InRangeA,Z_Param_InRangeB,Z_Param_OutRangeA,Z_Param_OutRangeB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execText_ToInt) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Text); \
		P_GET_UBOOL(Z_Param_UseDotForThousands); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UVictoryBPFunctionLibrary::Text_ToInt(Z_Param_Out_Text,Z_Param_UseDotForThousands); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execText_ToFloat) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Text); \
		P_GET_UBOOL(Z_Param_UseDotForThousands); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::Text_ToFloat(Z_Param_Out_Text,Z_Param_UseDotForThousands); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execText_IsNumeric) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Text); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Text_IsNumeric(Z_Param_Out_Text); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2DInterpTo_Constant) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Current); \
		P_GET_STRUCT(FVector2D,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InterpSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UVictoryBPFunctionLibrary::Vector2DInterpTo_Constant(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2DInterpTo) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Current); \
		P_GET_STRUCT(FVector2D,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InterpSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UVictoryBPFunctionLibrary::Vector2DInterpTo(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_Vector2DVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::NotEqual_Vector2DVector2D(Z_Param_A,Z_Param_B,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_Vector2DVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::EqualEqual_Vector2DVector2D(Z_Param_A,Z_Param_B,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySortFloatArray) \
	{ \
		P_GET_TARRAY_REF(float,Z_Param_Out_FloatArray); \
		P_GET_TARRAY_REF(float,Z_Param_Out_FloatArrayRef); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictorySortFloatArray(Z_Param_Out_FloatArray,Z_Param_Out_FloatArrayRef); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySortIntArray) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_IntArray); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_IntArrayRef); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictorySortIntArray(Z_Param_Out_IntArray,Z_Param_Out_IntArrayRef); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryFloatMinusEquals) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Float); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Sub); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FloatOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictoryFloatMinusEquals(Z_Param_Out_Float,Z_Param_Sub,Z_Param_Out_FloatOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryFloatPlusEquals) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Float); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Add); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FloatOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictoryFloatPlusEquals(Z_Param_Out_Float,Z_Param_Add,Z_Param_Out_FloatOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryIntMinusEquals) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Int); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Sub); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IntOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictoryIntMinusEquals(Z_Param_Out_Int,Z_Param_Sub,Z_Param_Out_IntOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryIntPlusEquals) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Int); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Add); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IntOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictoryIntPlusEquals(Z_Param_Out_Int,Z_Param_Add,Z_Param_Out_IntOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPointOnPlane) \
	{ \
		P_GET_STRUCT_REF(FPlane,Z_Param_Out_Plane); \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::IsPointOnPlane(Z_Param_Out_Plane,Z_Param_Point,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointDistanceToPlane) \
	{ \
		P_GET_STRUCT_REF(FPlane,Z_Param_Out_Plane); \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Distance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::PointDistanceToPlane(Z_Param_Out_Plane,Z_Param_Point,Z_Param_Out_Distance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreatePlane) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Center); \
		P_GET_STRUCT(FVector,Z_Param_Normal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPlane*)Z_Param__Result=UVictoryBPFunctionLibrary::CreatePlane(Z_Param_Center,Z_Param_Normal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeInPlay) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::GetTimeInPlay(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetSoundVolume) \
	{ \
		P_GET_OBJECT(USoundClass,Z_Param_SoundClassObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetSoundVolume(Z_Param_SoundClassObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySoundVolumeChange) \
	{ \
		P_GET_OBJECT(USoundClass,Z_Param_SoundClassObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVolume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::VictorySoundVolumeChange(Z_Param_SoundClassObject,Z_Param_NewVolume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryRemoveActionKeyBind) \
	{ \
		P_GET_STRUCT(FVictoryInput,Z_Param_ToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictoryRemoveActionKeyBind(Z_Param_ToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryReBindActionKey) \
	{ \
		P_GET_STRUCT(FVictoryInput,Z_Param_Original); \
		P_GET_STRUCT(FVictoryInput,Z_Param_NewBinding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryReBindActionKey(Z_Param_Original,Z_Param_NewBinding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetAllActionKeyBindings) \
	{ \
		P_GET_TARRAY_REF(FVictoryInput,Z_Param_Out_Bindings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictoryGetAllActionKeyBindings(Z_Param_Out_Bindings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetVictoryInput) \
	{ \
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_KeyEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVictoryInput*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetVictoryInput(Z_Param_Out_KeyEvent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryReBindAxisKey) \
	{ \
		P_GET_STRUCT(FVictoryInputAxis,Z_Param_Original); \
		P_GET_STRUCT(FVictoryInputAxis,Z_Param_NewBinding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryReBindAxisKey(Z_Param_Original,Z_Param_NewBinding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryRemoveAxisKeyBind) \
	{ \
		P_GET_STRUCT(FVictoryInputAxis,Z_Param_ToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictoryRemoveAxisKeyBind(Z_Param_ToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetAllAxisKeyBindings) \
	{ \
		P_GET_TARRAY_REF(FVictoryInputAxis,Z_Param_Out_Bindings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictoryGetAllAxisKeyBindings(Z_Param_Out_Bindings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetVictoryInputAxis) \
	{ \
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_KeyEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVictoryInputAxis*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetVictoryInputAxis(Z_Param_Out_KeyEvent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetAllAxisAndActionMappingsForKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_GET_TARRAY_REF(FVictoryInput,Z_Param_Out_ActionBindings); \
		P_GET_TARRAY_REF(FVictoryInputAxis,Z_Param_Out_AxisBindings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictoryGetAllAxisAndActionMappingsForKey(Z_Param_Key,Z_Param_Out_ActionBindings,Z_Param_Out_AxisBindings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScreenShots_Rename_Move_Most_Recent) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OriginalFileName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewAbsoluteFolderPath); \
		P_GET_UBOOL(Z_Param_HighResolution); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::ScreenShots_Rename_Move_Most_Recent(Z_Param_Out_OriginalFileName,Z_Param_NewName,Z_Param_NewAbsoluteFolderPath,Z_Param_HighResolution); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGameObject_GetAllSaveSlotFileNames) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_FileNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::SaveGameObject_GetAllSaveSlotFileNames(Z_Param_Out_FileNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoyFileIO_GetFilesInRootAndAllSubFolders) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Files); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RootFolderFullPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Ext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::JoyFileIO_GetFilesInRootAndAllSubFolders(Z_Param_Out_Files,Z_Param_RootFolderFullPath,Z_Param_Ext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoyFileIO_GetFiles) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Files); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RootFolderFullPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Ext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::JoyFileIO_GetFiles(Z_Param_Out_Files,Z_Param_RootFolderFullPath,Z_Param_Ext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryISM_ConvertToVictoryISMActors) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_GET_TARRAY_REF(AVictoryISM*,Z_Param_Out_CreatedISMActors); \
		P_GET_UBOOL(Z_Param_DestroyOriginalActors); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinCountToCreateISM); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictoryISM_ConvertToVictoryISMActors(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Out_CreatedISMActors,Z_Param_DestroyOriginalActors,Z_Param_MinCountToCreateISM); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryISM_GetAllVictoryISMActors) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(AVictoryISM*,Z_Param_Out_Out); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictoryISM_GetAllVictoryISMActors(Z_Param_WorldContextObject,Z_Param_Out_Out); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryDestructible_DestroyChunk) \
	{ \
		P_GET_OBJECT(UDestructibleComponent,Z_Param_DestructibleComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_HitItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryDestructible_DestroyChunk(Z_Param_DestructibleComp,Z_Param_HitItem); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDistanceBetweenComponentSurfaces) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_CollisionComponent1); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_CollisionComponent2); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PointOnSurface1); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PointOnSurface2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::GetDistanceBetweenComponentSurfaces(Z_Param_CollisionComponent1,Z_Param_CollisionComponent2,Z_Param_Out_PointOnSurface1,Z_Param_Out_PointOnSurface2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDistanceToCollision) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_CollisionComponent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ClosestPointOnCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::GetDistanceToCollision(Z_Param_CollisionComponent,Z_Param_Out_Point,Z_Param_Out_ClosestPointOnCollision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPhysics_UpdateAngularDamping) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_CompToUpdate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewAngularDamping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryPhysics_UpdateAngularDamping(Z_Param_CompToUpdate,Z_Param_NewAngularDamping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTextureRenderTarget2D) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_GET_STRUCT(FLinearColor,Z_Param_ClearColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Gamma); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTextureRenderTarget2D**)Z_Param__Result=UVictoryBPFunctionLibrary::CreateTextureRenderTarget2D(Z_Param_Width,Z_Param_Height,Z_Param_ClearColor,Z_Param_Gamma); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCommandLine) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::GetCommandLine(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetComponentTickRate) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_Component); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Seconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::SetComponentTickRate(Z_Param_Component,Z_Param_Seconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompareMD5Hash) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MD5HashFile1); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MD5HashFile2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::CompareMD5Hash(Z_Param_MD5HashFile1,Z_Param_MD5HashFile2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateMD5Hash) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileToHash); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileToStoreHashTo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::CreateMD5Hash(Z_Param_FileToHash,Z_Param_FileToStoreHashTo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUTCToLocal) \
	{ \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_UTCTime); \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_LocalTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::UTCToLocal(Z_Param_Out_UTCTime,Z_Param_Out_LocalTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUTCFromUnixTimeStamp) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_UnixTimeStamp); \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_UTCTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::GetUTCFromUnixTimeStamp(Z_Param_UnixTimeStamp,Z_Param_Out_UTCTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnixTimeStamp) \
	{ \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_UTCTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UVictoryBPFunctionLibrary::GetUnixTimeStamp(Z_Param_Out_UTCTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryIsApplicationRunning) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ProcessId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryIsApplicationRunning(Z_Param_ProcessId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetApplicationName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ProcessId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetApplicationName(Z_Param_ProcessId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryCreateProc) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_ProcessId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullPathOfProgramToRun); \
		P_GET_TARRAY(FString,Z_Param_CommandlineArgs); \
		P_GET_UBOOL(Z_Param_Detach); \
		P_GET_UBOOL(Z_Param_Hidden); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Priority); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OptionalWorkingDirectory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictoryCreateProc(Z_Param_Out_ProcessId,Z_Param_FullPathOfProgramToRun,Z_Param_CommandlineArgs,Z_Param_Detach,Z_Param_Hidden,Z_Param_Priority,Z_Param_OptionalWorkingDirectory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_GetGPUInfo) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_DeviceDescription); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Provider); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_DriverVersion); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_DriverDate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Victory_GetGPUInfo(Z_Param_Out_DeviceDescription,Z_Param_Out_Provider,Z_Param_Out_DriverVersion,Z_Param_Out_DriverDate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_GetGRHIAdapterName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_GetGRHIAdapterName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_GetGPUBrand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_GetGPUBrand(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_AI_MoveToWithFilter) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Dest); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AcceptanceRadius); \
		P_GET_UBOOL(Z_Param_bProjectDestinationToNavigation); \
		P_GET_UBOOL(Z_Param_bStopOnOverlap); \
		P_GET_UBOOL(Z_Param_bCanStrafe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EPathFollowingRequestResult::Type>*)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_AI_MoveToWithFilter(Z_Param_Pawn,Z_Param_Out_Dest,Z_Param_FilterClass,Z_Param_AcceptanceRadius,Z_Param_bProjectDestinationToNavigation,Z_Param_bStopOnOverlap,Z_Param_bCanStrafe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryLoadLevelInstance) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MapFolderOffOfContent); \
		P_GET_PROPERTY(UStrProperty,Z_Param_LevelName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InstanceNumber); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULevelStreaming**)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryLoadLevelInstance(Z_Param_WorldContextObject,Z_Param_MapFolderOffOfContent,Z_Param_LevelName,Z_Param_InstanceNumber,Z_Param_Location,Z_Param_Rotation,Z_Param_Out_Success); \
		P_NATIVE_END; \
	}


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_230_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAppendMultiple) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::AppendMultiple(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStringIsEmpty) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::StringIsEmpty(Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVerticalFOV) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HorizontalFOV); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AspectRatio); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::VerticalFOV(Z_Param_HorizontalFOV,Z_Param_AspectRatio); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHorizontalFOV) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VerticalFOV); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AspectRatio); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::HorizontalFOV(Z_Param_VerticalFOV,Z_Param_AspectRatio); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorRelativeRotation) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ParentActor); \
		P_GET_OBJECT(AActor,Z_Param_ChildActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UVictoryBPFunctionLibrary::GetActorRelativeRotation(Z_Param_ParentActor,Z_Param_ChildActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComponentRelativeRotation) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_ParentComponent); \
		P_GET_OBJECT(USceneComponent,Z_Param_ChildComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UVictoryBPFunctionLibrary::GetComponentRelativeRotation(Z_Param_ParentComponent,Z_Param_ChildComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRotatorRelativeRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_ParentRotation); \
		P_GET_STRUCT(FRotator,Z_Param_ChildRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UVictoryBPFunctionLibrary::GetRotatorRelativeRotation(Z_Param_ParentRotation,Z_Param_ChildRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorRelativeLocation) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ParentActor); \
		P_GET_OBJECT(AActor,Z_Param_ChildActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UVictoryBPFunctionLibrary::GetActorRelativeLocation(Z_Param_ParentActor,Z_Param_ChildActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComponentRelativeLocation) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_ParentComponent); \
		P_GET_OBJECT(USceneComponent,Z_Param_ChildComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UVictoryBPFunctionLibrary::GetComponentRelativeLocation(Z_Param_ParentComponent,Z_Param_ChildComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVectorRelativeLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ParentLocation); \
		P_GET_STRUCT(FRotator,Z_Param_ParentRotation); \
		P_GET_STRUCT(FVector,Z_Param_ChildLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UVictoryBPFunctionLibrary::GetVectorRelativeLocation(Z_Param_ParentLocation,Z_Param_ParentRotation,Z_Param_ChildLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlushPressedKeys) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::FlushPressedKeys(Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInsertChildAt) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Parent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPanelSlot**)Z_Param__Result=UVictoryBPFunctionLibrary::InsertChildAt(Z_Param_Parent,Z_Param_Index,Z_Param_Content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewportPositionDeproject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ViewportPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutWorldOrigin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutWorldDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::ViewportPositionDeproject(Z_Param_WorldContextObject,Z_Param_Out_ViewportPosition,Z_Param_Out_OutWorldOrigin,Z_Param_Out_OutWorldDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewportPositionHitResultByChannel) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ViewportPosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceChannel); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::GetViewportPositionHitResultByChannel(Z_Param_WorldContextObject,Z_Param_Out_ViewportPosition,ECollisionChannel(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_OutHitResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewportPosition) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenPosition); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutViewportPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::GetViewportPosition(Z_Param_WorldContextObject,Z_Param_Out_ScreenPosition,Z_Param_Out_OutViewportPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComponent_PrestreamTextures) \
	{ \
		P_GET_OBJECT(UMeshComponent,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Seconds); \
		P_GET_UBOOL(Z_Param_bEnableStreaming); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CinematicTextureGroups); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Component_PrestreamTextures(Z_Param_Target,Z_Param_Seconds,Z_Param_bEnableStreaming,Z_Param_CinematicTextureGroups); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActor_PrestreamTextures) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Seconds); \
		P_GET_UBOOL(Z_Param_bEnableStreaming); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CinematicTextureGroups); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Actor_PrestreamTextures(Z_Param_Target,Z_Param_Seconds,Z_Param_bEnableStreaming,Z_Param_CinematicTextureGroups); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnloadStreamingLevel) \
	{ \
		P_GET_OBJECT(ULevelStreamingKismet,Z_Param_LevelInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::UnloadStreamingLevel(Z_Param_LevelInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideStreamingLevel) \
	{ \
		P_GET_OBJECT(ULevelStreamingKismet,Z_Param_LevelInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::HideStreamingLevel(Z_Param_LevelInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveFromStreamingLevels) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FLevelStreamInstanceInfo,Z_Param_Out_LevelInstanceInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::RemoveFromStreamingLevels(Z_Param_WorldContextObject,Z_Param_Out_LevelInstanceInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToStreamingLevels) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FLevelStreamInstanceInfo,Z_Param_Out_LevelInstanceInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::AddToStreamingLevels(Z_Param_WorldContextObject,Z_Param_Out_LevelInstanceInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLevelInstanceInfo) \
	{ \
		P_GET_OBJECT(ULevelStreamingKismet,Z_Param_LevelInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLevelStreamInstanceInfo*)Z_Param__Result=UVictoryBPFunctionLibrary::GetLevelInstanceInfo(Z_Param_LevelInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGenericTeamId) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewTeamId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::SetGenericTeamId(Z_Param_Target,Z_Param_NewTeamId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGenericTeamId) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UVictoryBPFunctionLibrary::GetGenericTeamId(Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWidgetFromName) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_ParentUserWidget); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=UVictoryBPFunctionLibrary::GetWidgetFromName(Z_Param_ParentUserWidget,Z_Param_Out_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWidgetGetChildrenOfClass) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_ParentWidget); \
		P_GET_TARRAY_REF(UUserWidget*,Z_Param_Out_ChildWidgets); \
		P_GET_OBJECT(UClass,Z_Param_WidgetClass); \
		P_GET_UBOOL(Z_Param_bImmediateOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::WidgetGetChildrenOfClass(Z_Param_ParentWidget,Z_Param_Out_ChildWidgets,Z_Param_WidgetClass,Z_Param_bImmediateOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWidgetGetParentOfClass) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_ChildWidget); \
		P_GET_OBJECT(UClass,Z_Param_WidgetClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUserWidget**)Z_Param__Result=UVictoryBPFunctionLibrary::WidgetGetParentOfClass(Z_Param_ChildWidget,Z_Param_WidgetClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWidgetIsChildOf) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_ChildWidget); \
		P_GET_OBJECT(UWidget,Z_Param_PossibleParent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::WidgetIsChildOf(Z_Param_ChildWidget,Z_Param_PossibleParent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFirstWidgetOfClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_WidgetClass); \
		P_GET_UBOOL(Z_Param_TopLevelOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUserWidget**)Z_Param__Result=UVictoryBPFunctionLibrary::GetFirstWidgetOfClass(Z_Param_WorldContextObject,Z_Param_WidgetClass,Z_Param_TopLevelOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTexture2D_FromFileByExtension) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ImagePath); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutWidth); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UVictoryBPFunctionLibrary::LoadTexture2D_FromFileByExtension(Z_Param_ImagePath,Z_Param_Out_IsValid,Z_Param_Out_OutWidth,Z_Param_Out_OutHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapture2D_SaveImage) \
	{ \
		P_GET_OBJECT(ASceneCapture2D,Z_Param_Target); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ImagePath); \
		P_GET_STRUCT(FLinearColor,Z_Param_ClearColour); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Capture2D_SaveImage(Z_Param_Target,Z_Param_ImagePath,Z_Param_ClearColour); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCaptureComponent2D_SaveImage) \
	{ \
		P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_Target); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ImagePath); \
		P_GET_STRUCT(FLinearColor,Z_Param_ClearColour); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::CaptureComponent2D_SaveImage(Z_Param_Target,Z_Param_ImagePath,Z_Param_ClearColour); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapture2D_Project) \
	{ \
		P_GET_OBJECT(ASceneCapture2D,Z_Param_Target); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutPixelLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Capture2D_Project(Z_Param_Target,Z_Param_Location,Z_Param_Out_OutPixelLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCaptureComponent2D_Project) \
	{ \
		P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_Target); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutPixelLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::CaptureComponent2D_Project(Z_Param_Target,Z_Param_Location,Z_Param_Out_OutPixelLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeAlive) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::GetTimeAlive(Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCreationTime) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::GetCreationTime(Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBloomIntensity) \
	{ \
		P_GET_OBJECT(APostProcessVolume,Z_Param_PostProcessVolume); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Intensity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::SetBloomIntensity(Z_Param_PostProcessVolume,Z_Param_Intensity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActor__GetAttachedActors) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ParentActor); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Actor__GetAttachedActors(Z_Param_ParentActor,Z_Param_Out_ActorsArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandFloat_MINMAX_uniDis_MT) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_iMin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_iMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::RandFloat_MINMAX_uniDis_MT(Z_Param_iMin,Z_Param_iMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandFloat_uniDis_MT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::RandFloat_uniDis_MT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandInt_MINMAX_uniDis_MT) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_iMin); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UVictoryBPFunctionLibrary::RandInt_MINMAX_uniDis_MT(Z_Param_iMin,Z_Param_iMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandInt_uniDis_MT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UVictoryBPFunctionLibrary::RandInt_uniDis_MT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandBool_Bernoulli_MT) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_fBias); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::RandBool_Bernoulli_MT(Z_Param_fBias); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandFloat_MINMAX_uniDis) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_iMin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_iMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::RandFloat_MINMAX_uniDis(Z_Param_iMin,Z_Param_iMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandFloat_uniDis) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::RandFloat_uniDis(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandInt_MINMAX_uniDis) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_iMin); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UVictoryBPFunctionLibrary::RandInt_MINMAX_uniDis(Z_Param_iMin,Z_Param_iMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandInt_uniDis) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UVictoryBPFunctionLibrary::RandInt_uniDis(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandBool_Bernoulli) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_fBias); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::RandBool_Bernoulli(Z_Param_fBias); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execseedRandWithEntropy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::seedRandWithEntropy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execseedRandWithTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::seedRandWithTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execseedRand) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_seed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::seedRand(Z_Param_seed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execconstructRand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::constructRand(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSoundWaveFromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundWave**)Z_Param__Result=UVictoryBPFunctionLibrary::GetSoundWaveFromFile(Z_Param_FilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySoundAtLocationFromFile) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::PlaySoundAtLocationFromFile(Z_Param_WorldContextObject,Z_Param_FilePath,Z_Param_Location,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySoundAttachedFromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttachPointName); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UByteProperty,Z_Param_LocationType); \
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=UVictoryBPFunctionLibrary::PlaySoundAttachedFromFile(Z_Param_FilePath,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bStopWhenAttachedToDestroyed,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_GetPixelsArrayFromT2D) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_T2D); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_TextureWidth); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_TextureHeight); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_PixelArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_GetPixelsArrayFromT2D(Z_Param_T2D,Z_Param_Out_TextureWidth,Z_Param_Out_TextureHeight,Z_Param_Out_PixelArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_GetPixelFromT2D) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_T2D); \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_PixelColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_GetPixelFromT2D(Z_Param_T2D,Z_Param_X,Z_Param_Y,Z_Param_Out_PixelColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_SavePixels) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullFilePath); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_ImagePixels); \
		P_GET_UBOOL(Z_Param_SaveAsBMP); \
		P_GET_UBOOL(Z_Param_sRGB); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_SavePixels(Z_Param_FullFilePath,Z_Param_Width,Z_Param_Height,Z_Param_Out_ImagePixels,Z_Param_SaveAsBMP,Z_Param_sRGB,Z_Param_Out_ErrorString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_Get_Pixel) \
	{ \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_Pixels); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ImageHeight); \
		P_GET_PROPERTY(UIntProperty,Z_Param_x); \
		P_GET_PROPERTY(UIntProperty,Z_Param_y); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_FoundColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_Get_Pixel(Z_Param_Out_Pixels,Z_Param_ImageHeight,Z_Param_x,Z_Param_y,Z_Param_Out_FoundColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_LoadTexture2D_FromFile_Pixels) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullFilePath); \
		P_GET_ENUM(EJoyImageFormats,Z_Param_ImageFormat); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Width); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Height); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_OutPixels); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_LoadTexture2D_FromFile_Pixels(Z_Param_FullFilePath,EJoyImageFormats(Z_Param_ImageFormat),Z_Param_Out_IsValid,Z_Param_Out_Width,Z_Param_Out_Height,Z_Param_Out_OutPixels); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_LoadTexture2D_FromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullFilePath); \
		P_GET_ENUM(EJoyImageFormats,Z_Param_ImageFormat); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Width); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_LoadTexture2D_FromFile(Z_Param_FullFilePath,EJoyImageFormats(Z_Param_ImageFormat),Z_Param_Out_IsValid,Z_Param_Out_Width,Z_Param_Out_Height); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTexture2D_FromDDSFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UVictoryBPFunctionLibrary::LoadTexture2D_FromDDSFile(Z_Param_FullFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString__ExplodeString) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutputStrings); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InputString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Separator); \
		P_GET_PROPERTY(UIntProperty,Z_Param_limit); \
		P_GET_UBOOL(Z_Param_bTrimElements); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::String__ExplodeString(Z_Param_Out_OutputStrings,Z_Param_InputString,Z_Param_Separator,Z_Param_limit,Z_Param_bTrimElements); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoyGraphicsSettings__FullScreen_Set) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewSetting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::JoyGraphicsSettings__FullScreen_Set(EJoyGraphicsFullScreen::Type(Z_Param_NewSetting)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoyGraphicsSettings__FullScreen_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EJoyGraphicsFullScreen::Type>*)Z_Param__Result=UVictoryBPFunctionLibrary::JoyGraphicsSettings__FullScreen_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__LogsDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryPaths__LogsDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__ScreenShotsDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryPaths__ScreenShotsDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__ConfigDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryPaths__ConfigDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__SavedDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryPaths__SavedDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__GameRootDirectory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryPaths__GameRootDirectory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__WindowsNoEditorDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryPaths__WindowsNoEditorDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPaths__Win64Dir_BinaryLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryPaths__Win64Dir_BinaryLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMobility__SetSceneCompMobility) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_SceneComp); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewMobility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Mobility__SetSceneCompMobility(Z_Param_SceneComp,EComponentMobility::Type(Z_Param_NewMobility)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDistanceToSurface__DistaceOfPointToMeshSurface) \
	{ \
		P_GET_OBJECT(AStaticMeshActor,Z_Param_TheSMA); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TestPoint); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ClosestSurfacePoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::DistanceToSurface__DistaceOfPointToMeshSurface(Z_Param_TheSMA,Z_Param_Out_TestPoint,Z_Param_Out_ClosestSurfacePoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLensFlare__GetLensFlareOffsets) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_OBJECT(AActor,Z_Param_LightSource); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PitchOffset); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_YawOffset); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_RollOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::LensFlare__GetLensFlareOffsets(Z_Param_PlayerController,Z_Param_LightSource,Z_Param_Out_PitchOffset,Z_Param_Out_YawOffset,Z_Param_Out_RollOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStringConversion__GetFloatAsStringWithPrecision) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TheFloat); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_TheString); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Precision); \
		P_GET_UBOOL(Z_Param_IncludeLeadingZero); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::StringConversion__GetFloatAsStringWithPrecision(Z_Param_TheFloat,Z_Param_Out_TheString,Z_Param_Precision,Z_Param_IncludeLeadingZero); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTraces__CharacterMeshTrace___ClosestSocket) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(AActor,Z_Param_TraceOwner); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceEnd); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutImpactPoint); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutImpactNormal); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_ClosestSocketName); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SocketLocation); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UVictoryBPFunctionLibrary::Traces__CharacterMeshTrace___ClosestSocket(Z_Param_WorldContextObject,Z_Param_TraceOwner,Z_Param_Out_TraceStart,Z_Param_Out_TraceEnd,Z_Param_Out_OutImpactPoint,Z_Param_Out_OutImpactNormal,Z_Param_Out_ClosestSocketName,Z_Param_Out_SocketLocation,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTraces__CharacterMeshTrace___ClosestBone) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TraceOwner); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceEnd); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutImpactPoint); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutImpactNormal); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_ClosestBoneName); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ClosestBoneLocation); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UVictoryBPFunctionLibrary::Traces__CharacterMeshTrace___ClosestBone(Z_Param_TraceOwner,Z_Param_Out_TraceStart,Z_Param_Out_TraceEnd,Z_Param_Out_OutImpactPoint,Z_Param_Out_OutImpactNormal,Z_Param_Out_ClosestBoneName,Z_Param_Out_ClosestBoneLocation,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTraceData__GetTraceDataFromSkeletalMeshSocket) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceEnd); \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_TraceRotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TraceLength); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Socket); \
		P_GET_UBOOL(Z_Param_DrawTraceData); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceDataColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TraceDataThickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::TraceData__GetTraceDataFromSkeletalMeshSocket(Z_Param_Out_TraceStart,Z_Param_Out_TraceEnd,Z_Param_Mesh,Z_Param_Out_TraceRotation,Z_Param_TraceLength,Z_Param_Socket,Z_Param_DrawTraceData,Z_Param_TraceDataColor,Z_Param_TraceDataThickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTraceData__GetTraceDataFromCharacterSocket) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceEnd); \
		P_GET_OBJECT(AActor,Z_Param_TheCharacter); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_TraceRotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TraceLength); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Socket); \
		P_GET_UBOOL(Z_Param_DrawTraceData); \
		P_GET_STRUCT(FLinearColor,Z_Param_TraceDataColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TraceDataThickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::TraceData__GetTraceDataFromCharacterSocket(Z_Param_Out_TraceStart,Z_Param_Out_TraceEnd,Z_Param_TheCharacter,Z_Param_Out_TraceRotation,Z_Param_TraceLength,Z_Param_Socket,Z_Param_DrawTraceData,Z_Param_TraceDataColor,Z_Param_TraceDataThickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllBoneNamesBelowBone) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComp); \
		P_GET_PROPERTY(UNameProperty,Z_Param_StartingBoneName); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_BoneNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UVictoryBPFunctionLibrary::GetAllBoneNamesBelowBone(Z_Param_SkeletalMeshComp,Z_Param_StartingBoneName,Z_Param_Out_BoneNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAccessor__GetCharacterSkeletalMesh) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TheCharacter); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshComponent**)Z_Param__Result=UVictoryBPFunctionLibrary::Accessor__GetCharacterSkeletalMesh(Z_Param_TheCharacter,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execData__GetCharacterBoneLocations) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TheCharacter); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_BoneLocations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Data__GetCharacterBoneLocations(Z_Param_TheCharacter,Z_Param_Out_BoneLocations); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalcs__ClosestPointToSourcePoint) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Source); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OtherPoints); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ClosestPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::Calcs__ClosestPointToSourcePoint(Z_Param_Out_Source,Z_Param_Out_OtherPoints,Z_Param_Out_ClosestPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRendering__UnFreezeGameRendering) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Rendering__UnFreezeGameRendering(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRendering__FreezeGameRendering) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Rendering__FreezeGameRendering(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlashGameOnTaskBar) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PC); \
		P_GET_UBOOL(Z_Param_FlashContinuous); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxFlashCount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FlashFrequencyMilliseconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::FlashGameOnTaskBar(Z_Param_PC,Z_Param_FlashContinuous,Z_Param_MaxFlashCount,Z_Param_FlashFrequencyMilliseconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientWindow__GameWindowIsForeGroundInOS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::ClientWindow__GameWindowIsForeGroundInOS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVisibility__GetNotRenderedActors) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_CurrentlyNotRenderedActors); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinRecentTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Visibility__GetNotRenderedActors(Z_Param_WorldContextObject,Z_Param_Out_CurrentlyNotRenderedActors,Z_Param_MinRecentTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVisibility__GetRenderedActors) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_CurrentlyRenderedActors); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinRecentTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Visibility__GetRenderedActors(Z_Param_WorldContextObject,Z_Param_Out_CurrentlyRenderedActors,Z_Param_MinRecentTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileIO__SaveStringArrayToFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveDirectory); \
		P_GET_PROPERTY(UStrProperty,Z_Param_JoyfulFileName); \
		P_GET_TARRAY(FString,Z_Param_SaveText); \
		P_GET_UBOOL(Z_Param_AllowOverWriting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::FileIO__SaveStringArrayToFile(Z_Param_SaveDirectory,Z_Param_JoyfulFileName,Z_Param_SaveText,Z_Param_AllowOverWriting); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileIO__SaveStringTextToFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveDirectory); \
		P_GET_PROPERTY(UStrProperty,Z_Param_JoyfulFileName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveText); \
		P_GET_UBOOL(Z_Param_AllowOverWriting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::FileIO__SaveStringTextToFile(Z_Param_SaveDirectory,Z_Param_JoyfulFileName,Z_Param_SaveText,Z_Param_AllowOverWriting); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnimation__GetAimOffsetsFromRotation) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_AnimBPOwner); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_TheRotation); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Pitch); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Yaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Animation__GetAimOffsetsFromRotation(Z_Param_AnimBPOwner,Z_Param_Out_TheRotation,Z_Param_Out_Pitch,Z_Param_Out_Yaw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnimation__GetAimOffsets) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_AnimBPOwner); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Pitch); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Yaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Animation__GetAimOffsets(Z_Param_AnimBPOwner,Z_Param_Out_Pitch,Z_Param_Out_Yaw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDraw__Thick3DLineBetweenActors) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_StartActor); \
		P_GET_OBJECT(AActor,Z_Param_EndActor); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Draw__Thick3DLineBetweenActors(Z_Param_StartActor,Z_Param_EndActor,Z_Param_LineColor,Z_Param_Thickness,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDraw__Thick3DLineFromSocket) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EndPoint); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Socket); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Draw__Thick3DLineFromSocket(Z_Param_Mesh,Z_Param_Out_EndPoint,Z_Param_Socket,Z_Param_LineColor,Z_Param_Thickness,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDraw__Thick3DLineFromCharacterSocket) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TheCharacter); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EndPoint); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Socket); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Draw__Thick3DLineFromCharacterSocket(Z_Param_TheCharacter,Z_Param_Out_EndPoint,Z_Param_Socket,Z_Param_LineColor,Z_Param_Thickness,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCharacter__GetControllerRotation) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TheCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UVictoryBPFunctionLibrary::Character__GetControllerRotation(Z_Param_TheCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConversions__RotatorToVector) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_TheRotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UVictoryBPFunctionLibrary::Conversions__RotatorToVector(Z_Param_Out_TheRotator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConversions__VectorToRotator) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TheVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UVictoryBPFunctionLibrary::Conversions__VectorToRotator(Z_Param_Out_TheVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewport__GetCenterOfViewport) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_ThePC); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PosX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PosY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Viewport__GetCenterOfViewport(Z_Param_ThePC,Z_Param_Out_PosX,Z_Param_Out_PosY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewport__GetMousePosition) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_ThePC); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PosX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PosY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Viewport__GetMousePosition(Z_Param_ThePC,Z_Param_Out_PosX,Z_Param_Out_PosY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewport__SetMousePosition) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_ThePC); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PosX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PosY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Viewport__SetMousePosition(Z_Param_ThePC,Z_Param_Out_PosX,Z_Param_Out_PosY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewport__EnableWorldRendering) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_ThePC); \
		P_GET_UBOOL(Z_Param_RenderTheWorld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Viewport__EnableWorldRendering(Z_Param_ThePC,Z_Param_RenderTheWorld); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySimulateKeyPress) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_ThePC); \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EventType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictorySimulateKeyPress(Z_Param_ThePC,Z_Param_Key,EInputEvent(Z_Param_EventType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySimulateMouseWheel) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictorySimulateMouseWheel(Z_Param_Out_Delta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAccessor__GetPlayerController) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TheCharacter); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerController**)Z_Param__Result=UVictoryBPFunctionLibrary::Accessor__GetPlayerController(Z_Param_TheCharacter,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAccessor__GetNameAsString) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_TheObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::Accessor__GetNameAsString(Z_Param_TheObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesMaterialHaveParameter) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Mat); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Parameter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::DoesMaterialHaveParameter(Z_Param_Mat,Z_Param_Parameter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPhysics__UpdateCharacterCameraToRagdollLocation) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TheCharacter); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HeightOffset); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InterpSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Physics__UpdateCharacterCameraToRagdollLocation(Z_Param_TheCharacter,Z_Param_HeightOffset,Z_Param_InterpSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPhysics__InitializeVictoryRagDoll) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TheCharacter); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InitLocation); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InitRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Physics__InitializeVictoryRagDoll(Z_Param_TheCharacter,Z_Param_Out_InitLocation,Z_Param_Out_InitRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPhysics__GetLocationofRagDoll) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TheCharacter); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RagdollLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Physics__GetLocationofRagDoll(Z_Param_TheCharacter,Z_Param_Out_RagdollLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPhysics__IsRagDoll) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TheCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Physics__IsRagDoll(Z_Param_TheCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPhysics__LeaveRagDoll) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TheCharacter); \
		P_GET_UBOOL(Z_Param_SetToFallingMovementMode); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HeightAboveRBMesh); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InitLocation); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InitRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Physics__LeaveRagDoll(Z_Param_TheCharacter,Z_Param_SetToFallingMovementMode,Z_Param_HeightAboveRBMesh,Z_Param_Out_InitLocation,Z_Param_Out_InitRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPhysics__EnterRagDoll) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TheCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Physics__EnterRagDoll(Z_Param_TheCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWorldType__InGameInstanceWorld) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::WorldType__InGameInstanceWorld(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWorldType__InPIEWorld) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::WorldType__InPIEWorld(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWorldType__InEditorWorld) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::WorldType__InEditorWorld(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActor__TeleportToActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToTeleport); \
		P_GET_OBJECT(AActor,Z_Param_DestinationActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Actor__TeleportToActor(Z_Param_ActorToTeleport,Z_Param_DestinationActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClone__StaticMeshActor) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_GET_OBJECT(AStaticMeshActor,Z_Param_ToClone); \
		P_GET_STRUCT(FVector,Z_Param_LocationOffset); \
		P_GET_STRUCT(FRotator,Z_Param_RotationOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AStaticMeshActor**)Z_Param__Result=UVictoryBPFunctionLibrary::Clone__StaticMeshActor(Z_Param_WorldContextObject,Z_Param_Out_IsValid,Z_Param_ToClone,Z_Param_LocationOffset,Z_Param_RotationOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserDisplayAdapterBrand) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_IsAMD); \
		P_GET_UBOOL_REF(Z_Param_Out_IsNvidia); \
		P_GET_UBOOL_REF(Z_Param_Out_IsIntel); \
		P_GET_UBOOL_REF(Z_Param_Out_IsUnknown); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_UnknownId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::GetUserDisplayAdapterBrand(Z_Param_Out_IsAMD,Z_Param_Out_IsNvidia,Z_Param_Out_IsIntel,Z_Param_Out_IsUnknown,Z_Param_Out_UnknownId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOptionsMenu__GetDisplayAdapterScreenResolutions) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Widths); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Heights); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_RefreshRates); \
		P_GET_UBOOL(Z_Param_IncludeRefreshRates); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::OptionsMenu__GetDisplayAdapterScreenResolutions(Z_Param_Out_Widths,Z_Param_Out_Heights,Z_Param_Out_RefreshRates,Z_Param_IncludeRefreshRates); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString__CombineStrings_Multi) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::String__CombineStrings_Multi(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString__CombineStrings) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_StringFirst); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StringSecond); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Separator); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StringFirstLabel); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StringSecondLabel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::String__CombineStrings(Z_Param_StringFirst,Z_Param_StringSecond,Z_Param_Separator,Z_Param_StringFirstLabel,Z_Param_StringSecondLabel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasSubstring) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SearchIn); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Substring); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SearchCase); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SearchDir); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::HasSubstring(Z_Param_SearchIn,Z_Param_Substring,ESearchCase::Type(Z_Param_SearchCase),ESearchDir::Type(Z_Param_SearchDir)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_SaveStringToOSClipboard) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ToClipboard); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Victory_SaveStringToOSClipboard(Z_Param_ToClipboard); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_GetStringFromOSClipboard) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_FromClipboard); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Victory_GetStringFromOSClipboard(Z_Param_Out_FromClipboard); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAlphaNumeric) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_String); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::IsAlphaNumeric(Z_Param_String); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_SecondsToHoursMinutesSeconds) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Seconds); \
		P_GET_UBOOL(Z_Param_TrimZeroes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_SecondsToHoursMinutesSeconds(Z_Param_Seconds,Z_Param_TrimZeroes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryAppendInline) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_String); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ToAppend); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Result); \
		P_GET_UBOOL(Z_Param_AppendNewline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictoryAppendInline(Z_Param_Out_String,Z_Param_ToAppend,Z_Param_Out_Result,Z_Param_AppendNewline); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCountOccurrancesOfSubString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Source); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SubString); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SearchCase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UVictoryBPFunctionLibrary::CountOccurrancesOfSubString(Z_Param_Source,Z_Param_SubString,ESearchCase::Type(Z_Param_SearchCase)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConversion__FloatToRoundedInteger) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_IN_Float); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UVictoryBPFunctionLibrary::Conversion__FloatToRoundedInteger(Z_Param_IN_Float); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCharacterMovement__SetMaxMoveSpeed) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_TheCharacter); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMaxMoveSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::CharacterMovement__SetMaxMoveSpeed(Z_Param_TheCharacter,Z_Param_NewMaxMoveSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMinOfIntArray) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_IntArray); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IndexOfMinValue); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_MinValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::MinOfIntArray(Z_Param_Out_IntArray,Z_Param_Out_IndexOfMinValue,Z_Param_Out_MinValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMinOfFloatArray) \
	{ \
		P_GET_TARRAY_REF(float,Z_Param_Out_FloatArray); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IndexOfMinValue); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MinValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::MinOfFloatArray(Z_Param_Out_FloatArray,Z_Param_Out_IndexOfMinValue,Z_Param_Out_MinValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMaxOfIntArray) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_IntArray); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IndexOfMaxValue); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_MaxValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::MaxOfIntArray(Z_Param_Out_IntArray,Z_Param_Out_IndexOfMaxValue,Z_Param_Out_MaxValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMaxOfFloatArray) \
	{ \
		P_GET_TARRAY_REF(float,Z_Param_Out_FloatArray); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IndexOfMaxValue); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MaxValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::MaxOfFloatArray(Z_Param_Out_FloatArray,Z_Param_Out_IndexOfMaxValue,Z_Param_Out_MaxValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadStringFromFile) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Result); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::LoadStringFromFile(Z_Param_Out_Result,Z_Param_FullFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadStringArrayFromFile) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_StringArray); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_ArraySize); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullFilePath); \
		P_GET_UBOOL(Z_Param_ExcludeEmptyLines); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::LoadStringArrayFromFile(Z_Param_Out_StringArray,Z_Param_Out_ArraySize,Z_Param_FullFilePath,Z_Param_ExcludeEmptyLines); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRealWorldTime__GetDifferenceBetweenTimes) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PreviousTime1); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PreviousTime2); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Milliseconds); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Seconds); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Minutes); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Hours); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::RealWorldTime__GetDifferenceBetweenTimes(Z_Param_PreviousTime1,Z_Param_PreviousTime2,Z_Param_Out_Milliseconds,Z_Param_Out_Seconds,Z_Param_Out_Minutes,Z_Param_Out_Hours); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRealWorldTime__GetTimePassedSincePreviousTime) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PreviousTime); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Milliseconds); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Seconds); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Minutes); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Hours); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::RealWorldTime__GetTimePassedSincePreviousTime(Z_Param_PreviousTime,Z_Param_Out_Milliseconds,Z_Param_Out_Seconds,Z_Param_Out_Minutes,Z_Param_Out_Hours); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRealWorldTime__GetCurrentOSTime) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_MilliSeconds); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Seconds); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Minutes); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Hours12); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Hours24); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Day); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Month); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Year); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::RealWorldTime__GetCurrentOSTime(Z_Param_Out_MilliSeconds,Z_Param_Out_Seconds,Z_Param_Out_Minutes,Z_Param_Out_Hours12,Z_Param_Out_Hours24,Z_Param_Out_Day,Z_Param_Out_Month,Z_Param_Out_Year); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOperatingSystem__GetCurrentPlatform) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_Windows_); \
		P_GET_UBOOL_REF(Z_Param_Out_Mac); \
		P_GET_UBOOL_REF(Z_Param_Out_Linux); \
		P_GET_UBOOL_REF(Z_Param_Out_iOS); \
		P_GET_UBOOL_REF(Z_Param_Out_Android); \
		P_GET_UBOOL_REF(Z_Param_Out_Android_ARM); \
		P_GET_UBOOL_REF(Z_Param_Out_Android_Vulkan); \
		P_GET_UBOOL_REF(Z_Param_Out_PS4); \
		P_GET_UBOOL_REF(Z_Param_Out_XBoxOne); \
		P_GET_UBOOL_REF(Z_Param_Out_HTML5); \
		P_GET_UBOOL_REF(Z_Param_Out_Apple); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::OperatingSystem__GetCurrentPlatform(Z_Param_Out_Windows_,Z_Param_Out_Mac,Z_Param_Out_Linux,Z_Param_Out_iOS,Z_Param_Out_Android,Z_Param_Out_Android_ARM,Z_Param_Out_Android_Vulkan,Z_Param_Out_PS4,Z_Param_Out_XBoxOne,Z_Param_Out_HTML5,Z_Param_Out_Apple); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpen_URL_In_Web_Browser) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TheURL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Open_URL_In_Web_Browser(Z_Param_TheURL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsStandAlone) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::IsStandAlone(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayerState_GetPlayerID) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_ThePC); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_PlayerID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::PlayerState_GetPlayerID(Z_Param_ThePC,Z_Param_Out_PlayerID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayerController_GetControllerID) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_ThePC); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_ControllerID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::PlayerController_GetControllerID(Z_Param_ThePC,Z_Param_Out_ControllerID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelection_SelectionBox) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_SelectedActors); \
		P_GET_STRUCT(FVector2D,Z_Param_AnchorPoint); \
		P_GET_STRUCT(FVector2D,Z_Param_DraggedPoint); \
		P_GET_OBJECT(UClass,Z_Param_ClassFilter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Selection_SelectionBox(Z_Param_WorldContextObject,Z_Param_Out_SelectedActors,Z_Param_AnchorPoint,Z_Param_DraggedPoint,Z_Param_ClassFilter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoxContainingWorldPoints) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Center); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Extent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::GetBoxContainingWorldPoints(Z_Param_Out_Points,Z_Param_Out_Center,Z_Param_Out_Extent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestActorOfClassInRadiusOfActor) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_GET_OBJECT(AActor,Z_Param_ActorCenter); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UVictoryBPFunctionLibrary::GetClosestActorOfClassInRadiusOfActor(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_ActorCenter,Z_Param_Radius,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestActorOfClassInRadiusOfLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_GET_STRUCT(FVector,Z_Param_Center); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UVictoryBPFunctionLibrary::GetClosestActorOfClassInRadiusOfLocation(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Center,Z_Param_Radius,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawCircle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Center); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumPoints); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_GET_STRUCT(FLinearColor,Z_Param_LineColor); \
		P_GET_STRUCT(FVector,Z_Param_YAxis); \
		P_GET_STRUCT(FVector,Z_Param_ZAxis); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_UBOOL(Z_Param_PersistentLines); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::DrawCircle(Z_Param_WorldContextObject,Z_Param_Center,Z_Param_Radius,Z_Param_NumPoints,Z_Param_Thickness,Z_Param_LineColor,Z_Param_YAxis,Z_Param_ZAxis,Z_Param_Duration,Z_Param_PersistentLines); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToActorRotation) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TheActor); \
		P_GET_STRUCT(FRotator,Z_Param_AddRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::AddToActorRotation(Z_Param_TheActor,Z_Param_AddRot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStaticMeshVertexLocations) \
	{ \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_Comp); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_VertexPositions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::GetStaticMeshVertexLocations(Z_Param_Comp,Z_Param_Out_VertexPositions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNamesOfLoadedLevels) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_NamesOfLoadedLevels); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::GetNamesOfLoadedLevels(Z_Param_WorldContextObject,Z_Param_Out_NamesOfLoadedLevels); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnActorIntoLevel) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Level); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_UBOOL(Z_Param_SpawnEvenIfColliding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UVictoryBPFunctionLibrary::SpawnActorIntoLevel(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Level,Z_Param_Location,Z_Param_Rotation,Z_Param_SpawnEvenIfColliding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreatePrimitiveComponent) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_CompClass); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPrimitiveComponent**)Z_Param__Result=UVictoryBPFunctionLibrary::CreatePrimitiveComponent(Z_Param_WorldContextObject,Z_Param_CompClass,Z_Param_Name,Z_Param_Location,Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_TheObjectClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UVictoryBPFunctionLibrary::CreateObject(Z_Param_WorldContextObject,Z_Param_TheObjectClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectWorldToScreenPosition) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UVictoryBPFunctionLibrary::ProjectWorldToScreenPosition(Z_Param_Out_WorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGraphicsSettings__SetFrameRateToBeUnbound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::GraphicsSettings__SetFrameRateToBeUnbound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGraphicsSettings__SetFrameRateCap) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::GraphicsSettings__SetFrameRateCap(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoops_ResetBPRunawayCounter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Loops_ResetBPRunawayCounter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerUniqueNetID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UVictoryBPFunctionLibrary::GetPlayerUniqueNetID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoyIsKey) \
	{ \
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_KeyEvent); \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_GET_UBOOL_REF(Z_Param_Out_Ctrl); \
		P_GET_UBOOL_REF(Z_Param_Out_Shift); \
		P_GET_UBOOL_REF(Z_Param_Out_Alt); \
		P_GET_UBOOL_REF(Z_Param_Out_Cmd); \
		P_GET_UBOOL_REF(Z_Param_Out_Match); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::JoyIsKey(Z_Param_Out_KeyEvent,Z_Param_Key,Z_Param_Out_Ctrl,Z_Param_Out_Shift,Z_Param_Out_Alt,Z_Param_Out_Cmd,Z_Param_Out_Match); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWidgetOfClassInViewport) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_WidgetClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::IsWidgetOfClassInViewport(Z_Param_WorldContextObject,Z_Param_WidgetClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllWidgetsOfClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_WidgetClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::RemoveAllWidgetsOfClass(Z_Param_WorldContextObject,Z_Param_WidgetClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllWidgetsOfClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_WidgetClass); \
		P_GET_TARRAY_REF(UUserWidget*,Z_Param_Out_FoundWidgets); \
		P_GET_UBOOL(Z_Param_TopLevelOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::GetAllWidgetsOfClass(Z_Param_WorldContextObject,Z_Param_WidgetClass,Z_Param_Out_FoundWidgets,Z_Param_TopLevelOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetObjectPath) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UVictoryBPFunctionLibrary::GetObjectPath(Z_Param_Obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadObjectFromAssetPath) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ObjectClass); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Path); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UVictoryBPFunctionLibrary::LoadObjectFromAssetPath(Z_Param_ObjectClass,Z_Param_Path,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeadMountedDisplayDeviceType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UVictoryBPFunctionLibrary::GetHeadMountedDisplayDeviceType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformVectorToActorSpace) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->TransformVectorToActorSpace(Z_Param_Actor,Z_Param_Out_InVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformVectorToActorSpaceAngle) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->TransformVectorToActorSpaceAngle(Z_Param_Actor,Z_Param_Out_InVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_String) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_String(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Color) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_STRUCT(FLinearColor,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Color(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Rotator) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_STRUCT(FRotator,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Rotator(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Vector) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Vector(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Float) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Float(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Int) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Int(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Bool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Bool(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Vector2D) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_STRUCT(FVector2D,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Vector2D(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Vector2D) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Vector2D(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_String) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_String(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Color) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Color(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Rotator) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Rotator(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Vector) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Vector(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Float) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Float(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Int) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Int(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Bool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Bool(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConversions__ColorToString) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ColorAsString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Conversions__ColorToString(Z_Param_Out_Color,Z_Param_Out_ColorAsString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConversions__StringToColor) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_String); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_ConvertedColor); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Conversions__StringToColor(Z_Param_String,Z_Param_Out_ConvertedColor,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConversions__StringToRotator) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_String); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_ConvertedRotator); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Conversions__StringToRotator(Z_Param_String,Z_Param_Out_ConvertedRotator,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConversions__StringToVector) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_String); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ConvertedVector); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Conversions__StringToVector(Z_Param_String,Z_Param_Out_ConvertedVector,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerStart) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerStartName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerStart**)Z_Param__Result=UVictoryBPFunctionLibrary::GetPlayerStart(Z_Param_WorldContextObject,Z_Param_PlayerStartName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerTravel) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MapName); \
		P_GET_UBOOL(Z_Param_bNotifyPlayers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::ServerTravel(Z_Param_WorldContextObject,Z_Param_MapName,Z_Param_bNotifyPlayers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMapRangeClamped) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InRangeA); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InRangeB); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OutRangeA); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OutRangeB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::MapRangeClamped(Z_Param_Value,Z_Param_InRangeA,Z_Param_InRangeB,Z_Param_OutRangeA,Z_Param_OutRangeB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execText_ToInt) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Text); \
		P_GET_UBOOL(Z_Param_UseDotForThousands); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UVictoryBPFunctionLibrary::Text_ToInt(Z_Param_Out_Text,Z_Param_UseDotForThousands); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execText_ToFloat) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Text); \
		P_GET_UBOOL(Z_Param_UseDotForThousands); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::Text_ToFloat(Z_Param_Out_Text,Z_Param_UseDotForThousands); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execText_IsNumeric) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Text); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Text_IsNumeric(Z_Param_Out_Text); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2DInterpTo_Constant) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Current); \
		P_GET_STRUCT(FVector2D,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InterpSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UVictoryBPFunctionLibrary::Vector2DInterpTo_Constant(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2DInterpTo) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Current); \
		P_GET_STRUCT(FVector2D,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InterpSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UVictoryBPFunctionLibrary::Vector2DInterpTo(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_InterpSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_Vector2DVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::NotEqual_Vector2DVector2D(Z_Param_A,Z_Param_B,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_Vector2DVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_GET_STRUCT(FVector2D,Z_Param_B); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ErrorTolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::EqualEqual_Vector2DVector2D(Z_Param_A,Z_Param_B,Z_Param_ErrorTolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySortFloatArray) \
	{ \
		P_GET_TARRAY_REF(float,Z_Param_Out_FloatArray); \
		P_GET_TARRAY_REF(float,Z_Param_Out_FloatArrayRef); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictorySortFloatArray(Z_Param_Out_FloatArray,Z_Param_Out_FloatArrayRef); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySortIntArray) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_IntArray); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_IntArrayRef); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictorySortIntArray(Z_Param_Out_IntArray,Z_Param_Out_IntArrayRef); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryFloatMinusEquals) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Float); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Sub); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FloatOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictoryFloatMinusEquals(Z_Param_Out_Float,Z_Param_Sub,Z_Param_Out_FloatOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryFloatPlusEquals) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Float); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Add); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FloatOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictoryFloatPlusEquals(Z_Param_Out_Float,Z_Param_Add,Z_Param_Out_FloatOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryIntMinusEquals) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Int); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Sub); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IntOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictoryIntMinusEquals(Z_Param_Out_Int,Z_Param_Sub,Z_Param_Out_IntOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryIntPlusEquals) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Int); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Add); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IntOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictoryIntPlusEquals(Z_Param_Out_Int,Z_Param_Add,Z_Param_Out_IntOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPointOnPlane) \
	{ \
		P_GET_STRUCT_REF(FPlane,Z_Param_Out_Plane); \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tolerance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::IsPointOnPlane(Z_Param_Out_Plane,Z_Param_Point,Z_Param_Tolerance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointDistanceToPlane) \
	{ \
		P_GET_STRUCT_REF(FPlane,Z_Param_Out_Plane); \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Distance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::PointDistanceToPlane(Z_Param_Out_Plane,Z_Param_Point,Z_Param_Out_Distance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreatePlane) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Center); \
		P_GET_STRUCT(FVector,Z_Param_Normal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPlane*)Z_Param__Result=UVictoryBPFunctionLibrary::CreatePlane(Z_Param_Center,Z_Param_Normal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeInPlay) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::GetTimeInPlay(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetSoundVolume) \
	{ \
		P_GET_OBJECT(USoundClass,Z_Param_SoundClassObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetSoundVolume(Z_Param_SoundClassObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictorySoundVolumeChange) \
	{ \
		P_GET_OBJECT(USoundClass,Z_Param_SoundClassObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVolume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::VictorySoundVolumeChange(Z_Param_SoundClassObject,Z_Param_NewVolume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryRemoveActionKeyBind) \
	{ \
		P_GET_STRUCT(FVictoryInput,Z_Param_ToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictoryRemoveActionKeyBind(Z_Param_ToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryReBindActionKey) \
	{ \
		P_GET_STRUCT(FVictoryInput,Z_Param_Original); \
		P_GET_STRUCT(FVictoryInput,Z_Param_NewBinding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryReBindActionKey(Z_Param_Original,Z_Param_NewBinding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetAllActionKeyBindings) \
	{ \
		P_GET_TARRAY_REF(FVictoryInput,Z_Param_Out_Bindings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictoryGetAllActionKeyBindings(Z_Param_Out_Bindings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetVictoryInput) \
	{ \
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_KeyEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVictoryInput*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetVictoryInput(Z_Param_Out_KeyEvent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryReBindAxisKey) \
	{ \
		P_GET_STRUCT(FVictoryInputAxis,Z_Param_Original); \
		P_GET_STRUCT(FVictoryInputAxis,Z_Param_NewBinding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryReBindAxisKey(Z_Param_Original,Z_Param_NewBinding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryRemoveAxisKeyBind) \
	{ \
		P_GET_STRUCT(FVictoryInputAxis,Z_Param_ToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictoryRemoveAxisKeyBind(Z_Param_ToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetAllAxisKeyBindings) \
	{ \
		P_GET_TARRAY_REF(FVictoryInputAxis,Z_Param_Out_Bindings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictoryGetAllAxisKeyBindings(Z_Param_Out_Bindings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetVictoryInputAxis) \
	{ \
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_KeyEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVictoryInputAxis*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetVictoryInputAxis(Z_Param_Out_KeyEvent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetAllAxisAndActionMappingsForKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_GET_TARRAY_REF(FVictoryInput,Z_Param_Out_ActionBindings); \
		P_GET_TARRAY_REF(FVictoryInputAxis,Z_Param_Out_AxisBindings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictoryGetAllAxisAndActionMappingsForKey(Z_Param_Key,Z_Param_Out_ActionBindings,Z_Param_Out_AxisBindings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScreenShots_Rename_Move_Most_Recent) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OriginalFileName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewAbsoluteFolderPath); \
		P_GET_UBOOL(Z_Param_HighResolution); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::ScreenShots_Rename_Move_Most_Recent(Z_Param_Out_OriginalFileName,Z_Param_NewName,Z_Param_NewAbsoluteFolderPath,Z_Param_HighResolution); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGameObject_GetAllSaveSlotFileNames) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_FileNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::SaveGameObject_GetAllSaveSlotFileNames(Z_Param_Out_FileNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoyFileIO_GetFilesInRootAndAllSubFolders) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Files); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RootFolderFullPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Ext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::JoyFileIO_GetFilesInRootAndAllSubFolders(Z_Param_Out_Files,Z_Param_RootFolderFullPath,Z_Param_Ext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoyFileIO_GetFiles) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Files); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RootFolderFullPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Ext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::JoyFileIO_GetFiles(Z_Param_Out_Files,Z_Param_RootFolderFullPath,Z_Param_Ext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryISM_ConvertToVictoryISMActors) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_GET_TARRAY_REF(AVictoryISM*,Z_Param_Out_CreatedISMActors); \
		P_GET_UBOOL(Z_Param_DestroyOriginalActors); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinCountToCreateISM); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictoryISM_ConvertToVictoryISMActors(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Out_CreatedISMActors,Z_Param_DestroyOriginalActors,Z_Param_MinCountToCreateISM); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryISM_GetAllVictoryISMActors) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(AVictoryISM*,Z_Param_Out_Out); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictoryISM_GetAllVictoryISMActors(Z_Param_WorldContextObject,Z_Param_Out_Out); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryDestructible_DestroyChunk) \
	{ \
		P_GET_OBJECT(UDestructibleComponent,Z_Param_DestructibleComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_HitItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryDestructible_DestroyChunk(Z_Param_DestructibleComp,Z_Param_HitItem); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDistanceBetweenComponentSurfaces) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_CollisionComponent1); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_CollisionComponent2); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PointOnSurface1); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PointOnSurface2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::GetDistanceBetweenComponentSurfaces(Z_Param_CollisionComponent1,Z_Param_CollisionComponent2,Z_Param_Out_PointOnSurface1,Z_Param_Out_PointOnSurface2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDistanceToCollision) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_CollisionComponent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ClosestPointOnCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::GetDistanceToCollision(Z_Param_CollisionComponent,Z_Param_Out_Point,Z_Param_Out_ClosestPointOnCollision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryPhysics_UpdateAngularDamping) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_CompToUpdate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewAngularDamping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryPhysics_UpdateAngularDamping(Z_Param_CompToUpdate,Z_Param_NewAngularDamping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTextureRenderTarget2D) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_GET_STRUCT(FLinearColor,Z_Param_ClearColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Gamma); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTextureRenderTarget2D**)Z_Param__Result=UVictoryBPFunctionLibrary::CreateTextureRenderTarget2D(Z_Param_Width,Z_Param_Height,Z_Param_ClearColor,Z_Param_Gamma); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCommandLine) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::GetCommandLine(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetComponentTickRate) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_Component); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Seconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::SetComponentTickRate(Z_Param_Component,Z_Param_Seconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompareMD5Hash) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MD5HashFile1); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MD5HashFile2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::CompareMD5Hash(Z_Param_MD5HashFile1,Z_Param_MD5HashFile2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateMD5Hash) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileToHash); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileToStoreHashTo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::CreateMD5Hash(Z_Param_FileToHash,Z_Param_FileToStoreHashTo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUTCToLocal) \
	{ \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_UTCTime); \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_LocalTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::UTCToLocal(Z_Param_Out_UTCTime,Z_Param_Out_LocalTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUTCFromUnixTimeStamp) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_UnixTimeStamp); \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_UTCTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::GetUTCFromUnixTimeStamp(Z_Param_UnixTimeStamp,Z_Param_Out_UTCTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnixTimeStamp) \
	{ \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_UTCTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UVictoryBPFunctionLibrary::GetUnixTimeStamp(Z_Param_Out_UTCTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryIsApplicationRunning) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ProcessId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryIsApplicationRunning(Z_Param_ProcessId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryGetApplicationName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ProcessId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetApplicationName(Z_Param_ProcessId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryCreateProc) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_ProcessId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullPathOfProgramToRun); \
		P_GET_TARRAY(FString,Z_Param_CommandlineArgs); \
		P_GET_UBOOL(Z_Param_Detach); \
		P_GET_UBOOL(Z_Param_Hidden); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Priority); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OptionalWorkingDirectory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::VictoryCreateProc(Z_Param_Out_ProcessId,Z_Param_FullPathOfProgramToRun,Z_Param_CommandlineArgs,Z_Param_Detach,Z_Param_Hidden,Z_Param_Priority,Z_Param_OptionalWorkingDirectory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_GetGPUInfo) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_DeviceDescription); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Provider); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_DriverVersion); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_DriverDate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPFunctionLibrary::Victory_GetGPUInfo(Z_Param_Out_DeviceDescription,Z_Param_Out_Provider,Z_Param_Out_DriverVersion,Z_Param_Out_DriverDate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_GetGRHIAdapterName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_GetGRHIAdapterName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_GetGPUBrand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_GetGPUBrand(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictory_AI_MoveToWithFilter) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Dest); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AcceptanceRadius); \
		P_GET_UBOOL(Z_Param_bProjectDestinationToNavigation); \
		P_GET_UBOOL(Z_Param_bStopOnOverlap); \
		P_GET_UBOOL(Z_Param_bCanStrafe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EPathFollowingRequestResult::Type>*)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_AI_MoveToWithFilter(Z_Param_Pawn,Z_Param_Out_Dest,Z_Param_FilterClass,Z_Param_AcceptanceRadius,Z_Param_bProjectDestinationToNavigation,Z_Param_bStopOnOverlap,Z_Param_bCanStrafe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVictoryLoadLevelInstance) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MapFolderOffOfContent); \
		P_GET_PROPERTY(UStrProperty,Z_Param_LevelName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InstanceNumber); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULevelStreaming**)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryLoadLevelInstance(Z_Param_WorldContextObject,Z_Param_MapFolderOffOfContent,Z_Param_LevelName,Z_Param_InstanceNumber,Z_Param_Location,Z_Param_Rotation,Z_Param_Out_Success); \
		P_NATIVE_END; \
	}


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_230_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVictoryBPFunctionLibrary(); \
	friend VICTORYBPLIBRARY_API class UClass* Z_Construct_UClass_UVictoryBPFunctionLibrary(); \
public: \
	DECLARE_CLASS(UVictoryBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VictoryBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(UVictoryBPFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_230_INCLASS \
private: \
	static void StaticRegisterNativesUVictoryBPFunctionLibrary(); \
	friend VICTORYBPLIBRARY_API class UClass* Z_Construct_UClass_UVictoryBPFunctionLibrary(); \
public: \
	DECLARE_CLASS(UVictoryBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VictoryBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(UVictoryBPFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_230_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVictoryBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVictoryBPFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVictoryBPFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVictoryBPFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVictoryBPFunctionLibrary(UVictoryBPFunctionLibrary&&); \
	NO_API UVictoryBPFunctionLibrary(const UVictoryBPFunctionLibrary&); \
public:


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_230_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVictoryBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVictoryBPFunctionLibrary(UVictoryBPFunctionLibrary&&); \
	NO_API UVictoryBPFunctionLibrary(const UVictoryBPFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVictoryBPFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVictoryBPFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVictoryBPFunctionLibrary)


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_230_PRIVATE_PROPERTY_OFFSET
#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_227_PROLOG
#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_230_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_230_PRIVATE_PROPERTY_OFFSET \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_230_RPC_WRAPPERS \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_230_INCLASS \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_230_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_230_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_230_PRIVATE_PROPERTY_OFFSET \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_230_RPC_WRAPPERS_NO_PURE_DECLS \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_230_INCLASS_NO_PURE_DECLS \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_230_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VictoryBPFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h


#define FOREACH_ENUM_EJOYGRAPHICSFULLSCREEN(op) \
	op(EJoyGraphicsFullScreen::FullScreen) \
	op(EJoyGraphicsFullScreen::WindowedFullScreen) \
	op(EJoyGraphicsFullScreen::WindowedFullScreenPerformance) \
	op(EJoyGraphicsFullScreen::EJoyGraphicsFullScreen_Max) 
#define FOREACH_ENUM_EVICTORYHMDDEVICE(op) \
	op(EVictoryHMDDevice::None) \
	op(EVictoryHMDDevice::OculusRift) \
	op(EVictoryHMDDevice::Morpheus) \
	op(EVictoryHMDDevice::ES2GenericStereoMesh) \
	op(EVictoryHMDDevice::SteamVR) \
	op(EVictoryHMDDevice::GearVR) 
#define FOREACH_ENUM_EJOYIMAGEFORMATS(op) \
	op(EJoyImageFormats::JPG) \
	op(EJoyImageFormats::PNG) \
	op(EJoyImageFormats::BMP) \
	op(EJoyImageFormats::ICO) \
	op(EJoyImageFormats::EXR) \
	op(EJoyImageFormats::ICNS) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
