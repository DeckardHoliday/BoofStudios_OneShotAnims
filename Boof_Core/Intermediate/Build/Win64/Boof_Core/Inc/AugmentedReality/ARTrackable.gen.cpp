// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ARTrackable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARTrackable() {}
// Cross Module References
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedGeometry_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedGeometry();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetDebugName();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingState();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPlaneGeometry_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPlaneGeometry();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARPlaneGeometry_GetCenter();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARPlaneGeometry_GetExtent();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedPoint_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedPoint();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARFaceGeometry_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARFaceGeometry();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue();
// End Cross Module References
	static UEnum* EARFaceBlendShape_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARFaceBlendShape"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARFaceBlendShape(EARFaceBlendShape_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARFaceBlendShape"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape_CRC() { return 2018886492U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARFaceBlendShape"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARFaceBlendShape::EyeBlinkLeft", (int64)EARFaceBlendShape::EyeBlinkLeft },
				{ "EARFaceBlendShape::EyeLookDownLeft", (int64)EARFaceBlendShape::EyeLookDownLeft },
				{ "EARFaceBlendShape::EyeLookInLeft", (int64)EARFaceBlendShape::EyeLookInLeft },
				{ "EARFaceBlendShape::EyeLookOutLeft", (int64)EARFaceBlendShape::EyeLookOutLeft },
				{ "EARFaceBlendShape::EyeLookUpLeft", (int64)EARFaceBlendShape::EyeLookUpLeft },
				{ "EARFaceBlendShape::EyeSquintLeft", (int64)EARFaceBlendShape::EyeSquintLeft },
				{ "EARFaceBlendShape::EyeWideLeft", (int64)EARFaceBlendShape::EyeWideLeft },
				{ "EARFaceBlendShape::EyeBlinkRight", (int64)EARFaceBlendShape::EyeBlinkRight },
				{ "EARFaceBlendShape::EyeLookDownRight", (int64)EARFaceBlendShape::EyeLookDownRight },
				{ "EARFaceBlendShape::EyeLookInRight", (int64)EARFaceBlendShape::EyeLookInRight },
				{ "EARFaceBlendShape::EyeLookOutRight", (int64)EARFaceBlendShape::EyeLookOutRight },
				{ "EARFaceBlendShape::EyeLookUpRight", (int64)EARFaceBlendShape::EyeLookUpRight },
				{ "EARFaceBlendShape::EyeSquintRight", (int64)EARFaceBlendShape::EyeSquintRight },
				{ "EARFaceBlendShape::EyeWideRight", (int64)EARFaceBlendShape::EyeWideRight },
				{ "EARFaceBlendShape::JawForward", (int64)EARFaceBlendShape::JawForward },
				{ "EARFaceBlendShape::JawLeft", (int64)EARFaceBlendShape::JawLeft },
				{ "EARFaceBlendShape::JawRight", (int64)EARFaceBlendShape::JawRight },
				{ "EARFaceBlendShape::JawOpen", (int64)EARFaceBlendShape::JawOpen },
				{ "EARFaceBlendShape::MouthClose", (int64)EARFaceBlendShape::MouthClose },
				{ "EARFaceBlendShape::MouthFunnel", (int64)EARFaceBlendShape::MouthFunnel },
				{ "EARFaceBlendShape::MouthPucker", (int64)EARFaceBlendShape::MouthPucker },
				{ "EARFaceBlendShape::MouthLeft", (int64)EARFaceBlendShape::MouthLeft },
				{ "EARFaceBlendShape::MouthRight", (int64)EARFaceBlendShape::MouthRight },
				{ "EARFaceBlendShape::MouthSmileLeft", (int64)EARFaceBlendShape::MouthSmileLeft },
				{ "EARFaceBlendShape::MouthSmileRight", (int64)EARFaceBlendShape::MouthSmileRight },
				{ "EARFaceBlendShape::MouthFrownLeft", (int64)EARFaceBlendShape::MouthFrownLeft },
				{ "EARFaceBlendShape::MouthFrownRight", (int64)EARFaceBlendShape::MouthFrownRight },
				{ "EARFaceBlendShape::MouthDimpleLeft", (int64)EARFaceBlendShape::MouthDimpleLeft },
				{ "EARFaceBlendShape::MouthDimpleRight", (int64)EARFaceBlendShape::MouthDimpleRight },
				{ "EARFaceBlendShape::MouthStretchLeft", (int64)EARFaceBlendShape::MouthStretchLeft },
				{ "EARFaceBlendShape::MouthStretchRight", (int64)EARFaceBlendShape::MouthStretchRight },
				{ "EARFaceBlendShape::MouthRollLower", (int64)EARFaceBlendShape::MouthRollLower },
				{ "EARFaceBlendShape::MouthRollUpper", (int64)EARFaceBlendShape::MouthRollUpper },
				{ "EARFaceBlendShape::MouthShrugLower", (int64)EARFaceBlendShape::MouthShrugLower },
				{ "EARFaceBlendShape::MouthShrugUpper", (int64)EARFaceBlendShape::MouthShrugUpper },
				{ "EARFaceBlendShape::MouthPressLeft", (int64)EARFaceBlendShape::MouthPressLeft },
				{ "EARFaceBlendShape::MouthPressRight", (int64)EARFaceBlendShape::MouthPressRight },
				{ "EARFaceBlendShape::MouthLowerDownLeft", (int64)EARFaceBlendShape::MouthLowerDownLeft },
				{ "EARFaceBlendShape::MouthLowerDownRight", (int64)EARFaceBlendShape::MouthLowerDownRight },
				{ "EARFaceBlendShape::MouthUpperUpLeft", (int64)EARFaceBlendShape::MouthUpperUpLeft },
				{ "EARFaceBlendShape::MouthUpperUpRight", (int64)EARFaceBlendShape::MouthUpperUpRight },
				{ "EARFaceBlendShape::BrowDownLeft", (int64)EARFaceBlendShape::BrowDownLeft },
				{ "EARFaceBlendShape::BrowDownRight", (int64)EARFaceBlendShape::BrowDownRight },
				{ "EARFaceBlendShape::BrowInnerUp", (int64)EARFaceBlendShape::BrowInnerUp },
				{ "EARFaceBlendShape::BrowOuterUpLeft", (int64)EARFaceBlendShape::BrowOuterUpLeft },
				{ "EARFaceBlendShape::BrowOuterUpRight", (int64)EARFaceBlendShape::BrowOuterUpRight },
				{ "EARFaceBlendShape::CheekPuff", (int64)EARFaceBlendShape::CheekPuff },
				{ "EARFaceBlendShape::CheekSquintLeft", (int64)EARFaceBlendShape::CheekSquintLeft },
				{ "EARFaceBlendShape::CheekSquintRight", (int64)EARFaceBlendShape::CheekSquintRight },
				{ "EARFaceBlendShape::NoseSneerLeft", (int64)EARFaceBlendShape::NoseSneerLeft },
				{ "EARFaceBlendShape::NoseSneerRight", (int64)EARFaceBlendShape::NoseSneerRight },
				{ "EARFaceBlendShape::MAX", (int64)EARFaceBlendShape::MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BrowDownLeft.ToolTip", "Brow blend shapes" },
				{ "Category", "AR AugmentedReality" },
				{ "CheekPuff.ToolTip", "Cheek blend shapes" },
				{ "Experimental", "" },
				{ "EyeBlinkLeft.ToolTip", "Left eye blend shapes" },
				{ "EyeBlinkRight.ToolTip", "Right eye blend shapes" },
				{ "JawForward.ToolTip", "Jaw blend shapes" },
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
				{ "MouthClose.ToolTip", "Mouth blend shapes" },
				{ "NoseSneerLeft.ToolTip", "Nose blend shapes" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EARFaceBlendShape",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EARFaceBlendShape",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EARFaceTrackingDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARFaceTrackingDirection"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARFaceTrackingDirection(EARFaceTrackingDirection_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARFaceTrackingDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection_CRC() { return 2931585990U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARFaceTrackingDirection"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARFaceTrackingDirection::FaceRelative", (int64)EARFaceTrackingDirection::FaceRelative },
				{ "EARFaceTrackingDirection::FaceMirrored", (int64)EARFaceTrackingDirection::FaceMirrored },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality" },
				{ "Experimental", "" },
				{ "FaceMirrored.ToolTip", "Blend shapes are tracked as if looking at the face, e.g. right eye is the mesh's left eye and right side of screen if facing you (like a mirror)" },
				{ "FaceRelative.ToolTip", "Blend shapes are tracked as if looking out of the face, e.g. right eye is the mesh's right eye and left side of screen if facing you" },
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EARFaceTrackingDirection",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EARFaceTrackingDirection",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UARTrackedGeometry::StaticRegisterNativesUARTrackedGeometry()
	{
		UClass* Class = UARTrackedGeometry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDebugName", &UARTrackedGeometry::execGetDebugName },
			{ "GetLastUpdateFrameNumber", &UARTrackedGeometry::execGetLastUpdateFrameNumber },
			{ "GetLastUpdateTimestamp", &UARTrackedGeometry::execGetLastUpdateTimestamp },
			{ "GetLocalToTrackingTransform", &UARTrackedGeometry::execGetLocalToTrackingTransform },
			{ "GetLocalToWorldTransform", &UARTrackedGeometry::execGetLocalToWorldTransform },
			{ "GetTrackingState", &UARTrackedGeometry::execGetTrackingState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetDebugName()
	{
		struct ARTrackedGeometry_eventGetDebugName_Parms
		{
			FName ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARTrackedGeometry_eventGetDebugName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Tracked Geometry" },
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedGeometry, "GetDebugName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ARTrackedGeometry_eventGetDebugName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber()
	{
		struct ARTrackedGeometry_eventGetLastUpdateFrameNumber_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARTrackedGeometry_eventGetLastUpdateFrameNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Tracked Geometry" },
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedGeometry, "GetLastUpdateFrameNumber", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ARTrackedGeometry_eventGetLastUpdateFrameNumber_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp()
	{
		struct ARTrackedGeometry_eventGetLastUpdateTimestamp_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARTrackedGeometry_eventGetLastUpdateTimestamp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Tracked Geometry" },
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedGeometry, "GetLastUpdateTimestamp", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ARTrackedGeometry_eventGetLastUpdateTimestamp_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform()
	{
		struct ARTrackedGeometry_eventGetLocalToTrackingTransform_Parms
		{
			FTransform ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARTrackedGeometry_eventGetLocalToTrackingTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Tracked Geometry" },
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedGeometry, "GetLocalToTrackingTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(ARTrackedGeometry_eventGetLocalToTrackingTransform_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform()
	{
		struct ARTrackedGeometry_eventGetLocalToWorldTransform_Parms
		{
			FTransform ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARTrackedGeometry_eventGetLocalToWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Tracked Geometry" },
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedGeometry, "GetLocalToWorldTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(ARTrackedGeometry_eventGetLocalToWorldTransform_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState()
	{
		struct ARTrackedGeometry_eventGetTrackingState_Parms
		{
			EARTrackingState ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARTrackedGeometry_eventGetTrackingState_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARTrackingState, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Tracked Geometry" },
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedGeometry, "GetTrackingState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ARTrackedGeometry_eventGetTrackingState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARTrackedGeometry_NoRegister()
	{
		return UARTrackedGeometry::StaticClass();
	}
	UClass* Z_Construct_UClass_UARTrackedGeometry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UARTrackedGeometry_GetDebugName, "GetDebugName" }, // 3150310907
				{ &Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber, "GetLastUpdateFrameNumber" }, // 2858965276
				{ &Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp, "GetLastUpdateTimestamp" }, // 1299622359
				{ &Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform, "GetLocalToTrackingTransform" }, // 1963283938
				{ &Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform, "GetLocalToWorldTransform" }, // 2514755495
				{ &Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState, "GetTrackingState" }, // 1246534262
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "ARTrackable.h" },
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingState_MetaData[] = {
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TrackingState = { UE4CodeGen_Private::EPropertyClass::Enum, "TrackingState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UARTrackedGeometry, TrackingState), Z_Construct_UEnum_AugmentedReality_EARTrackingState, METADATA_PARAMS(NewProp_TrackingState_MetaData, ARRAY_COUNT(NewProp_TrackingState_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackingState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalToAlignedTrackingTransform_MetaData[] = {
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalToAlignedTrackingTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "LocalToAlignedTrackingTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UARTrackedGeometry, LocalToAlignedTrackingTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_LocalToAlignedTrackingTransform_MetaData, ARRAY_COUNT(NewProp_LocalToAlignedTrackingTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalToTrackingTransform_MetaData[] = {
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalToTrackingTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "LocalToTrackingTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UARTrackedGeometry, LocalToTrackingTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_LocalToTrackingTransform_MetaData, ARRAY_COUNT(NewProp_LocalToTrackingTransform_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackingState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackingState_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalToAlignedTrackingTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalToTrackingTransform,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UARTrackedGeometry>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UARTrackedGeometry::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UARTrackedGeometry, 227294195);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARTrackedGeometry(Z_Construct_UClass_UARTrackedGeometry, &UARTrackedGeometry::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARTrackedGeometry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTrackedGeometry);
	void UARPlaneGeometry::StaticRegisterNativesUARPlaneGeometry()
	{
		UClass* Class = UARPlaneGeometry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoundaryPolygonInLocalSpace", &UARPlaneGeometry::execGetBoundaryPolygonInLocalSpace },
			{ "GetCenter", &UARPlaneGeometry::execGetCenter },
			{ "GetExtent", &UARPlaneGeometry::execGetExtent },
			{ "GetSubsumedBy", &UARPlaneGeometry::execGetSubsumedBy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace()
	{
		struct ARPlaneGeometry_eventGetBoundaryPolygonInLocalSpace_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARPlaneGeometry_eventGetBoundaryPolygonInLocalSpace_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Plane Geometry" },
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPlaneGeometry, "GetBoundaryPolygonInLocalSpace", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ARPlaneGeometry_eventGetBoundaryPolygonInLocalSpace_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARPlaneGeometry_GetCenter()
	{
		struct ARPlaneGeometry_eventGetCenter_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARPlaneGeometry_eventGetCenter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Plane Geometry" },
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPlaneGeometry, "GetCenter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(ARPlaneGeometry_eventGetCenter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARPlaneGeometry_GetExtent()
	{
		struct ARPlaneGeometry_eventGetExtent_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARPlaneGeometry_eventGetExtent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Plane Geometry" },
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPlaneGeometry, "GetExtent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(ARPlaneGeometry_eventGetExtent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy()
	{
		struct ARPlaneGeometry_eventGetSubsumedBy_Parms
		{
			UARPlaneGeometry* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARPlaneGeometry_eventGetSubsumedBy_Parms, ReturnValue), Z_Construct_UClass_UARPlaneGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Plane Geometry" },
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPlaneGeometry, "GetSubsumedBy", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ARPlaneGeometry_eventGetSubsumedBy_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARPlaneGeometry_NoRegister()
	{
		return UARPlaneGeometry::StaticClass();
	}
	UClass* Z_Construct_UClass_UARPlaneGeometry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UARTrackedGeometry,
				(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace, "GetBoundaryPolygonInLocalSpace" }, // 1366853093
				{ &Z_Construct_UFunction_UARPlaneGeometry_GetCenter, "GetCenter" }, // 1030184998
				{ &Z_Construct_UFunction_UARPlaneGeometry_GetExtent, "GetExtent" }, // 551862121
				{ &Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy, "GetSubsumedBy" }, // 949574375
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "ARTrackable.h" },
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubsumedBy_MetaData[] = {
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
				{ "ToolTip", "Used by ARCore Only" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubsumedBy = { UE4CodeGen_Private::EPropertyClass::Object, "SubsumedBy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UARPlaneGeometry, SubsumedBy), Z_Construct_UClass_UARPlaneGeometry_NoRegister, METADATA_PARAMS(NewProp_SubsumedBy_MetaData, ARRAY_COUNT(NewProp_SubsumedBy_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundaryPolygon_MetaData[] = {
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
				{ "ToolTip", "Used by ARCore Only" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoundaryPolygon = { UE4CodeGen_Private::EPropertyClass::Array, "BoundaryPolygon", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UARPlaneGeometry, BoundaryPolygon), METADATA_PARAMS(NewProp_BoundaryPolygon_MetaData, ARRAY_COUNT(NewProp_BoundaryPolygon_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundaryPolygon_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BoundaryPolygon", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[] = {
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extent = { UE4CodeGen_Private::EPropertyClass::Struct, "Extent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UARPlaneGeometry, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Extent_MetaData, ARRAY_COUNT(NewProp_Extent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center = { UE4CodeGen_Private::EPropertyClass::Struct, "Center", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UARPlaneGeometry, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Center_MetaData, ARRAY_COUNT(NewProp_Center_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubsumedBy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoundaryPolygon,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoundaryPolygon_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Extent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Center,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UARPlaneGeometry>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UARPlaneGeometry::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UARPlaneGeometry, 2878576022);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARPlaneGeometry(Z_Construct_UClass_UARPlaneGeometry, &UARPlaneGeometry::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARPlaneGeometry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARPlaneGeometry);
	void UARTrackedPoint::StaticRegisterNativesUARTrackedPoint()
	{
	}
	UClass* Z_Construct_UClass_UARTrackedPoint_NoRegister()
	{
		return UARTrackedPoint::StaticClass();
	}
	UClass* Z_Construct_UClass_UARTrackedPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UARTrackedGeometry,
				(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "ARTrackable.h" },
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UARTrackedPoint>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UARTrackedPoint::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UARTrackedPoint, 11347661);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARTrackedPoint(Z_Construct_UClass_UARTrackedPoint, &UARTrackedPoint::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARTrackedPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTrackedPoint);
	void UARFaceGeometry::StaticRegisterNativesUARFaceGeometry()
	{
		UClass* Class = UARFaceGeometry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBlendShapes", &UARFaceGeometry::execGetBlendShapes },
			{ "GetBlendShapeValue", &UARFaceGeometry::execGetBlendShapeValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes()
	{
		struct ARFaceGeometry_eventGetBlendShapes_Parms
		{
			TMap<EARFaceBlendShape,float> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Map, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000582, 1, nullptr, STRUCT_OFFSET(ARFaceGeometry_eventGetBlendShapes_Parms, ReturnValue), METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Key_KeyProp_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_ValueProp = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Key_KeyProp_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_ValueProp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Face Geometry" },
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARFaceGeometry, "GetBlendShapes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ARFaceGeometry_eventGetBlendShapes_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue()
	{
		struct ARFaceGeometry_eventGetBlendShapeValue_Parms
		{
			EARFaceBlendShape BlendShape;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARFaceGeometry_eventGetBlendShapeValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendShape = { UE4CodeGen_Private::EPropertyClass::Enum, "BlendShape", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ARFaceGeometry_eventGetBlendShapeValue_Parms, BlendShape), Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendShape_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendShape,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendShape_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Face Geometry" },
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARFaceGeometry, "GetBlendShapeValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ARFaceGeometry_eventGetBlendShapeValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARFaceGeometry_NoRegister()
	{
		return UARFaceGeometry::StaticClass();
	}
	UClass* Z_Construct_UClass_UARFaceGeometry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UARTrackedGeometry,
				(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes, "GetBlendShapes" }, // 2863695231
				{ &Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue, "GetBlendShapeValue" }, // 18339737
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "ARTrackable.h" },
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendShapes_MetaData[] = {
				{ "ModuleRelativePath", "Public/ARTrackable.h" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_BlendShapes = { UE4CodeGen_Private::EPropertyClass::Map, "BlendShapes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UARFaceGeometry, BlendShapes), METADATA_PARAMS(NewProp_BlendShapes_MetaData, ARRAY_COUNT(NewProp_BlendShapes_MetaData)) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendShapes_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Enum, "BlendShapes_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendShapes_Key_KeyProp_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendShapes_ValueProp = { UE4CodeGen_Private::EPropertyClass::Float, "BlendShapes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendShapes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendShapes_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendShapes_Key_KeyProp_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendShapes_ValueProp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UARFaceGeometry>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UARFaceGeometry::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UARFaceGeometry, 1400884602);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARFaceGeometry(Z_Construct_UClass_UARFaceGeometry, &UARFaceGeometry::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARFaceGeometry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARFaceGeometry);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
