// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VICTORYBPLIBRARY_VictoryBPHTML_generated_h
#error "VictoryBPHTML.generated.h already included, missing '#pragma once' in VictoryBPHTML.h"
#endif
#define VICTORYBPLIBRARY_VictoryBPHTML_generated_h

#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execVictoryHTML5_SetCursorVisible) \
	{ \
		P_GET_UBOOL(Z_Param_MakeVisible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPHTML::VictoryHTML5_SetCursorVisible(Z_Param_MakeVisible); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHTML) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPHTML::IsHTML(); \
		P_NATIVE_END; \
	}


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execVictoryHTML5_SetCursorVisible) \
	{ \
		P_GET_UBOOL(Z_Param_MakeVisible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPHTML::VictoryHTML5_SetCursorVisible(Z_Param_MakeVisible); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHTML) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPHTML::IsHTML(); \
		P_NATIVE_END; \
	}


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVictoryBPHTML(); \
	friend VICTORYBPLIBRARY_API class UClass* Z_Construct_UClass_UVictoryBPHTML(); \
public: \
	DECLARE_CLASS(UVictoryBPHTML, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VictoryBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(UVictoryBPHTML) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUVictoryBPHTML(); \
	friend VICTORYBPLIBRARY_API class UClass* Z_Construct_UClass_UVictoryBPHTML(); \
public: \
	DECLARE_CLASS(UVictoryBPHTML, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VictoryBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(UVictoryBPHTML) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVictoryBPHTML(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVictoryBPHTML) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVictoryBPHTML); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVictoryBPHTML); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVictoryBPHTML(UVictoryBPHTML&&); \
	NO_API UVictoryBPHTML(const UVictoryBPHTML&); \
public:


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVictoryBPHTML(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVictoryBPHTML(UVictoryBPHTML&&); \
	NO_API UVictoryBPHTML(const UVictoryBPHTML&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVictoryBPHTML); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVictoryBPHTML); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVictoryBPHTML)


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_PRIVATE_PROPERTY_OFFSET
#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_20_PROLOG
#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_PRIVATE_PROPERTY_OFFSET \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_RPC_WRAPPERS \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_INCLASS \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_PRIVATE_PROPERTY_OFFSET \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_INCLASS_NO_PURE_DECLS \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPHTML_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
