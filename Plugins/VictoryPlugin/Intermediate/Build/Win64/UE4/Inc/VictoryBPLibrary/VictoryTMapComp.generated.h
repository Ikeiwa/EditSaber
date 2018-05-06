// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
class AActor;
#ifdef VICTORYBPLIBRARY_VictoryTMapComp_generated_h
#error "VictoryTMapComp.generated.h already included, missing '#pragma once' in VictoryTMapComp.h"
#endif
#define VICTORYBPLIBRARY_VictoryTMapComp_generated_h

#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryTMapComp_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInt_Float__Clear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Int_Float__Clear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInt_Vector__Clear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Int_Vector__Clear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Rotator__Clear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_Rotator__Clear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Vector__Clear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_Vector__Clear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Int__Clear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_Int__Clear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_String__Clear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_String__Clear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Actor__Clear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_Actor__Clear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInt_Float__Remove) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Key); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Int_Float__Remove(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInt_Vector__Remove) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Int_Vector__Remove(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Rotator__Remove) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_Rotator__Remove(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Vector__Remove) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_Vector__Remove(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Int__Remove) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_Int__Remove(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_String__Remove) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_String__Remove(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Actor__Remove) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_Actor__Remove(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInt_Float__Get) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Key); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Int_Float__Get(Z_Param_Key,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInt_Vector__Get) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Key); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->Int_Vector__Get(Z_Param_Key,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Rotator__Get) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->String_Rotator__Get(Z_Param_Key,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Vector__Get) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->String_Vector__Get(Z_Param_Key,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Int__Get) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->String_Int__Get(Z_Param_Key,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_String__Get) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->String_String__Get(Z_Param_Key,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Actor__Get) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->String_Actor__Get(Z_Param_Key,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInt_Float__AddPair) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Key); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Int_Float__AddPair(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInt_Vector__AddPair) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Key); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Int_Vector__AddPair(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Rotator__AddPair) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT(FRotator,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_Rotator__AddPair(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Vector__AddPair) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_Vector__AddPair(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Int__AddPair) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_Int__AddPair(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_String__AddPair) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_String__AddPair(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Actor__AddPair) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_OBJECT(AActor,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_Actor__AddPair(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	}


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryTMapComp_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInt_Float__Clear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Int_Float__Clear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInt_Vector__Clear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Int_Vector__Clear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Rotator__Clear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_Rotator__Clear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Vector__Clear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_Vector__Clear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Int__Clear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_Int__Clear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_String__Clear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_String__Clear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Actor__Clear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_Actor__Clear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInt_Float__Remove) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Key); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Int_Float__Remove(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInt_Vector__Remove) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Int_Vector__Remove(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Rotator__Remove) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_Rotator__Remove(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Vector__Remove) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_Vector__Remove(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Int__Remove) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_Int__Remove(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_String__Remove) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_String__Remove(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Actor__Remove) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_Actor__Remove(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInt_Float__Get) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Key); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Int_Float__Get(Z_Param_Key,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInt_Vector__Get) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Key); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->Int_Vector__Get(Z_Param_Key,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Rotator__Get) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->String_Rotator__Get(Z_Param_Key,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Vector__Get) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->String_Vector__Get(Z_Param_Key,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Int__Get) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->String_Int__Get(Z_Param_Key,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_String__Get) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->String_String__Get(Z_Param_Key,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Actor__Get) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->String_Actor__Get(Z_Param_Key,Z_Param_Out_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInt_Float__AddPair) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Key); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Int_Float__AddPair(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInt_Vector__AddPair) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Key); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Int_Vector__AddPair(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Rotator__AddPair) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT(FRotator,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_Rotator__AddPair(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Vector__AddPair) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_STRUCT(FVector,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_Vector__AddPair(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Int__AddPair) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_Int__AddPair(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_String__AddPair) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_String__AddPair(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execString_Actor__AddPair) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_OBJECT(AActor,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->String_Actor__AddPair(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	}


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryTMapComp_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVictoryTMapComp(); \
	friend VICTORYBPLIBRARY_API class UClass* Z_Construct_UClass_UVictoryTMapComp(); \
public: \
	DECLARE_CLASS(UVictoryTMapComp, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VictoryBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(UVictoryTMapComp) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryTMapComp_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUVictoryTMapComp(); \
	friend VICTORYBPLIBRARY_API class UClass* Z_Construct_UClass_UVictoryTMapComp(); \
public: \
	DECLARE_CLASS(UVictoryTMapComp, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VictoryBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(UVictoryTMapComp) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryTMapComp_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVictoryTMapComp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVictoryTMapComp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVictoryTMapComp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVictoryTMapComp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVictoryTMapComp(UVictoryTMapComp&&); \
	NO_API UVictoryTMapComp(const UVictoryTMapComp&); \
public:


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryTMapComp_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVictoryTMapComp(UVictoryTMapComp&&); \
	NO_API UVictoryTMapComp(const UVictoryTMapComp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVictoryTMapComp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVictoryTMapComp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVictoryTMapComp)


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryTMapComp_h_15_PRIVATE_PROPERTY_OFFSET
#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryTMapComp_h_12_PROLOG
#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryTMapComp_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryTMapComp_h_15_PRIVATE_PROPERTY_OFFSET \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryTMapComp_h_15_RPC_WRAPPERS \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryTMapComp_h_15_INCLASS \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryTMapComp_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryTMapComp_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryTMapComp_h_15_PRIVATE_PROPERTY_OFFSET \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryTMapComp_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryTMapComp_h_15_INCLASS_NO_PURE_DECLS \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryTMapComp_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryTMapComp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
