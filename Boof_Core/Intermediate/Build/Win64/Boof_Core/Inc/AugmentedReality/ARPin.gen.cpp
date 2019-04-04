// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ARPin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARPin() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPin_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARPin_DebugDraw();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARPin_GetDebugName();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARPin_GetLocalToTrackingTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARPin_GetLocalToWorldTransform();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARPin_GetPinnedComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARPin_GetTrackedGeometry();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedGeometry_NoRegister();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARPin_GetTrackingState();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingState();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature();
// End Cross Module References
	void UARPin::StaticRegisterNativesUARPin()
	{
		UClass* Class = UARPin::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DebugDraw", &UARPin::execDebugDraw },
			{ "GetDebugName", &UARPin::execGetDebugName },
			{ "GetLocalToTrackingTransform", &UARPin::execGetLocalToTrackingTransform },
			{ "GetLocalToWorldTransform", &UARPin::execGetLocalToWorldTransform },
			{ "GetPinnedComponent", &UARPin::execGetPinnedComponent },
			{ "GetTrackedGeometry", &UARPin::execGetTrackedGeometry },
			{ "GetTrackingState", &UARPin::execGetTrackingState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UARPin_DebugDraw()
	{
		struct ARPin_eventDebugDraw_Parms
		{
			UWorld* World;
			FLinearColor Color;
			float Scale;
			float PersistForSeconds;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PersistForSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "PersistForSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ARPin_eventDebugDraw_Parms, PersistForSeconds), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Float, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ARPin_eventDebugDraw_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color = { UE4CodeGen_Private::EPropertyClass::Struct, "Color", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(ARPin_eventDebugDraw_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_Color_MetaData, ARRAY_COUNT(NewProp_Color_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World = { UE4CodeGen_Private::EPropertyClass::Object, "World", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ARPin_eventDebugDraw_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PersistForSeconds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Color,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_World,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ARPin.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPin, "DebugDraw", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x40C20400, sizeof(ARPin_eventDebugDraw_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARPin_GetDebugName()
	{
		struct ARPin_eventGetDebugName_Parms
		{
			FName ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARPin_eventGetDebugName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Pin" },
				{ "ModuleRelativePath", "Public/ARPin.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPin, "GetDebugName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ARPin_eventGetDebugName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARPin_GetLocalToTrackingTransform()
	{
		struct ARPin_eventGetLocalToTrackingTransform_Parms
		{
			FTransform ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARPin_eventGetLocalToTrackingTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Pin" },
				{ "ModuleRelativePath", "Public/ARPin.h" },
				{ "ToolTip", "Maps from a Pin's Local Space to the Tracking Space.\nMapping the origin from the Pin's Local Space to Tracking Space\nyield the Pin's position in Tracking Space." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPin, "GetLocalToTrackingTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(ARPin_eventGetLocalToTrackingTransform_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARPin_GetLocalToWorldTransform()
	{
		struct ARPin_eventGetLocalToWorldTransform_Parms
		{
			FTransform ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARPin_eventGetLocalToWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Pin" },
				{ "ModuleRelativePath", "Public/ARPin.h" },
				{ "ToolTip", "Convenience function. Same as LocalToTrackingTransform, but\nappends the TrackingToWorld Transform." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPin, "GetLocalToWorldTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(ARPin_eventGetLocalToWorldTransform_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARPin_GetPinnedComponent()
	{
		struct ARPin_eventGetPinnedComponent_Parms
		{
			USceneComponent* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(ARPin_eventGetPinnedComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Pin" },
				{ "ModuleRelativePath", "Public/ARPin.h" },
				{ "ToolTip", "@return the PinnedComponent that this UARPin is pinning to the TrackedGeometry" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPin, "GetPinnedComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ARPin_eventGetPinnedComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARPin_GetTrackedGeometry()
	{
		struct ARPin_eventGetTrackedGeometry_Parms
		{
			UARTrackedGeometry* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARPin_eventGetTrackedGeometry_Parms, ReturnValue), Z_Construct_UClass_UARTrackedGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Pin" },
				{ "ModuleRelativePath", "Public/ARPin.h" },
				{ "ToolTip", "The TrackedGeometry (if any) that this this pin is being \"stuck\" into." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPin, "GetTrackedGeometry", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ARPin_eventGetTrackedGeometry_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARPin_GetTrackingState()
	{
		struct ARPin_eventGetTrackingState_Parms
		{
			EARTrackingState ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARPin_eventGetTrackingState_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARTrackingState, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Pin" },
				{ "ModuleRelativePath", "Public/ARPin.h" },
				{ "ToolTip", "Return the current tracking state of this Pin." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPin, "GetTrackingState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ARPin_eventGetTrackingState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARPin_NoRegister()
	{
		return UARPin::StaticClass();
	}
	UClass* Z_Construct_UClass_UARPin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UARPin_DebugDraw, "DebugDraw" }, // 3299217198
				{ &Z_Construct_UFunction_UARPin_GetDebugName, "GetDebugName" }, // 4066478974
				{ &Z_Construct_UFunction_UARPin_GetLocalToTrackingTransform, "GetLocalToTrackingTransform" }, // 1338932556
				{ &Z_Construct_UFunction_UARPin_GetLocalToWorldTransform, "GetLocalToWorldTransform" }, // 2921068743
				{ &Z_Construct_UFunction_UARPin_GetPinnedComponent, "GetPinnedComponent" }, // 1782532931
				{ &Z_Construct_UFunction_UARPin_GetTrackedGeometry, "GetTrackedGeometry" }, // 267876351
				{ &Z_Construct_UFunction_UARPin_GetTrackingState, "GetTrackingState" }, // 1647400998
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality" },
				{ "DevelopmentStatus", "Experimental" },
				{ "IncludePath", "ARPin.h" },
				{ "ModuleRelativePath", "Public/ARPin.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnARTransformUpdated_MetaData[] = {
				{ "Category", "AR AugmentedReality|Pin" },
				{ "ModuleRelativePath", "Public/ARPin.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnARTransformUpdated = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnARTransformUpdated", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000010080000, 1, nullptr, STRUCT_OFFSET(UARPin, OnARTransformUpdated), Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature, METADATA_PARAMS(NewProp_OnARTransformUpdated_MetaData, ARRAY_COUNT(NewProp_OnARTransformUpdated_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnARTrackingStateChanged_MetaData[] = {
				{ "Category", "AR AugmentedReality|Pin" },
				{ "ModuleRelativePath", "Public/ARPin.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnARTrackingStateChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnARTrackingStateChanged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000010080000, 1, nullptr, STRUCT_OFFSET(UARPin, OnARTrackingStateChanged), Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature, METADATA_PARAMS(NewProp_OnARTrackingStateChanged_MetaData, ARRAY_COUNT(NewProp_OnARTrackingStateChanged_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingState_MetaData[] = {
				{ "ModuleRelativePath", "Public/ARPin.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TrackingState = { UE4CodeGen_Private::EPropertyClass::Enum, "TrackingState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UARPin, TrackingState), Z_Construct_UEnum_AugmentedReality_EARTrackingState, METADATA_PARAMS(NewProp_TrackingState_MetaData, ARRAY_COUNT(NewProp_TrackingState_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackingState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalToAlignedTrackingTransform_MetaData[] = {
				{ "ModuleRelativePath", "Public/ARPin.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalToAlignedTrackingTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "LocalToAlignedTrackingTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UARPin, LocalToAlignedTrackingTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_LocalToAlignedTrackingTransform_MetaData, ARRAY_COUNT(NewProp_LocalToAlignedTrackingTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalToTrackingTransform_MetaData[] = {
				{ "ModuleRelativePath", "Public/ARPin.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalToTrackingTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "LocalToTrackingTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UARPin, LocalToTrackingTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_LocalToTrackingTransform_MetaData, ARRAY_COUNT(NewProp_LocalToTrackingTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinnedComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ARPin.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PinnedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "PinnedComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UARPin, PinnedComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_PinnedComponent_MetaData, ARRAY_COUNT(NewProp_PinnedComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedGeometry_MetaData[] = {
				{ "ModuleRelativePath", "Public/ARPin.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackedGeometry = { UE4CodeGen_Private::EPropertyClass::Object, "TrackedGeometry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UARPin, TrackedGeometry), Z_Construct_UClass_UARTrackedGeometry_NoRegister, METADATA_PARAMS(NewProp_TrackedGeometry_MetaData, ARRAY_COUNT(NewProp_TrackedGeometry_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnARTransformUpdated,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnARTrackingStateChanged,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackingState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackingState_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalToAlignedTrackingTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalToTrackingTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PinnedComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackedGeometry,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UARPin>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UARPin::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(UARPin, 2603717908);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARPin(Z_Construct_UClass_UARPin, &UARPin::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARPin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARPin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
