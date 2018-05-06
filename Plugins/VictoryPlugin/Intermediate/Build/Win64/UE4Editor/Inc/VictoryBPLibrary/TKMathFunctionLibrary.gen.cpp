// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/VictoryBPLibraryPrivatePCH.h"
#include "Public/TKMathFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTKMathFunctionLibrary() {}
// Cross Module References
	VICTORYBPLIBRARY_API UEnum* Z_Construct_UEnum_VictoryBPLibrary_ESpeedUnit();
	UPackage* Z_Construct_UPackage__Script_VictoryBPLibrary();
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_UTKMathFunctionLibrary_NoRegister();
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_UTKMathFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnLineSeqment();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnchors();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableFloat();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableInt();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_GridSnap();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsEvenNumber();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsMultipleOf();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsPowerOfTwo();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_NegateFloat();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_NegateInt();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_NegateVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ProjectPointOnLine();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToNearestMultiple();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_SetVectorLength();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_SignedDistancePlanePoint();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_VectorDegreesToRadians();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_VectorRadiansToDegrees();
// End Cross Module References
	static UEnum* ESpeedUnit_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VictoryBPLibrary_ESpeedUnit, Z_Construct_UPackage__Script_VictoryBPLibrary(), TEXT("ESpeedUnit"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpeedUnit(ESpeedUnit_StaticEnum, TEXT("/Script/VictoryBPLibrary"), TEXT("ESpeedUnit"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VictoryBPLibrary_ESpeedUnit_CRC() { return 1730617336U; }
	UEnum* Z_Construct_UEnum_VictoryBPLibrary_ESpeedUnit()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VictoryBPLibrary();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpeedUnit"), 0, Get_Z_Construct_UEnum_VictoryBPLibrary_ESpeedUnit_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CentimeterPerSecond", (int64)CentimeterPerSecond },
				{ "FootPerSecond", (int64)FootPerSecond },
				{ "MeterPerSecond", (int64)MeterPerSecond },
				{ "MeterPerMinute", (int64)MeterPerMinute },
				{ "KilometerPerSecond", (int64)KilometerPerSecond },
				{ "KilometerPerMinute", (int64)KilometerPerMinute },
				{ "KilometerPerHour", (int64)KilometerPerHour },
				{ "MilePerHour", (int64)MilePerHour },
				{ "Knot", (int64)Knot },
				{ "Mach", (int64)Mach },
				{ "SpeedOfLight", (int64)SpeedOfLight },
				{ "YardPerSecond", (int64)YardPerSecond },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CentimeterPerSecond.ToolTip", "Centimeter / second (cm/s). This is default unreal velocity unit." },
				{ "FootPerSecond.ToolTip", "Foot / second (ft/s)." },
				{ "KilometerPerHour.ToolTip", "Kilometer / hour (km/h)." },
				{ "KilometerPerMinute.ToolTip", "Kilometer / minute (km/min)." },
				{ "KilometerPerSecond.ToolTip", "Kilometer / second (km/s)." },
				{ "Knot.ToolTip", "Knot (kn). Nautical mile per hour." },
				{ "Mach.ToolTip", "Mach (speed of sound) (M) at standard atm." },
				{ "MeterPerMinute.ToolTip", "Meter / minute (m/min)." },
				{ "MeterPerSecond.ToolTip", "Meter / second (m/s)." },
				{ "MilePerHour.ToolTip", "Mile / hour (mph)." },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "SpeedOfLight.ToolTip", "Speed of light." },
				{ "ToolTip", "Speed Units Enum." },
				{ "YardPerSecond.ToolTip", "Yard / second." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VictoryBPLibrary,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESpeedUnit",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ESpeedUnit",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UTKMathFunctionLibrary::StaticRegisterNativesUTKMathFunctionLibrary()
	{
		UClass* Class = UTKMathFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AreLineSegmentsCrossing", &UTKMathFunctionLibrary::execAreLineSegmentsCrossing },
			{ "ClosestPointOnLineSeqment", &UTKMathFunctionLibrary::execClosestPointOnLineSeqment },
			{ "ClosestPointOnSphereToLine", &UTKMathFunctionLibrary::execClosestPointOnSphereToLine },
			{ "ClosestPointsOfLineSegments", &UTKMathFunctionLibrary::execClosestPointsOfLineSegments },
			{ "ClosestPointsOnTwoLines", &UTKMathFunctionLibrary::execClosestPointsOnTwoLines },
			{ "ConvertAnchorToAnchor", &UTKMathFunctionLibrary::execConvertAnchorToAnchor },
			{ "ConvertPhysicsLinearVelocity", &UTKMathFunctionLibrary::execConvertPhysicsLinearVelocity },
			{ "GetConsoleVariableFloat", &UTKMathFunctionLibrary::execGetConsoleVariableFloat },
			{ "GetConsoleVariableInt", &UTKMathFunctionLibrary::execGetConsoleVariableInt },
			{ "GetVelocityAtPoint", &UTKMathFunctionLibrary::execGetVelocityAtPoint },
			{ "GridSnap", &UTKMathFunctionLibrary::execGridSnap },
			{ "IsEvenNumber", &UTKMathFunctionLibrary::execIsEvenNumber },
			{ "IsLineInsideSphere", &UTKMathFunctionLibrary::execIsLineInsideSphere },
			{ "IsMultipleOf", &UTKMathFunctionLibrary::execIsMultipleOf },
			{ "IsPointInsideBox", &UTKMathFunctionLibrary::execIsPointInsideBox },
			{ "IsPowerOfTwo", &UTKMathFunctionLibrary::execIsPowerOfTwo },
			{ "LineExtentBoxIntersection", &UTKMathFunctionLibrary::execLineExtentBoxIntersection },
			{ "LineToLineIntersection", &UTKMathFunctionLibrary::execLineToLineIntersection },
			{ "NegateFloat", &UTKMathFunctionLibrary::execNegateFloat },
			{ "NegateInt", &UTKMathFunctionLibrary::execNegateInt },
			{ "NegateVector2D", &UTKMathFunctionLibrary::execNegateVector2D },
			{ "PointOnWhichSideOfLineSegment", &UTKMathFunctionLibrary::execPointOnWhichSideOfLineSegment },
			{ "ProjectPointOnLine", &UTKMathFunctionLibrary::execProjectPointOnLine },
			{ "RoundToLowerMultiple", &UTKMathFunctionLibrary::execRoundToLowerMultiple },
			{ "RoundToNearestMultiple", &UTKMathFunctionLibrary::execRoundToNearestMultiple },
			{ "RoundToUpperMultiple", &UTKMathFunctionLibrary::execRoundToUpperMultiple },
			{ "SetCenterOfMassOffset", &UTKMathFunctionLibrary::execSetCenterOfMassOffset },
			{ "SetVectorLength", &UTKMathFunctionLibrary::execSetVectorLength },
			{ "SignedDistancePlanePoint", &UTKMathFunctionLibrary::execSignedDistancePlanePoint },
			{ "SphereBoxIntersection", &UTKMathFunctionLibrary::execSphereBoxIntersection },
			{ "VectorDegreesToRadians", &UTKMathFunctionLibrary::execVectorDegreesToRadians },
			{ "VectorRadiansToDegrees", &UTKMathFunctionLibrary::execVectorRadiansToDegrees },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing()
	{
		struct TKMathFunctionLibrary_eventAreLineSegmentsCrossing_Parms
		{
			FVector pointA1;
			FVector pointA2;
			FVector pointB1;
			FVector pointB2;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((TKMathFunctionLibrary_eventAreLineSegmentsCrossing_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TKMathFunctionLibrary_eventAreLineSegmentsCrossing_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_pointB2 = { UE4CodeGen_Private::EPropertyClass::Struct, "pointB2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventAreLineSegmentsCrossing_Parms, pointB2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_pointB1 = { UE4CodeGen_Private::EPropertyClass::Struct, "pointB1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventAreLineSegmentsCrossing_Parms, pointB1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_pointA2 = { UE4CodeGen_Private::EPropertyClass::Struct, "pointA2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventAreLineSegmentsCrossing_Parms, pointA2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_pointA1 = { UE4CodeGen_Private::EPropertyClass::Struct, "pointA1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventAreLineSegmentsCrossing_Parms, pointA1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pointB2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pointB1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pointA2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pointA1,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Vector|Intersection" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "* Returns true if the two line segments are intersecting and not parallel.\n* If you need the intersection point, use Closest Points On Two Lines." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "AreLineSegmentsCrossing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(TKMathFunctionLibrary_eventAreLineSegmentsCrossing_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnLineSeqment()
	{
		struct TKMathFunctionLibrary_eventClosestPointOnLineSeqment_Parms
		{
			FVector Point;
			FVector LineStart;
			FVector LineEnd;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointOnLineSeqment_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineEnd = { UE4CodeGen_Private::EPropertyClass::Struct, "LineEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointOnLineSeqment_Parms, LineEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineStart = { UE4CodeGen_Private::EPropertyClass::Struct, "LineStart", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointOnLineSeqment_Parms, LineStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point = { UE4CodeGen_Private::EPropertyClass::Struct, "Point", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointOnLineSeqment_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LineEnd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LineStart,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Point,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Vector" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "Find the point on line segment from LineStart to LineEnd which is closest to Point." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "ClosestPointOnLineSeqment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(TKMathFunctionLibrary_eventClosestPointOnLineSeqment_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine()
	{
		struct TKMathFunctionLibrary_eventClosestPointOnSphereToLine_Parms
		{
			FVector SphereOrigin;
			float SphereRadius;
			FVector LineOrigin;
			FVector LineDir;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointOnSphereToLine_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineDir = { UE4CodeGen_Private::EPropertyClass::Struct, "LineDir", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointOnSphereToLine_Parms, LineDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineOrigin = { UE4CodeGen_Private::EPropertyClass::Struct, "LineOrigin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointOnSphereToLine_Parms, LineOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SphereRadius = { UE4CodeGen_Private::EPropertyClass::Float, "SphereRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointOnSphereToLine_Parms, SphereRadius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphereOrigin = { UE4CodeGen_Private::EPropertyClass::Struct, "SphereOrigin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointOnSphereToLine_Parms, SphereOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LineDir,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LineOrigin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SphereRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SphereOrigin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Vector" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "Find closest point on a Sphere to a Line.\nWhen line intersects Sphere, then closest point to LineOrigin is returned.\n@param SphereOrigin           Origin of Sphere\n@param SphereRadius           Radius of Sphere\n@param LineOrigin             Origin of line\n@param LineDir                        Direction of line.\n@return Closest point on sphere to given line." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "ClosestPointOnSphereToLine", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(TKMathFunctionLibrary_eventClosestPointOnSphereToLine_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments()
	{
		struct TKMathFunctionLibrary_eventClosestPointsOfLineSegments_Parms
		{
			FVector Line1Start;
			FVector Line1End;
			FVector Line2Start;
			FVector Line2End;
			FVector LinePoint1;
			FVector LinePoint2;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinePoint2 = { UE4CodeGen_Private::EPropertyClass::Struct, "LinePoint2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointsOfLineSegments_Parms, LinePoint2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinePoint1 = { UE4CodeGen_Private::EPropertyClass::Struct, "LinePoint1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointsOfLineSegments_Parms, LinePoint1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Line2End = { UE4CodeGen_Private::EPropertyClass::Struct, "Line2End", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointsOfLineSegments_Parms, Line2End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Line2Start = { UE4CodeGen_Private::EPropertyClass::Struct, "Line2Start", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointsOfLineSegments_Parms, Line2Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Line1End = { UE4CodeGen_Private::EPropertyClass::Struct, "Line1End", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointsOfLineSegments_Parms, Line1End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Line1Start = { UE4CodeGen_Private::EPropertyClass::Struct, "Line1Start", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointsOfLineSegments_Parms, Line1Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinePoint2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinePoint1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Line2End,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Line2Start,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Line1End,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Line1Start,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Vector|Intersection" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "Find closest points between 2 line segments.\n@param        (Line1Start, Line1End)  defines the first line segment.\n@param        (Line2Start, Line2End)  defines the second line segment.\n@param        LinePoint1              Closest point on segment 1 to segment 2.\n@param        LinePoint2              Closest point on segment 2 to segment 1." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "ClosestPointsOfLineSegments", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(TKMathFunctionLibrary_eventClosestPointsOfLineSegments_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines()
	{
		struct TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms
		{
			FVector closestPointLine1;
			FVector closestPointLine2;
			FVector linePoint1;
			FVector lineVec1;
			FVector linePoint2;
			FVector lineVec2;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_lineVec2 = { UE4CodeGen_Private::EPropertyClass::Struct, "lineVec2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms, lineVec2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_linePoint2 = { UE4CodeGen_Private::EPropertyClass::Struct, "linePoint2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms, linePoint2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_lineVec1 = { UE4CodeGen_Private::EPropertyClass::Struct, "lineVec1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms, lineVec1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_linePoint1 = { UE4CodeGen_Private::EPropertyClass::Struct, "linePoint1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms, linePoint1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_closestPointLine2 = { UE4CodeGen_Private::EPropertyClass::Struct, "closestPointLine2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms, closestPointLine2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_closestPointLine1 = { UE4CodeGen_Private::EPropertyClass::Struct, "closestPointLine1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms, closestPointLine1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_lineVec2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_linePoint2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_lineVec1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_linePoint1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_closestPointLine2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_closestPointLine1,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Vector" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "* Calculate the closest points between two infinitely long lines.\n* If lines are intersecting (not parallel) it will return false! Use Line To Line Intersection instead.\n* @param closestPointLine1 The closest point of line1 to line2. Returns zero if the lines intersect.\n* @param closestPointLine2 The closest point of line2 to line1. Returns zero if the lines intersect.\n* @param linePoint1 Line point of the first line.\n* @param lineVec1 Line direction (normal) of the first line. Should be a normalized vector.\n* @param linePoint2 Line point of the second line.\n* @param lineVec2 Line direction (normal) of the second line. Should be a normalized vector.\n* @return true if lines are parallel, false otherwise." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "ClosestPointsOnTwoLines", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor()
	{
		struct TKMathFunctionLibrary_eventConvertAnchorToAnchor_Parms
		{
			UObject* WorldContextObject;
			FAnchors CurrentAnchor;
			FMargin Offsets;
			FAnchors TargetAnchor;
			FMargin ConvertedOffsets;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConvertedOffsets = { UE4CodeGen_Private::EPropertyClass::Struct, "ConvertedOffsets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventConvertAnchorToAnchor_Parms, ConvertedOffsets), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetAnchor = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetAnchor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventConvertAnchorToAnchor_Parms, TargetAnchor), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offsets = { UE4CodeGen_Private::EPropertyClass::Struct, "Offsets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventConvertAnchorToAnchor_Parms, Offsets), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentAnchor = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentAnchor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventConvertAnchorToAnchor_Parms, CurrentAnchor), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventConvertAnchorToAnchor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConvertedOffsets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetAnchor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Offsets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentAnchor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Anchor" },
				{ "DefaultToSelf", "WorldContextObject" },
				{ "HidePin", "WorldContextObject" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "Converts UMG layout offsets to another anchor." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "ConvertAnchorToAnchor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(TKMathFunctionLibrary_eventConvertAnchorToAnchor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity()
	{
		struct TKMathFunctionLibrary_eventConvertPhysicsLinearVelocity_Parms
		{
			FVector Velocity;
			TEnumAsByte<ESpeedUnit> SpeedUnit;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventConvertPhysicsLinearVelocity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpeedUnit = { UE4CodeGen_Private::EPropertyClass::Byte, "SpeedUnit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventConvertPhysicsLinearVelocity_Parms, SpeedUnit), Z_Construct_UEnum_VictoryBPLibrary_ESpeedUnit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity = { UE4CodeGen_Private::EPropertyClass::Struct, "Velocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventConvertPhysicsLinearVelocity_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpeedUnit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Velocity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Vector" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "Converts Physics Linear Velocity to a more useful speed unit." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "ConvertPhysicsLinearVelocity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(TKMathFunctionLibrary_eventConvertPhysicsLinearVelocity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableFloat()
	{
		struct TKMathFunctionLibrary_eventGetConsoleVariableFloat_Parms
		{
			FString VariableName;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventGetConsoleVariableFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_VariableName = { UE4CodeGen_Private::EPropertyClass::Str, "VariableName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventGetConsoleVariableFloat_Parms, VariableName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VariableName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|Console" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "GetConsoleVariableFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TKMathFunctionLibrary_eventGetConsoleVariableFloat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableInt()
	{
		struct TKMathFunctionLibrary_eventGetConsoleVariableInt_Parms
		{
			FString VariableName;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventGetConsoleVariableInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_VariableName = { UE4CodeGen_Private::EPropertyClass::Str, "VariableName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventGetConsoleVariableInt_Parms, VariableName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VariableName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|Console" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "GetConsoleVariableInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TKMathFunctionLibrary_eventGetConsoleVariableInt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint()
	{
		struct TKMathFunctionLibrary_eventGetVelocityAtPoint_Parms
		{
			UPrimitiveComponent* Target;
			FVector Point;
			FName BoneName;
			bool DrawDebugInfo;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventGetVelocityAtPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_DrawDebugInfo_SetBit = [](void* Obj){ ((TKMathFunctionLibrary_eventGetVelocityAtPoint_Parms*)Obj)->DrawDebugInfo = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawDebugInfo = { UE4CodeGen_Private::EPropertyClass::Bool, "DrawDebugInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TKMathFunctionLibrary_eventGetVelocityAtPoint_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DrawDebugInfo_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventGetVelocityAtPoint_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point = { UE4CodeGen_Private::EPropertyClass::Struct, "Point", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventGetVelocityAtPoint_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventGetVelocityAtPoint_Parms, Target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Target_MetaData, ARRAY_COUNT(NewProp_Target_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawDebugInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Point,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Target,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics" },
				{ "CPP_Default_BoneName", "None" },
				{ "CPP_Default_DrawDebugInfo", "false" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "Get the current world velocity of a point on a physics-enabled component.\n@param Point - Point in world space.\n@param DrawDebugInfo - Draw debug point & string.\n@param BoneName - If a SkeletalMeshComponent, name of body to get velocity of. 'None' indicates root body.\n@return The velocity of the point in world space." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "GetVelocityAtPoint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(TKMathFunctionLibrary_eventGetVelocityAtPoint_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_GridSnap()
	{
		struct TKMathFunctionLibrary_eventGridSnap_Parms
		{
			FVector A;
			float Grid;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventGridSnap_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Grid = { UE4CodeGen_Private::EPropertyClass::Float, "Grid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventGridSnap_Parms, Grid), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventGridSnap_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Grid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Vector" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "Snaps vector to nearest grid multiple." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "GridSnap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(TKMathFunctionLibrary_eventGridSnap_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsEvenNumber()
	{
		struct TKMathFunctionLibrary_eventIsEvenNumber_Parms
		{
			float A;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((TKMathFunctionLibrary_eventIsEvenNumber_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TKMathFunctionLibrary_eventIsEvenNumber_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Float, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventIsEvenNumber_Parms, A), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Float" },
				{ "CompactNodeTitle", "isEven" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "Returns true if the number is even (false if it's odd)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "IsEvenNumber", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TKMathFunctionLibrary_eventIsEvenNumber_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere()
	{
		struct TKMathFunctionLibrary_eventIsLineInsideSphere_Parms
		{
			FVector LineStart;
			FVector LineDir;
			float LineLength;
			FVector SphereOrigin;
			float SphereRadius;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((TKMathFunctionLibrary_eventIsLineInsideSphere_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TKMathFunctionLibrary_eventIsLineInsideSphere_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SphereRadius = { UE4CodeGen_Private::EPropertyClass::Float, "SphereRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventIsLineInsideSphere_Parms, SphereRadius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphereOrigin = { UE4CodeGen_Private::EPropertyClass::Struct, "SphereOrigin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventIsLineInsideSphere_Parms, SphereOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineLength = { UE4CodeGen_Private::EPropertyClass::Float, "LineLength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventIsLineInsideSphere_Parms, LineLength), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineDir = { UE4CodeGen_Private::EPropertyClass::Struct, "LineDir", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventIsLineInsideSphere_Parms, LineDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineStart = { UE4CodeGen_Private::EPropertyClass::Struct, "LineStart", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventIsLineInsideSphere_Parms, LineStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SphereRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SphereOrigin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LineLength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LineDir,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LineStart,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Vector|Intersection" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "Determines whether a line intersects a sphere." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "IsLineInsideSphere", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(TKMathFunctionLibrary_eventIsLineInsideSphere_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsMultipleOf()
	{
		struct TKMathFunctionLibrary_eventIsMultipleOf_Parms
		{
			int32 A;
			int32 Multiple;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((TKMathFunctionLibrary_eventIsMultipleOf_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TKMathFunctionLibrary_eventIsMultipleOf_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Multiple = { UE4CodeGen_Private::EPropertyClass::Int, "Multiple", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventIsMultipleOf_Parms, Multiple), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Int, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventIsMultipleOf_Parms, A), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Multiple,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Integer" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "Returns true if the integer is a multiple of the given number." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "IsMultipleOf", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TKMathFunctionLibrary_eventIsMultipleOf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox()
	{
		struct TKMathFunctionLibrary_eventIsPointInsideBox_Parms
		{
			FVector Point;
			FVector BoxOrigin;
			FVector BoxExtent;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((TKMathFunctionLibrary_eventIsPointInsideBox_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TKMathFunctionLibrary_eventIsPointInsideBox_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxExtent = { UE4CodeGen_Private::EPropertyClass::Struct, "BoxExtent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventIsPointInsideBox_Parms, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxOrigin = { UE4CodeGen_Private::EPropertyClass::Struct, "BoxOrigin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventIsPointInsideBox_Parms, BoxOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point = { UE4CodeGen_Private::EPropertyClass::Struct, "Point", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventIsPointInsideBox_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoxExtent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoxOrigin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Point,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Vector|Intersection" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "Returns true if the given Point vector is within a box (defined by BoxOrigin and BoxExtent)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "IsPointInsideBox", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(TKMathFunctionLibrary_eventIsPointInsideBox_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsPowerOfTwo()
	{
		struct TKMathFunctionLibrary_eventIsPowerOfTwo_Parms
		{
			int32 x;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((TKMathFunctionLibrary_eventIsPowerOfTwo_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TKMathFunctionLibrary_eventIsPowerOfTwo_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_x = { UE4CodeGen_Private::EPropertyClass::Int, "x", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventIsPowerOfTwo_Parms, x), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_x,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Integer" },
				{ "CompactNodeTitle", "PwrOf2" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "Returns true if the integer is a power of two number." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "IsPowerOfTwo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TKMathFunctionLibrary_eventIsPowerOfTwo_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection()
	{
		struct TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms
		{
			FBox inBox;
			FVector Start;
			FVector End;
			FVector Extent;
			FVector HitLocation;
			FVector HitNormal;
			float HitTime;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitTime = { UE4CodeGen_Private::EPropertyClass::Float, "HitTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms, HitTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "HitNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "HitLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extent = { UE4CodeGen_Private::EPropertyClass::Struct, "Extent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_End = { UE4CodeGen_Private::EPropertyClass::Struct, "End", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start = { UE4CodeGen_Private::EPropertyClass::Struct, "Start", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_inBox = { UE4CodeGen_Private::EPropertyClass::Struct, "inBox", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms, inBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitNormal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Extent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_End,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Start,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inBox,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Vector|Intersection" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "Swept-Box vs Box test.\nSweps a box defined by Extend from Start to End points and returns whether it hit a box or not plus the hit location and hit normal if successful." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "LineExtentBoxIntersection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection()
	{
		struct TKMathFunctionLibrary_eventLineToLineIntersection_Parms
		{
			FVector IntersectionPoint;
			FVector LinePoint1;
			FVector LineDir1;
			FVector LinePoint2;
			FVector LineDir2;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((TKMathFunctionLibrary_eventLineToLineIntersection_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TKMathFunctionLibrary_eventLineToLineIntersection_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineDir2 = { UE4CodeGen_Private::EPropertyClass::Struct, "LineDir2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventLineToLineIntersection_Parms, LineDir2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinePoint2 = { UE4CodeGen_Private::EPropertyClass::Struct, "LinePoint2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventLineToLineIntersection_Parms, LinePoint2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineDir1 = { UE4CodeGen_Private::EPropertyClass::Struct, "LineDir1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventLineToLineIntersection_Parms, LineDir1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinePoint1 = { UE4CodeGen_Private::EPropertyClass::Struct, "LinePoint1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventLineToLineIntersection_Parms, LinePoint1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_IntersectionPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "IntersectionPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventLineToLineIntersection_Parms, IntersectionPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LineDir2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinePoint2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LineDir1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinePoint1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IntersectionPoint,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Vector|Intersection" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "Calculate the intersection point of two infinitely long lines. Returns true if lines intersect, otherwise false.\nNote that in 3d, two lines do not intersect most of the time.\nSo if the two lines are not in the same plane, use Closest Points On Two Lines instead.\n@param IntersectionPoint The intersection point of the lines. Returns zero if the lines do not intersect or the operation fails.\n@param LinePoint1 Line point of the first line.\n@param LineDir1 Line direction (normal) of the first line. Should be a normalized vector.\n@param LinePoint2 Line point of the second line.\n@param LineDir2 Line direction (normal) of the second line. Should be a normalized vector.\n@return true if lines intersect, otherwise false." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "LineToLineIntersection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(TKMathFunctionLibrary_eventLineToLineIntersection_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_NegateFloat()
	{
		struct TKMathFunctionLibrary_eventNegateFloat_Parms
		{
			float A;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventNegateFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Float, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventNegateFloat_Parms, A), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Float" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "Reverses the sign (- or +) of a float." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "NegateFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TKMathFunctionLibrary_eventNegateFloat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_NegateInt()
	{
		struct TKMathFunctionLibrary_eventNegateInt_Parms
		{
			int32 A;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventNegateInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Int, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventNegateInt_Parms, A), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Integer" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "Reverses the sign (- or +) of an integer." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "NegateInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TKMathFunctionLibrary_eventNegateInt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_NegateVector2D()
	{
		struct TKMathFunctionLibrary_eventNegateVector2D_Parms
		{
			FVector2D A;
			FVector2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventNegateVector2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventNegateVector2D_Parms, A), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Vector2D" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "Reverses the sign (- or +) of a Vector2D." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "NegateVector2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(TKMathFunctionLibrary_eventNegateVector2D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment()
	{
		struct TKMathFunctionLibrary_eventPointOnWhichSideOfLineSegment_Parms
		{
			FVector linePoint1;
			FVector linePoint2;
			FVector point;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventPointOnWhichSideOfLineSegment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_point = { UE4CodeGen_Private::EPropertyClass::Struct, "point", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventPointOnWhichSideOfLineSegment_Parms, point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_linePoint2 = { UE4CodeGen_Private::EPropertyClass::Struct, "linePoint2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventPointOnWhichSideOfLineSegment_Parms, linePoint2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_linePoint1 = { UE4CodeGen_Private::EPropertyClass::Struct, "linePoint1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventPointOnWhichSideOfLineSegment_Parms, linePoint1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_point,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_linePoint2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_linePoint1,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Vector" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "* Returns 0 if point is on the line segment.\n* Returns 1 if point is not on the line segment and it is on the side of linePoint1.\n* Returns 2 if point is not on the line segment and it is on the side of linePoint2." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "PointOnWhichSideOfLineSegment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(TKMathFunctionLibrary_eventPointOnWhichSideOfLineSegment_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ProjectPointOnLine()
	{
		struct TKMathFunctionLibrary_eventProjectPointOnLine_Parms
		{
			FVector LineOrigin;
			FVector LineDirection;
			FVector Point;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventProjectPointOnLine_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point = { UE4CodeGen_Private::EPropertyClass::Struct, "Point", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventProjectPointOnLine_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "LineDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventProjectPointOnLine_Parms, LineDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineOrigin = { UE4CodeGen_Private::EPropertyClass::Struct, "LineOrigin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventProjectPointOnLine_Parms, LineOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Point,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LineDirection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LineOrigin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Vector" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "Returns a vector point which is a projection from a point to a line (defined by the vector couple LineOrigin, LineDirection).\nThe line is infinite (in both directions)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "ProjectPointOnLine", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(TKMathFunctionLibrary_eventProjectPointOnLine_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple()
	{
		struct TKMathFunctionLibrary_eventRoundToLowerMultiple_Parms
		{
			int32 A;
			int32 Multiple;
			bool skipSelf;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventRoundToLowerMultiple_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_skipSelf_SetBit = [](void* Obj){ ((TKMathFunctionLibrary_eventRoundToLowerMultiple_Parms*)Obj)->skipSelf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_skipSelf = { UE4CodeGen_Private::EPropertyClass::Bool, "skipSelf", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TKMathFunctionLibrary_eventRoundToLowerMultiple_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_skipSelf_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Multiple = { UE4CodeGen_Private::EPropertyClass::Int, "Multiple", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventRoundToLowerMultiple_Parms, Multiple), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Int, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventRoundToLowerMultiple_Parms, A), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_skipSelf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Multiple,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Integer" },
				{ "CPP_Default_Multiple", "32" },
				{ "CPP_Default_skipSelf", "false" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "Rounds an integer to the lower multiple of the given number.\nIf Skip Self is set to True it will skip to the previous multiple if the integer rounds to itself.\n@param Multiple - The multiple number to round to.\n@param skipSelf - Skip to the previous multiple if the integer rounds to itself." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "RoundToLowerMultiple", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TKMathFunctionLibrary_eventRoundToLowerMultiple_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToNearestMultiple()
	{
		struct TKMathFunctionLibrary_eventRoundToNearestMultiple_Parms
		{
			int32 A;
			int32 Multiple;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventRoundToNearestMultiple_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Multiple = { UE4CodeGen_Private::EPropertyClass::Int, "Multiple", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventRoundToNearestMultiple_Parms, Multiple), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Int, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventRoundToNearestMultiple_Parms, A), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Multiple,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Integer" },
				{ "CPP_Default_Multiple", "32" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "Rounds an integer to the nearest multiple of the given number." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "RoundToNearestMultiple", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TKMathFunctionLibrary_eventRoundToNearestMultiple_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple()
	{
		struct TKMathFunctionLibrary_eventRoundToUpperMultiple_Parms
		{
			int32 A;
			int32 Multiple;
			bool skipSelf;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventRoundToUpperMultiple_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_skipSelf_SetBit = [](void* Obj){ ((TKMathFunctionLibrary_eventRoundToUpperMultiple_Parms*)Obj)->skipSelf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_skipSelf = { UE4CodeGen_Private::EPropertyClass::Bool, "skipSelf", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TKMathFunctionLibrary_eventRoundToUpperMultiple_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_skipSelf_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Multiple = { UE4CodeGen_Private::EPropertyClass::Int, "Multiple", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventRoundToUpperMultiple_Parms, Multiple), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Int, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventRoundToUpperMultiple_Parms, A), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_skipSelf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Multiple,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Integer" },
				{ "CPP_Default_Multiple", "32" },
				{ "CPP_Default_skipSelf", "false" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "Rounds an integer to the upper multiple of the given number.\nIf Skip Self is set to True it will skip to the next multiple if the integer rounds to itself.\n@param Multiple - The multiple number to round to.\n@param skipSelf - Skip to the next multiple if the integer rounds to itself." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "RoundToUpperMultiple", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(TKMathFunctionLibrary_eventRoundToUpperMultiple_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset()
	{
		struct TKMathFunctionLibrary_eventSetCenterOfMassOffset_Parms
		{
			UPrimitiveComponent* Target;
			FVector Offset;
			FName BoneName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventSetCenterOfMassOffset_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset = { UE4CodeGen_Private::EPropertyClass::Struct, "Offset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventSetCenterOfMassOffset_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventSetCenterOfMassOffset_Parms, Target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Target_MetaData, ARRAY_COUNT(NewProp_Target_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Offset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Target,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics" },
				{ "CPP_Default_BoneName", "None" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "* Set the physx center of mass offset.\n* Note: this offsets the physx-calculated center of mass (it is not an offset from the pivot point)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "SetCenterOfMassOffset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(TKMathFunctionLibrary_eventSetCenterOfMassOffset_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_SetVectorLength()
	{
		struct TKMathFunctionLibrary_eventSetVectorLength_Parms
		{
			FVector A;
			float size;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventSetVectorLength_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_size = { UE4CodeGen_Private::EPropertyClass::Float, "size", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventSetVectorLength_Parms, size), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventSetVectorLength_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_size,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Vector" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "Changes the size (length) of a Vector to the given size (normalized vector * size)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "SetVectorLength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(TKMathFunctionLibrary_eventSetVectorLength_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_SignedDistancePlanePoint()
	{
		struct TKMathFunctionLibrary_eventSignedDistancePlanePoint_Parms
		{
			FVector planeNormal;
			FVector planePoint;
			FVector point;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventSignedDistancePlanePoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_point = { UE4CodeGen_Private::EPropertyClass::Struct, "point", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventSignedDistancePlanePoint_Parms, point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_planePoint = { UE4CodeGen_Private::EPropertyClass::Struct, "planePoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventSignedDistancePlanePoint_Parms, planePoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_planeNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "planeNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventSignedDistancePlanePoint_Parms, planeNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_point,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_planePoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_planeNormal,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Vector" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "Get the shortest distance between a point and a plane.\nThe output is signed so it holds information as to which side of the plane normal the point is." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "SignedDistancePlanePoint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(TKMathFunctionLibrary_eventSignedDistancePlanePoint_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection()
	{
		struct TKMathFunctionLibrary_eventSphereBoxIntersection_Parms
		{
			FVector SphereOrigin;
			float SphereRadius;
			FVector BoxOrigin;
			FVector BoxExtent;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((TKMathFunctionLibrary_eventSphereBoxIntersection_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TKMathFunctionLibrary_eventSphereBoxIntersection_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxExtent = { UE4CodeGen_Private::EPropertyClass::Struct, "BoxExtent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventSphereBoxIntersection_Parms, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxOrigin = { UE4CodeGen_Private::EPropertyClass::Struct, "BoxOrigin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventSphereBoxIntersection_Parms, BoxOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SphereRadius = { UE4CodeGen_Private::EPropertyClass::Float, "SphereRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventSphereBoxIntersection_Parms, SphereRadius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphereOrigin = { UE4CodeGen_Private::EPropertyClass::Struct, "SphereOrigin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventSphereBoxIntersection_Parms, SphereOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoxExtent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoxOrigin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SphereRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SphereOrigin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Vector|Intersection" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "Performs a sphere vs box intersection test.\n@param SphereOrigin the center of the sphere being tested against the box.\n@param SphereRadius the size of the sphere being tested.\n@param BoxOrigin the box origin being tested against.\n@param BoxExtent the box extend (width, depth, height).\n@return Whether the sphere/box intersect or not." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "SphereBoxIntersection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(TKMathFunctionLibrary_eventSphereBoxIntersection_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_VectorDegreesToRadians()
	{
		struct TKMathFunctionLibrary_eventVectorDegreesToRadians_Parms
		{
			FVector DegVector;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventVectorDegreesToRadians_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DegVector = { UE4CodeGen_Private::EPropertyClass::Struct, "DegVector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventVectorDegreesToRadians_Parms, DegVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DegVector,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Vector" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "Converts degrees to radians." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "VectorDegreesToRadians", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(TKMathFunctionLibrary_eventVectorDegreesToRadians_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_VectorRadiansToDegrees()
	{
		struct TKMathFunctionLibrary_eventVectorRadiansToDegrees_Parms
		{
			FVector RadVector;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventVectorRadiansToDegrees_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RadVector = { UE4CodeGen_Private::EPropertyClass::Struct, "RadVector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TKMathFunctionLibrary_eventVectorRadiansToDegrees_Parms, RadVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RadVector,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Victory BP Library|TK-Master Math|Vector" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
				{ "ToolTip", "Converts radians to degrees." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTKMathFunctionLibrary, "VectorRadiansToDegrees", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(TKMathFunctionLibrary_eventVectorRadiansToDegrees_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTKMathFunctionLibrary_NoRegister()
	{
		return UTKMathFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UTKMathFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_VictoryBPLibrary,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing, "AreLineSegmentsCrossing" }, // 2738767929
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnLineSeqment, "ClosestPointOnLineSeqment" }, // 1637648430
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine, "ClosestPointOnSphereToLine" }, // 2432093570
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments, "ClosestPointsOfLineSegments" }, // 3166353410
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines, "ClosestPointsOnTwoLines" }, // 916611175
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor, "ConvertAnchorToAnchor" }, // 1450431166
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity, "ConvertPhysicsLinearVelocity" }, // 2331979043
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableFloat, "GetConsoleVariableFloat" }, // 2249606992
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableInt, "GetConsoleVariableInt" }, // 468985730
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint, "GetVelocityAtPoint" }, // 107157752
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_GridSnap, "GridSnap" }, // 780197838
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_IsEvenNumber, "IsEvenNumber" }, // 3002854760
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere, "IsLineInsideSphere" }, // 794349677
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_IsMultipleOf, "IsMultipleOf" }, // 3064233369
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox, "IsPointInsideBox" }, // 1628962552
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_IsPowerOfTwo, "IsPowerOfTwo" }, // 3781976268
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection, "LineExtentBoxIntersection" }, // 3948884338
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection, "LineToLineIntersection" }, // 1993351900
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_NegateFloat, "NegateFloat" }, // 494722008
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_NegateInt, "NegateInt" }, // 2598155069
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_NegateVector2D, "NegateVector2D" }, // 4058251952
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment, "PointOnWhichSideOfLineSegment" }, // 2308878501
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_ProjectPointOnLine, "ProjectPointOnLine" }, // 1849571029
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple, "RoundToLowerMultiple" }, // 3840533122
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToNearestMultiple, "RoundToNearestMultiple" }, // 3893063794
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple, "RoundToUpperMultiple" }, // 1684386546
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset, "SetCenterOfMassOffset" }, // 3843354999
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_SetVectorLength, "SetVectorLength" }, // 737530520
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_SignedDistancePlanePoint, "SignedDistancePlanePoint" }, // 421100923
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection, "SphereBoxIntersection" }, // 1472410885
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_VectorDegreesToRadians, "VectorDegreesToRadians" }, // 2650696459
				{ &Z_Construct_UFunction_UTKMathFunctionLibrary_VectorRadiansToDegrees, "VectorRadiansToDegrees" }, // 2944423712
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "TKMathFunctionLibrary.h" },
				{ "ModuleRelativePath", "Public/TKMathFunctionLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTKMathFunctionLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTKMathFunctionLibrary::StaticClass,
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
	IMPLEMENT_CLASS(UTKMathFunctionLibrary, 2365242696);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTKMathFunctionLibrary(Z_Construct_UClass_UTKMathFunctionLibrary, &UTKMathFunctionLibrary::StaticClass, TEXT("/Script/VictoryBPLibrary"), TEXT("UTKMathFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTKMathFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
