// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FVector;
class UObject;
struct FAnchors;
struct FMargin;
struct FBox;
struct FVector2D;
#ifdef VICTORYBPLIBRARY_TKMathFunctionLibrary_generated_h
#error "TKMathFunctionLibrary.generated.h already included, missing '#pragma once' in TKMathFunctionLibrary.h"
#endif
#define VICTORYBPLIBRARY_TKMathFunctionLibrary_generated_h

#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCenterOfMassOffset) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Target); \
		P_GET_STRUCT(FVector,Z_Param_Offset); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTKMathFunctionLibrary::SetCenterOfMassOffset(Z_Param_Target,Z_Param_Offset,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVelocityAtPoint) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Target); \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_DrawDebugInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UTKMathFunctionLibrary::GetVelocityAtPoint(Z_Param_Target,Z_Param_Point,Z_Param_BoneName,Z_Param_DrawDebugInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertPhysicsLinearVelocity) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Velocity); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SpeedUnit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UTKMathFunctionLibrary::ConvertPhysicsLinearVelocity(Z_Param_Velocity,ESpeedUnit(Z_Param_SpeedUnit)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertAnchorToAnchor) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FAnchors,Z_Param_CurrentAnchor); \
		P_GET_STRUCT(FMargin,Z_Param_Offsets); \
		P_GET_STRUCT(FAnchors,Z_Param_TargetAnchor); \
		P_GET_STRUCT_REF(FMargin,Z_Param_Out_ConvertedOffsets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTKMathFunctionLibrary::ConvertAnchorToAnchor(Z_Param_WorldContextObject,Z_Param_CurrentAnchor,Z_Param_Offsets,Z_Param_TargetAnchor,Z_Param_Out_ConvertedOffsets); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGridSnap) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Grid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UTKMathFunctionLibrary::GridSnap(Z_Param_A,Z_Param_Grid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreLineSegmentsCrossing) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_pointA1); \
		P_GET_STRUCT(FVector,Z_Param_pointA2); \
		P_GET_STRUCT(FVector,Z_Param_pointB1); \
		P_GET_STRUCT(FVector,Z_Param_pointB2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTKMathFunctionLibrary::AreLineSegmentsCrossing(Z_Param_pointA1,Z_Param_pointA2,Z_Param_pointB1,Z_Param_pointB2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointOnWhichSideOfLineSegment) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_linePoint1); \
		P_GET_STRUCT(FVector,Z_Param_linePoint2); \
		P_GET_STRUCT(FVector,Z_Param_point); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UTKMathFunctionLibrary::PointOnWhichSideOfLineSegment(Z_Param_linePoint1,Z_Param_linePoint2,Z_Param_point); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestPointsOnTwoLines) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_closestPointLine1); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_closestPointLine2); \
		P_GET_STRUCT(FVector,Z_Param_linePoint1); \
		P_GET_STRUCT(FVector,Z_Param_lineVec1); \
		P_GET_STRUCT(FVector,Z_Param_linePoint2); \
		P_GET_STRUCT(FVector,Z_Param_lineVec2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTKMathFunctionLibrary::ClosestPointsOnTwoLines(Z_Param_Out_closestPointLine1,Z_Param_Out_closestPointLine2,Z_Param_linePoint1,Z_Param_lineVec1,Z_Param_linePoint2,Z_Param_lineVec2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineToLineIntersection) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_IntersectionPoint); \
		P_GET_STRUCT(FVector,Z_Param_LinePoint1); \
		P_GET_STRUCT(FVector,Z_Param_LineDir1); \
		P_GET_STRUCT(FVector,Z_Param_LinePoint2); \
		P_GET_STRUCT(FVector,Z_Param_LineDir2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTKMathFunctionLibrary::LineToLineIntersection(Z_Param_Out_IntersectionPoint,Z_Param_LinePoint1,Z_Param_LineDir1,Z_Param_LinePoint2,Z_Param_LineDir2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestPointsOfLineSegments) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Line1Start); \
		P_GET_STRUCT(FVector,Z_Param_Line1End); \
		P_GET_STRUCT(FVector,Z_Param_Line2Start); \
		P_GET_STRUCT(FVector,Z_Param_Line2End); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinePoint1); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinePoint2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTKMathFunctionLibrary::ClosestPointsOfLineSegments(Z_Param_Line1Start,Z_Param_Line1End,Z_Param_Line2Start,Z_Param_Line2End,Z_Param_Out_LinePoint1,Z_Param_Out_LinePoint2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSphereBoxIntersection) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_SphereOrigin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SphereRadius); \
		P_GET_STRUCT(FVector,Z_Param_BoxOrigin); \
		P_GET_STRUCT(FVector,Z_Param_BoxExtent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTKMathFunctionLibrary::SphereBoxIntersection(Z_Param_SphereOrigin,Z_Param_SphereRadius,Z_Param_BoxOrigin,Z_Param_BoxExtent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectPointOnLine) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_LineOrigin); \
		P_GET_STRUCT(FVector,Z_Param_LineDirection); \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UTKMathFunctionLibrary::ProjectPointOnLine(Z_Param_LineOrigin,Z_Param_LineDirection,Z_Param_Point); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSignedDistancePlanePoint) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_planeNormal); \
		P_GET_STRUCT(FVector,Z_Param_planePoint); \
		P_GET_STRUCT(FVector,Z_Param_point); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UTKMathFunctionLibrary::SignedDistancePlanePoint(Z_Param_planeNormal,Z_Param_planePoint,Z_Param_point); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineExtentBoxIntersection) \
	{ \
		P_GET_STRUCT(FBox,Z_Param_inBox); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_STRUCT(FVector,Z_Param_Extent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitNormal); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_HitTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTKMathFunctionLibrary::LineExtentBoxIntersection(Z_Param_inBox,Z_Param_Start,Z_Param_End,Z_Param_Extent,Z_Param_Out_HitLocation,Z_Param_Out_HitNormal,Z_Param_Out_HitTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLineInsideSphere) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_LineStart); \
		P_GET_STRUCT(FVector,Z_Param_LineDir); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LineLength); \
		P_GET_STRUCT(FVector,Z_Param_SphereOrigin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SphereRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTKMathFunctionLibrary::IsLineInsideSphere(Z_Param_LineStart,Z_Param_LineDir,Z_Param_LineLength,Z_Param_SphereOrigin,Z_Param_SphereRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPointInsideBox) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_STRUCT(FVector,Z_Param_BoxOrigin); \
		P_GET_STRUCT(FVector,Z_Param_BoxExtent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTKMathFunctionLibrary::IsPointInsideBox(Z_Param_Point,Z_Param_BoxOrigin,Z_Param_BoxExtent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestPointOnLineSeqment) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_STRUCT(FVector,Z_Param_LineStart); \
		P_GET_STRUCT(FVector,Z_Param_LineEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UTKMathFunctionLibrary::ClosestPointOnLineSeqment(Z_Param_Point,Z_Param_LineStart,Z_Param_LineEnd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestPointOnSphereToLine) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_SphereOrigin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SphereRadius); \
		P_GET_STRUCT(FVector,Z_Param_LineOrigin); \
		P_GET_STRUCT(FVector,Z_Param_LineDir); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UTKMathFunctionLibrary::ClosestPointOnSphereToLine(Z_Param_SphereOrigin,Z_Param_SphereRadius,Z_Param_LineOrigin,Z_Param_LineDir); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEvenNumber) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTKMathFunctionLibrary::IsEvenNumber(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMultipleOf) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Multiple); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTKMathFunctionLibrary::IsMultipleOf(Z_Param_A,Z_Param_Multiple); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPowerOfTwo) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_x); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTKMathFunctionLibrary::IsPowerOfTwo(Z_Param_x); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRoundToNearestMultiple) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Multiple); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UTKMathFunctionLibrary::RoundToNearestMultiple(Z_Param_A,Z_Param_Multiple); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRoundToUpperMultiple) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Multiple); \
		P_GET_UBOOL(Z_Param_skipSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UTKMathFunctionLibrary::RoundToUpperMultiple(Z_Param_A,Z_Param_Multiple,Z_Param_skipSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRoundToLowerMultiple) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Multiple); \
		P_GET_UBOOL(Z_Param_skipSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UTKMathFunctionLibrary::RoundToLowerMultiple(Z_Param_A,Z_Param_Multiple,Z_Param_skipSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVectorDegreesToRadians) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_DegVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UTKMathFunctionLibrary::VectorDegreesToRadians(Z_Param_DegVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVectorRadiansToDegrees) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_RadVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UTKMathFunctionLibrary::VectorRadiansToDegrees(Z_Param_RadVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVectorLength) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UTKMathFunctionLibrary::SetVectorLength(Z_Param_A,Z_Param_size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNegateVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UTKMathFunctionLibrary::NegateVector2D(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNegateInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UTKMathFunctionLibrary::NegateInt(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNegateFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UTKMathFunctionLibrary::NegateFloat(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConsoleVariableInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UTKMathFunctionLibrary::GetConsoleVariableInt(Z_Param_VariableName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConsoleVariableFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UTKMathFunctionLibrary::GetConsoleVariableFloat(Z_Param_VariableName); \
		P_NATIVE_END; \
	}


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCenterOfMassOffset) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Target); \
		P_GET_STRUCT(FVector,Z_Param_Offset); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTKMathFunctionLibrary::SetCenterOfMassOffset(Z_Param_Target,Z_Param_Offset,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVelocityAtPoint) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Target); \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_DrawDebugInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UTKMathFunctionLibrary::GetVelocityAtPoint(Z_Param_Target,Z_Param_Point,Z_Param_BoneName,Z_Param_DrawDebugInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertPhysicsLinearVelocity) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Velocity); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SpeedUnit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UTKMathFunctionLibrary::ConvertPhysicsLinearVelocity(Z_Param_Velocity,ESpeedUnit(Z_Param_SpeedUnit)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertAnchorToAnchor) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FAnchors,Z_Param_CurrentAnchor); \
		P_GET_STRUCT(FMargin,Z_Param_Offsets); \
		P_GET_STRUCT(FAnchors,Z_Param_TargetAnchor); \
		P_GET_STRUCT_REF(FMargin,Z_Param_Out_ConvertedOffsets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTKMathFunctionLibrary::ConvertAnchorToAnchor(Z_Param_WorldContextObject,Z_Param_CurrentAnchor,Z_Param_Offsets,Z_Param_TargetAnchor,Z_Param_Out_ConvertedOffsets); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGridSnap) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Grid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UTKMathFunctionLibrary::GridSnap(Z_Param_A,Z_Param_Grid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreLineSegmentsCrossing) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_pointA1); \
		P_GET_STRUCT(FVector,Z_Param_pointA2); \
		P_GET_STRUCT(FVector,Z_Param_pointB1); \
		P_GET_STRUCT(FVector,Z_Param_pointB2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTKMathFunctionLibrary::AreLineSegmentsCrossing(Z_Param_pointA1,Z_Param_pointA2,Z_Param_pointB1,Z_Param_pointB2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointOnWhichSideOfLineSegment) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_linePoint1); \
		P_GET_STRUCT(FVector,Z_Param_linePoint2); \
		P_GET_STRUCT(FVector,Z_Param_point); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UTKMathFunctionLibrary::PointOnWhichSideOfLineSegment(Z_Param_linePoint1,Z_Param_linePoint2,Z_Param_point); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestPointsOnTwoLines) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_closestPointLine1); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_closestPointLine2); \
		P_GET_STRUCT(FVector,Z_Param_linePoint1); \
		P_GET_STRUCT(FVector,Z_Param_lineVec1); \
		P_GET_STRUCT(FVector,Z_Param_linePoint2); \
		P_GET_STRUCT(FVector,Z_Param_lineVec2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTKMathFunctionLibrary::ClosestPointsOnTwoLines(Z_Param_Out_closestPointLine1,Z_Param_Out_closestPointLine2,Z_Param_linePoint1,Z_Param_lineVec1,Z_Param_linePoint2,Z_Param_lineVec2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineToLineIntersection) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_IntersectionPoint); \
		P_GET_STRUCT(FVector,Z_Param_LinePoint1); \
		P_GET_STRUCT(FVector,Z_Param_LineDir1); \
		P_GET_STRUCT(FVector,Z_Param_LinePoint2); \
		P_GET_STRUCT(FVector,Z_Param_LineDir2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTKMathFunctionLibrary::LineToLineIntersection(Z_Param_Out_IntersectionPoint,Z_Param_LinePoint1,Z_Param_LineDir1,Z_Param_LinePoint2,Z_Param_LineDir2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestPointsOfLineSegments) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Line1Start); \
		P_GET_STRUCT(FVector,Z_Param_Line1End); \
		P_GET_STRUCT(FVector,Z_Param_Line2Start); \
		P_GET_STRUCT(FVector,Z_Param_Line2End); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinePoint1); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinePoint2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTKMathFunctionLibrary::ClosestPointsOfLineSegments(Z_Param_Line1Start,Z_Param_Line1End,Z_Param_Line2Start,Z_Param_Line2End,Z_Param_Out_LinePoint1,Z_Param_Out_LinePoint2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSphereBoxIntersection) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_SphereOrigin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SphereRadius); \
		P_GET_STRUCT(FVector,Z_Param_BoxOrigin); \
		P_GET_STRUCT(FVector,Z_Param_BoxExtent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTKMathFunctionLibrary::SphereBoxIntersection(Z_Param_SphereOrigin,Z_Param_SphereRadius,Z_Param_BoxOrigin,Z_Param_BoxExtent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectPointOnLine) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_LineOrigin); \
		P_GET_STRUCT(FVector,Z_Param_LineDirection); \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UTKMathFunctionLibrary::ProjectPointOnLine(Z_Param_LineOrigin,Z_Param_LineDirection,Z_Param_Point); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSignedDistancePlanePoint) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_planeNormal); \
		P_GET_STRUCT(FVector,Z_Param_planePoint); \
		P_GET_STRUCT(FVector,Z_Param_point); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UTKMathFunctionLibrary::SignedDistancePlanePoint(Z_Param_planeNormal,Z_Param_planePoint,Z_Param_point); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineExtentBoxIntersection) \
	{ \
		P_GET_STRUCT(FBox,Z_Param_inBox); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_STRUCT(FVector,Z_Param_Extent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitNormal); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_HitTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTKMathFunctionLibrary::LineExtentBoxIntersection(Z_Param_inBox,Z_Param_Start,Z_Param_End,Z_Param_Extent,Z_Param_Out_HitLocation,Z_Param_Out_HitNormal,Z_Param_Out_HitTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLineInsideSphere) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_LineStart); \
		P_GET_STRUCT(FVector,Z_Param_LineDir); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LineLength); \
		P_GET_STRUCT(FVector,Z_Param_SphereOrigin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SphereRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTKMathFunctionLibrary::IsLineInsideSphere(Z_Param_LineStart,Z_Param_LineDir,Z_Param_LineLength,Z_Param_SphereOrigin,Z_Param_SphereRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPointInsideBox) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_STRUCT(FVector,Z_Param_BoxOrigin); \
		P_GET_STRUCT(FVector,Z_Param_BoxExtent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTKMathFunctionLibrary::IsPointInsideBox(Z_Param_Point,Z_Param_BoxOrigin,Z_Param_BoxExtent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestPointOnLineSeqment) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_STRUCT(FVector,Z_Param_LineStart); \
		P_GET_STRUCT(FVector,Z_Param_LineEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UTKMathFunctionLibrary::ClosestPointOnLineSeqment(Z_Param_Point,Z_Param_LineStart,Z_Param_LineEnd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestPointOnSphereToLine) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_SphereOrigin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SphereRadius); \
		P_GET_STRUCT(FVector,Z_Param_LineOrigin); \
		P_GET_STRUCT(FVector,Z_Param_LineDir); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UTKMathFunctionLibrary::ClosestPointOnSphereToLine(Z_Param_SphereOrigin,Z_Param_SphereRadius,Z_Param_LineOrigin,Z_Param_LineDir); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEvenNumber) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTKMathFunctionLibrary::IsEvenNumber(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMultipleOf) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Multiple); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTKMathFunctionLibrary::IsMultipleOf(Z_Param_A,Z_Param_Multiple); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPowerOfTwo) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_x); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTKMathFunctionLibrary::IsPowerOfTwo(Z_Param_x); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRoundToNearestMultiple) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Multiple); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UTKMathFunctionLibrary::RoundToNearestMultiple(Z_Param_A,Z_Param_Multiple); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRoundToUpperMultiple) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Multiple); \
		P_GET_UBOOL(Z_Param_skipSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UTKMathFunctionLibrary::RoundToUpperMultiple(Z_Param_A,Z_Param_Multiple,Z_Param_skipSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRoundToLowerMultiple) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Multiple); \
		P_GET_UBOOL(Z_Param_skipSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UTKMathFunctionLibrary::RoundToLowerMultiple(Z_Param_A,Z_Param_Multiple,Z_Param_skipSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVectorDegreesToRadians) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_DegVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UTKMathFunctionLibrary::VectorDegreesToRadians(Z_Param_DegVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVectorRadiansToDegrees) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_RadVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UTKMathFunctionLibrary::VectorRadiansToDegrees(Z_Param_RadVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVectorLength) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UTKMathFunctionLibrary::SetVectorLength(Z_Param_A,Z_Param_size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNegateVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UTKMathFunctionLibrary::NegateVector2D(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNegateInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UTKMathFunctionLibrary::NegateInt(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNegateFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UTKMathFunctionLibrary::NegateFloat(Z_Param_A); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConsoleVariableInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UTKMathFunctionLibrary::GetConsoleVariableInt(Z_Param_VariableName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConsoleVariableFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UTKMathFunctionLibrary::GetConsoleVariableFloat(Z_Param_VariableName); \
		P_NATIVE_END; \
	}


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTKMathFunctionLibrary(); \
	friend VICTORYBPLIBRARY_API class UClass* Z_Construct_UClass_UTKMathFunctionLibrary(); \
public: \
	DECLARE_CLASS(UTKMathFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VictoryBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(UTKMathFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUTKMathFunctionLibrary(); \
	friend VICTORYBPLIBRARY_API class UClass* Z_Construct_UClass_UTKMathFunctionLibrary(); \
public: \
	DECLARE_CLASS(UTKMathFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VictoryBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(UTKMathFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTKMathFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTKMathFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTKMathFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTKMathFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTKMathFunctionLibrary(UTKMathFunctionLibrary&&); \
	NO_API UTKMathFunctionLibrary(const UTKMathFunctionLibrary&); \
public:


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTKMathFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTKMathFunctionLibrary(UTKMathFunctionLibrary&&); \
	NO_API UTKMathFunctionLibrary(const UTKMathFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTKMathFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTKMathFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTKMathFunctionLibrary)


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_PRIVATE_PROPERTY_OFFSET
#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_53_PROLOG
#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_PRIVATE_PROPERTY_OFFSET \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_RPC_WRAPPERS \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_INCLASS \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_PRIVATE_PROPERTY_OFFSET \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_INCLASS_NO_PURE_DECLS \
	BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BeatSaberEditor_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h


#define FOREACH_ENUM_ESPEEDUNIT(op) \
	op(CentimeterPerSecond) \
	op(FootPerSecond) \
	op(MeterPerSecond) \
	op(MeterPerMinute) \
	op(KilometerPerSecond) \
	op(KilometerPerMinute) \
	op(KilometerPerHour) \
	op(MilePerHour) \
	op(Knot) \
	op(Mach) \
	op(SpeedOfLight) \
	op(YardPerSecond) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
