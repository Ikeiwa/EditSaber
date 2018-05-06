// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/VictoryBPLibraryPrivatePCH.h"
#include "Public/VictoryBPHTML.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVictoryBPHTML() {}
// Cross Module References
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_UVictoryBPHTML_NoRegister();
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_UVictoryBPHTML();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VictoryBPLibrary();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UVictoryBPHTML_IsHTML();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UVictoryBPHTML_VictoryHTML5_SetCursorVisible();
// End Cross Module References
	void UVictoryBPHTML::StaticRegisterNativesUVictoryBPHTML()
	{
		UClass* Class = UVictoryBPHTML::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsHTML", &UVictoryBPHTML::execIsHTML },
			{ "VictoryHTML5_SetCursorVisible", &UVictoryBPHTML::execVictoryHTML5_SetCursorVisible },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UVictoryBPHTML_IsHTML()
	{
		struct VictoryBPHTML_eventIsHTML_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VictoryBPHTML_eventIsHTML_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VictoryBPHTML_eventIsHTML_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|HTML5" },
				{ "ModuleRelativePath", "Public/VictoryBPHTML.h" },
				{ "ToolTip", "Is the current OS HTML5? This code will only run in games packaged for HTML5, it will not run in Editor builds :) Use this to customize particle FX for HTML5 vs PC builds! Or for any custom HTML5-specific game logic! <3 Rama" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPHTML, "IsHTML", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(VictoryBPHTML_eventIsHTML_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVictoryBPHTML_VictoryHTML5_SetCursorVisible()
	{
		struct VictoryBPHTML_eventVictoryHTML5_SetCursorVisible_Parms
		{
			bool MakeVisible;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_MakeVisible_SetBit = [](void* Obj){ ((VictoryBPHTML_eventVictoryHTML5_SetCursorVisible_Parms*)Obj)->MakeVisible = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MakeVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "MakeVisible", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VictoryBPHTML_eventVictoryHTML5_SetCursorVisible_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_MakeVisible_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MakeVisible,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|HTML5" },
				{ "ModuleRelativePath", "Public/VictoryBPHTML.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPHTML, "VictoryHTML5_SetCursorVisible", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VictoryBPHTML_eventVictoryHTML5_SetCursorVisible_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVictoryBPHTML_NoRegister()
	{
		return UVictoryBPHTML::StaticClass();
	}
	UClass* Z_Construct_UClass_UVictoryBPHTML()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_VictoryBPLibrary,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UVictoryBPHTML_IsHTML, "IsHTML" }, // 3457333964
				{ &Z_Construct_UFunction_UVictoryBPHTML_VictoryHTML5_SetCursorVisible, "VictoryHTML5_SetCursorVisible" }, // 465746147
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "VictoryBPHTML.h" },
				{ "ModuleRelativePath", "Public/VictoryBPHTML.h" },
				{ "ToolTip", "note about UBlueprintFunctionLibrary\n This class is a base class for any function libraries exposed to blueprints.\n Methods in subclasses are expected to be static, and no methods should be added to the base class." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVictoryBPHTML>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVictoryBPHTML::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVictoryBPHTML, 1275796064);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVictoryBPHTML(Z_Construct_UClass_UVictoryBPHTML, &UVictoryBPHTML::StaticClass, TEXT("/Script/VictoryBPLibrary"), TEXT("UVictoryBPHTML"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVictoryBPHTML);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
