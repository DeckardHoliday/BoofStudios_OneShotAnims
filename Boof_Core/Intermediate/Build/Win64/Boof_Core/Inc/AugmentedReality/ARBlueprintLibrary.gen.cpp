// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ARBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARBlueprintLibrary() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARBlueprintLibrary_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPin_NoRegister();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedGeometry_NoRegister();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARSessionStatus();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARLightEstimate_NoRegister();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARSessionConfig_NoRegister();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingQuality();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARSessionType();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARTraceResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARBlueprintLibrary_PauseARSession();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARBlueprintLibrary_PinComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARBlueprintLibrary_RemovePin();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARBlueprintLibrary_StartARSession();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARBlueprintLibrary_StopARSession();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTraceResultLibrary_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTraceResultLibrary();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry();
// End Cross Module References
	void UARBlueprintLibrary::StaticRegisterNativesUARBlueprintLibrary()
	{
		UClass* Class = UARBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DebugDrawPin", &UARBlueprintLibrary::execDebugDrawPin },
			{ "DebugDrawTrackedGeometry", &UARBlueprintLibrary::execDebugDrawTrackedGeometry },
			{ "GetAllGeometries", &UARBlueprintLibrary::execGetAllGeometries },
			{ "GetAllPins", &UARBlueprintLibrary::execGetAllPins },
			{ "GetARSessionStatus", &UARBlueprintLibrary::execGetARSessionStatus },
			{ "GetCurrentLightEstimate", &UARBlueprintLibrary::execGetCurrentLightEstimate },
			{ "GetSessionConfig", &UARBlueprintLibrary::execGetSessionConfig },
			{ "GetTrackingQuality", &UARBlueprintLibrary::execGetTrackingQuality },
			{ "IsSessionTypeSupported", &UARBlueprintLibrary::execIsSessionTypeSupported },
			{ "LineTraceTrackedObjects", &UARBlueprintLibrary::execLineTraceTrackedObjects },
			{ "PauseARSession", &UARBlueprintLibrary::execPauseARSession },
			{ "PinComponent", &UARBlueprintLibrary::execPinComponent },
			{ "PinComponentToTraceResult", &UARBlueprintLibrary::execPinComponentToTraceResult },
			{ "RemovePin", &UARBlueprintLibrary::execRemovePin },
			{ "SetAlignmentTransform", &UARBlueprintLibrary::execSetAlignmentTransform },
			{ "StartARSession", &UARBlueprintLibrary::execStartARSession },
			{ "StopARSession", &UARBlueprintLibrary::execStopARSession },
			{ "UnpinComponent", &UARBlueprintLibrary::execUnpinComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin()
	{
		struct ARBlueprintLibrary_eventDebugDrawPin_Parms
		{
			UARPin* ARPin;
			UObject* WorldContextObject;
			FLinearColor Color;
			float Scale;
			float PersistForSeconds;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PersistForSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "PersistForSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawPin_Parms, PersistForSeconds), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Float, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawPin_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color = { UE4CodeGen_Private::EPropertyClass::Struct, "Color", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawPin_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawPin_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ARPin = { UE4CodeGen_Private::EPropertyClass::Object, "ARPin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawPin_Parms, ARPin), Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PersistForSeconds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Color,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ARPin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "1" },
				{ "Category", "AR AugmentedReality|Debug" },
				{ "CPP_Default_Color", "(R=1.000000,G=1.000000,B=0.000000,A=0.750000)" },
				{ "CPP_Default_PersistForSeconds", "0.000000" },
				{ "CPP_Default_Scale", "5.000000" },
				{ "Keywords", "ar augmentedreality augmented reality pin debug draw" },
				{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
				{ "ToolTip", "Given a \\c UARPin, draw it for debugging purposes." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, "DebugDrawPin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(ARBlueprintLibrary_eventDebugDrawPin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry()
	{
		struct ARBlueprintLibrary_eventDebugDrawTrackedGeometry_Parms
		{
			UARTrackedGeometry* TrackedGeometry;
			UObject* WorldContextObject;
			FLinearColor Color;
			float OutlineThickness;
			float PersistForSeconds;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PersistForSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "PersistForSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawTrackedGeometry_Parms, PersistForSeconds), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutlineThickness = { UE4CodeGen_Private::EPropertyClass::Float, "OutlineThickness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawTrackedGeometry_Parms, OutlineThickness), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color = { UE4CodeGen_Private::EPropertyClass::Struct, "Color", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawTrackedGeometry_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawTrackedGeometry_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackedGeometry = { UE4CodeGen_Private::EPropertyClass::Object, "TrackedGeometry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawTrackedGeometry_Parms, TrackedGeometry), Z_Construct_UClass_UARTrackedGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PersistForSeconds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutlineThickness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Color,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackedGeometry,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "1" },
				{ "Category", "AR AugmentedReality|Debug" },
				{ "CPP_Default_Color", "(R=1.000000,G=1.000000,B=0.000000,A=0.750000)" },
				{ "CPP_Default_OutlineThickness", "5.000000" },
				{ "CPP_Default_PersistForSeconds", "0.000000" },
				{ "Keywords", "ar augmentedreality augmented reality tracked geometry debug draw" },
				{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
				{ "ToolTip", "Given some real-world geometry being tracked by the Augmented Reality system, draw it on the screen for debugging purposes (rudimentary)" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, "DebugDrawTrackedGeometry", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(ARBlueprintLibrary_eventDebugDrawTrackedGeometry_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries()
	{
		struct ARBlueprintLibrary_eventGetAllGeometries_Parms
		{
			TArray<UARTrackedGeometry*> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetAllGeometries_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UARTrackedGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Tracking" },
				{ "Keywords", "ar augmentedreality augmented reality tracking geometry anchor" },
				{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
				{ "ToolTip", "@return a list of all the real-world geometry as currently seen by the Augmented Reality system" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, "GetAllGeometries", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(ARBlueprintLibrary_eventGetAllGeometries_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins()
	{
		struct ARBlueprintLibrary_eventGetAllPins_Parms
		{
			TArray<UARPin*> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetAllPins_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Pin" },
				{ "Keywords", "ar augmentedreality augmented reality tracking pin anchor" },
				{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
				{ "ToolTip", "Get a list of all the \\c UARPin objects that the Augmented Reality session is currently using to connect virtual objects to real-world, tracked locations." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, "GetAllPins", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(ARBlueprintLibrary_eventGetAllPins_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus()
	{
		struct ARBlueprintLibrary_eventGetARSessionStatus_Parms
		{
			FARSessionStatus ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetARSessionStatus_Parms, ReturnValue), Z_Construct_UScriptStruct_FARSessionStatus, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Session" },
				{ "Keywords", "ar augmentedreality augmented reality session start stop run running" },
				{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
				{ "ToolTip", "It is intended that you check the status of the Augmented Reality session on every frame and take action accordingly.\ne.g. if the session stopped for an unexpected reason, you might give the user a prompt to re-start the session\n\n@return The status of a current Augmented Reality session: e.g. Running or Not running for a specific reason." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, "GetARSessionStatus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(ARBlueprintLibrary_eventGetARSessionStatus_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate()
	{
		struct ARBlueprintLibrary_eventGetCurrentLightEstimate_Parms
		{
			UARLightEstimate* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetCurrentLightEstimate_Parms, ReturnValue), Z_Construct_UClass_UARLightEstimate_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Light Estimate" },
				{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
				{ "ToolTip", "An AugmentedReality session can be configured to provide light estimates.\nThe specific approach to light estimation can be configured by the \\c UARSessionConfig\nspecified during \\c StartARSession(). This function assumes that you will cast\nthe returned \\c UARLightEstimate to a derived type corresponding to your\nsession config.\n\n@return a \\c UARLighEstimate that can be cast to a derived class." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, "GetCurrentLightEstimate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(ARBlueprintLibrary_eventGetCurrentLightEstimate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig()
	{
		struct ARBlueprintLibrary_eventGetSessionConfig_Parms
		{
			UARSessionConfig* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetSessionConfig_Parms, ReturnValue), Z_Construct_UClass_UARSessionConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Session" },
				{ "Keywords", "ar augmentedreality augmented reality session" },
				{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
				{ "ToolTip", "@return the configuration that the current session was started with." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, "GetSessionConfig", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(ARBlueprintLibrary_eventGetSessionConfig_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality()
	{
		struct ARBlueprintLibrary_eventGetTrackingQuality_Parms
		{
			EARTrackingQuality ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetTrackingQuality_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARTrackingQuality, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Tracking" },
				{ "Keywords", "ar augmentedreality augmented reality tracking quality" },
				{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
				{ "ToolTip", "@return how well the tracking system is performing at the moment" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, "GetTrackingQuality", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(ARBlueprintLibrary_eventGetTrackingQuality_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported()
	{
		struct ARBlueprintLibrary_eventIsSessionTypeSupported_Parms
		{
			EARSessionType SessionType;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ARBlueprintLibrary_eventIsSessionTypeSupported_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ARBlueprintLibrary_eventIsSessionTypeSupported_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SessionType = { UE4CodeGen_Private::EPropertyClass::Enum, "SessionType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventIsSessionTypeSupported_Parms, SessionType), Z_Construct_UEnum_AugmentedReality_EARSessionType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SessionType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SessionType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SessionType_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Tracking" },
				{ "Keywords", "ar augmentedreality augmented reality tracking" },
				{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
				{ "ToolTip", "Test whether this type of session is supported by the current Augmented Reality platform.\ne.g. is your device capable of doing positional tracking or orientation only?" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, "IsSessionTypeSupported", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(ARBlueprintLibrary_eventIsSessionTypeSupported_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects()
	{
		struct ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms
		{
			FVector2D ScreenCoord;
			bool bTestFeaturePoints;
			bool bTestGroundPlane;
			bool bTestPlaneExtents;
			bool bTestPlaneBoundaryPolygon;
			TArray<FARTraceResult> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bTestPlaneBoundaryPolygon_SetBit = [](void* Obj){ ((ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms*)Obj)->bTestPlaneBoundaryPolygon = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTestPlaneBoundaryPolygon = { UE4CodeGen_Private::EPropertyClass::Bool, "bTestPlaneBoundaryPolygon", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTestPlaneBoundaryPolygon_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bTestPlaneExtents_SetBit = [](void* Obj){ ((ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms*)Obj)->bTestPlaneExtents = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTestPlaneExtents = { UE4CodeGen_Private::EPropertyClass::Bool, "bTestPlaneExtents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTestPlaneExtents_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bTestGroundPlane_SetBit = [](void* Obj){ ((ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms*)Obj)->bTestGroundPlane = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTestGroundPlane = { UE4CodeGen_Private::EPropertyClass::Bool, "bTestGroundPlane", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTestGroundPlane_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bTestFeaturePoints_SetBit = [](void* Obj){ ((ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms*)Obj)->bTestFeaturePoints = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTestFeaturePoints = { UE4CodeGen_Private::EPropertyClass::Bool, "bTestFeaturePoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTestFeaturePoints_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenCoord_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenCoord = { UE4CodeGen_Private::EPropertyClass::Struct, "ScreenCoord", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms, ScreenCoord), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_ScreenCoord_MetaData, ARRAY_COUNT(NewProp_ScreenCoord_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTestPlaneBoundaryPolygon,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTestPlaneExtents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTestGroundPlane,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTestFeaturePoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenCoord,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "1" },
				{ "Category", "AR AugmentedReality|Trace Result" },
				{ "CPP_Default_bTestFeaturePoints", "true" },
				{ "CPP_Default_bTestGroundPlane", "true" },
				{ "CPP_Default_bTestPlaneBoundaryPolygon", "true" },
				{ "CPP_Default_bTestPlaneExtents", "true" },
				{ "Keywords", "ar augmentedreality augmented reality tracking tracing linetrace" },
				{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
				{ "ToolTip", "Perform a line trace against any real-world geometry as tracked by the AR system.\n\n@param ScreenCoord            Coordinate of the point on the screen from which to cast a ray into the tracking space.\n\n@return a list of \\c FARTraceResult sorted by distance from camera." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, "LineTraceTrackedObjects", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_PauseARSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Session" },
				{ "Keywords", "ar augmentedreality augmented reality session stop run running" },
				{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
				{ "ToolTip", "Pause a running Augmented Reality session without clearing existing state." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, "PauseARSession", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_PinComponent()
	{
		struct ARBlueprintLibrary_eventPinComponent_Parms
		{
			USceneComponent* ComponentToPin;
			FTransform PinToWorldTransform;
			UARTrackedGeometry* TrackedGeometry;
			FName DebugName;
			UARPin* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponent_Parms, ReturnValue), Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_DebugName = { UE4CodeGen_Private::EPropertyClass::Name, "DebugName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000082, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponent_Parms, DebugName), METADATA_PARAMS(NewProp_DebugName_MetaData, ARRAY_COUNT(NewProp_DebugName_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackedGeometry = { UE4CodeGen_Private::EPropertyClass::Object, "TrackedGeometry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponent_Parms, TrackedGeometry), Z_Construct_UClass_UARTrackedGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinToWorldTransform_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinToWorldTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "PinToWorldTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponent_Parms, PinToWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_PinToWorldTransform_MetaData, ARRAY_COUNT(NewProp_PinToWorldTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentToPin_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentToPin = { UE4CodeGen_Private::EPropertyClass::Object, "ComponentToPin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponent_Parms, ComponentToPin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_ComponentToPin_MetaData, ARRAY_COUNT(NewProp_ComponentToPin_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackedGeometry,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PinToWorldTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentToPin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "3" },
				{ "Category", "AR AugmentedReality|Pin" },
				{ "CPP_Default_DebugName", "None" },
				{ "Keywords", "ar augmentedreality augmented reality tracking pin tracked geometry pinning anchor" },
				{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
				{ "ToolTip", "Pin an Unreal Component to a location in tracking spce (i.e. the real world).\n\n@param ComponentToPin         The component that should be pinned.\n@param PinToWorldTransform    A transform (in Unreal World Space) that corresponds to\n                              a physical location where the component should be pinned.\n@param TrackedGeometry        An optional, real-world geometry that is recognized by the\n                              AR system; any correction to the position of this geometry\n                              will be applied to the pinned component.\n@param DebugName              An optional name that will be displayed when this\n                              pin is being drawn for debugging purposes.\n\n@return an object representing the pin that connects \\c ComponentToPin component to a real-world\n        location and optionally to the \\c TrackedGeometry." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, "PinComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(ARBlueprintLibrary_eventPinComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult()
	{
		struct ARBlueprintLibrary_eventPinComponentToTraceResult_Parms
		{
			USceneComponent* ComponentToPin;
			FARTraceResult TraceResult;
			FName DebugName;
			UARPin* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponentToTraceResult_Parms, ReturnValue), Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_DebugName = { UE4CodeGen_Private::EPropertyClass::Name, "DebugName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000082, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponentToTraceResult_Parms, DebugName), METADATA_PARAMS(NewProp_DebugName_MetaData, ARRAY_COUNT(NewProp_DebugName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceResult = { UE4CodeGen_Private::EPropertyClass::Struct, "TraceResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponentToTraceResult_Parms, TraceResult), Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(NewProp_TraceResult_MetaData, ARRAY_COUNT(NewProp_TraceResult_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentToPin_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentToPin = { UE4CodeGen_Private::EPropertyClass::Object, "ComponentToPin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponentToTraceResult_Parms, ComponentToPin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_ComponentToPin_MetaData, ARRAY_COUNT(NewProp_ComponentToPin_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TraceResult,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentToPin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "2" },
				{ "Category", "AR AugmentedReality|Pin" },
				{ "CPP_Default_DebugName", "None" },
				{ "Keywords", "ar augmentedreality augmented reality tracking pin tracked geometry pinning anchor" },
				{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
				{ "ToolTip", "A convenient version of \\c PinComponent() that can be used in conjunction\nwith a result of a \\c LineTraceTrackedObjects call." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, "PinComponentToTraceResult", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(ARBlueprintLibrary_eventPinComponentToTraceResult_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_RemovePin()
	{
		struct ARBlueprintLibrary_eventRemovePin_Parms
		{
			UARPin* PinToRemove;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PinToRemove = { UE4CodeGen_Private::EPropertyClass::Object, "PinToRemove", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventRemovePin_Parms, PinToRemove), Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PinToRemove,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Pin" },
				{ "Keywords", "ar augmentedreality augmented reality tracking pin tracked geometry pinning anchor" },
				{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
				{ "ToolTip", "Remove a pin such that it no longer updates the associated component." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, "RemovePin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(ARBlueprintLibrary_eventRemovePin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform()
	{
		struct ARBlueprintLibrary_eventSetAlignmentTransform_Parms
		{
			FTransform InAlignmentTransform;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAlignmentTransform_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAlignmentTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "InAlignmentTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventSetAlignmentTransform_Parms, InAlignmentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_InAlignmentTransform_MetaData, ARRAY_COUNT(NewProp_InAlignmentTransform_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAlignmentTransform,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Alignment" },
				{ "Keywords", "ar augmentedreality augmented reality tracking alignment" },
				{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
				{ "ToolTip", "Set a transform that will be applied to the tracking space. This effectively moves any camera\npossessed by the Augmented Reality system such that it is pointing at a different spot\nin Unreal's World Space. This is often done to support AR scenarios that rely on static\ngeometry and/or lighting.\n\nNote: any movable components that are pinned will appear to stay in place, while anything\nnot pinned or is not movable (static or stationary) will appear to move.\n\n\\see PinComponent\n\\see PinComponentToTraceResult" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, "SetAlignmentTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(ARBlueprintLibrary_eventSetAlignmentTransform_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_StartARSession()
	{
		struct ARBlueprintLibrary_eventStartARSession_Parms
		{
			UARSessionConfig* SessionConfig;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SessionConfig = { UE4CodeGen_Private::EPropertyClass::Object, "SessionConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventStartARSession_Parms, SessionConfig), Z_Construct_UClass_UARSessionConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SessionConfig,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Session" },
				{ "Keywords", "ar augmentedreality augmented reality session start run running" },
				{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
				{ "ToolTip", "Begin a new Augmented Reality session. Subsequently, use the \\c GetARSessionStatus() function to figure out the status of the session.\n\n@param SessionConfig    Describes the tracking method to use, what kind of geometry to detect in the world, etc." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, "StartARSession", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(ARBlueprintLibrary_eventStartARSession_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_StopARSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Session" },
				{ "Keywords", "ar augmentedreality augmented reality session stop run running" },
				{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
				{ "ToolTip", "Stop a running Augmented Reality session and clear any state." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, "StopARSession", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent()
	{
		struct ARBlueprintLibrary_eventUnpinComponent_Parms
		{
			USceneComponent* ComponentToUnpin;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentToUnpin_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentToUnpin = { UE4CodeGen_Private::EPropertyClass::Object, "ComponentToUnpin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventUnpinComponent_Parms, ComponentToUnpin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_ComponentToUnpin_MetaData, ARRAY_COUNT(NewProp_ComponentToUnpin_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentToUnpin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Pin" },
				{ "Keywords", "ar augmentedreality augmented reality tracking pin tracked geometry pinning anchor" },
				{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
				{ "ToolTip", "Given a pinned \\c ComponentToUnpin, remove its attachment to the real world." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, "UnpinComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(ARBlueprintLibrary_eventUnpinComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARBlueprintLibrary_NoRegister()
	{
		return UARBlueprintLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UARBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin, "DebugDrawPin" }, // 3524572966
				{ &Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry, "DebugDrawTrackedGeometry" }, // 3018189490
				{ &Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries, "GetAllGeometries" }, // 1915105026
				{ &Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins, "GetAllPins" }, // 1656291521
				{ &Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus, "GetARSessionStatus" }, // 4159776974
				{ &Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate, "GetCurrentLightEstimate" }, // 1312528137
				{ &Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig, "GetSessionConfig" }, // 2418847448
				{ &Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality, "GetTrackingQuality" }, // 1356332209
				{ &Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported, "IsSessionTypeSupported" }, // 2217712307
				{ &Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects, "LineTraceTrackedObjects" }, // 4008509746
				{ &Z_Construct_UFunction_UARBlueprintLibrary_PauseARSession, "PauseARSession" }, // 3803244171
				{ &Z_Construct_UFunction_UARBlueprintLibrary_PinComponent, "PinComponent" }, // 2839403781
				{ &Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult, "PinComponentToTraceResult" }, // 2653813371
				{ &Z_Construct_UFunction_UARBlueprintLibrary_RemovePin, "RemovePin" }, // 448983163
				{ &Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform, "SetAlignmentTransform" }, // 1452986887
				{ &Z_Construct_UFunction_UARBlueprintLibrary_StartARSession, "StartARSession" }, // 1388683223
				{ &Z_Construct_UFunction_UARBlueprintLibrary_StopARSession, "StopARSession" }, // 3840124612
				{ &Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent, "UnpinComponent" }, // 229877287
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ARBlueprintLibrary.h" },
				{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
				{ "ScriptName", "ARLibrary" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UARBlueprintLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UARBlueprintLibrary::StaticClass,
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
	IMPLEMENT_CLASS(UARBlueprintLibrary, 2743603971);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARBlueprintLibrary(Z_Construct_UClass_UARBlueprintLibrary, &UARBlueprintLibrary::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARBlueprintLibrary);
	void UARTraceResultLibrary::StaticRegisterNativesUARTraceResultLibrary()
	{
		UClass* Class = UARTraceResultLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDistanceFromCamera", &UARTraceResultLibrary::execGetDistanceFromCamera },
			{ "GetLocalToTrackingTransform", &UARTraceResultLibrary::execGetLocalToTrackingTransform },
			{ "GetLocalToWorldTransform", &UARTraceResultLibrary::execGetLocalToWorldTransform },
			{ "GetTraceChannel", &UARTraceResultLibrary::execGetTraceChannel },
			{ "GetTrackedGeometry", &UARTraceResultLibrary::execGetTrackedGeometry },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera()
	{
		struct ARTraceResultLibrary_eventGetDistanceFromCamera_Parms
		{
			FARTraceResult TraceResult;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARTraceResultLibrary_eventGetDistanceFromCamera_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceResult = { UE4CodeGen_Private::EPropertyClass::Struct, "TraceResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(ARTraceResultLibrary_eventGetDistanceFromCamera_Parms, TraceResult), Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(NewProp_TraceResult_MetaData, ARRAY_COUNT(NewProp_TraceResult_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TraceResult,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Trace Result" },
				{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
				{ "ToolTip", "@return  the distance from the camera to the traced location in Unreal Units." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTraceResultLibrary, "GetDistanceFromCamera", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(ARTraceResultLibrary_eventGetDistanceFromCamera_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform()
	{
		struct ARTraceResultLibrary_eventGetLocalToTrackingTransform_Parms
		{
			FARTraceResult TraceResult;
			FTransform ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARTraceResultLibrary_eventGetLocalToTrackingTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceResult = { UE4CodeGen_Private::EPropertyClass::Struct, "TraceResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(ARTraceResultLibrary_eventGetLocalToTrackingTransform_Parms, TraceResult), Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(NewProp_TraceResult_MetaData, ARRAY_COUNT(NewProp_TraceResult_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TraceResult,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Trace Result" },
				{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
				{ "ToolTip", "@return The transform of the trace result in tracking space (after it is modified by the \\c AlignmentTransform).\n\n\\see SetAlignmentTransform()" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTraceResultLibrary, "GetLocalToTrackingTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(ARTraceResultLibrary_eventGetLocalToTrackingTransform_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform()
	{
		struct ARTraceResultLibrary_eventGetLocalToWorldTransform_Parms
		{
			FARTraceResult TraceResult;
			FTransform ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARTraceResultLibrary_eventGetLocalToWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceResult = { UE4CodeGen_Private::EPropertyClass::Struct, "TraceResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(ARTraceResultLibrary_eventGetLocalToWorldTransform_Parms, TraceResult), Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(NewProp_TraceResult_MetaData, ARRAY_COUNT(NewProp_TraceResult_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TraceResult,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Trace Result" },
				{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
				{ "ToolTip", "@return Get the transform of the trace result in Unreal World Space." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTraceResultLibrary, "GetLocalToWorldTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(ARTraceResultLibrary_eventGetLocalToWorldTransform_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel()
	{
		struct ARTraceResultLibrary_eventGetTraceChannel_Parms
		{
			FARTraceResult TraceResult;
			EARLineTraceChannels ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARTraceResultLibrary_eventGetTraceChannel_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceResult = { UE4CodeGen_Private::EPropertyClass::Struct, "TraceResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(ARTraceResultLibrary_eventGetTraceChannel_Parms, TraceResult), Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(NewProp_TraceResult_MetaData, ARRAY_COUNT(NewProp_TraceResult_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TraceResult,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Trace Result" },
				{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
				{ "ToolTip", "@return  Get the type of the tracked object (if any) that effected this trace result." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTraceResultLibrary, "GetTraceChannel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(ARTraceResultLibrary_eventGetTraceChannel_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry()
	{
		struct ARTraceResultLibrary_eventGetTrackedGeometry_Parms
		{
			FARTraceResult TraceResult;
			UARTrackedGeometry* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARTraceResultLibrary_eventGetTrackedGeometry_Parms, ReturnValue), Z_Construct_UClass_UARTrackedGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceResult = { UE4CodeGen_Private::EPropertyClass::Struct, "TraceResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(ARTraceResultLibrary_eventGetTrackedGeometry_Parms, TraceResult), Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(NewProp_TraceResult_MetaData, ARRAY_COUNT(NewProp_TraceResult_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TraceResult,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Trace Result" },
				{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
				{ "ToolTip", "@return Get the real-world object (as observed by the Augmented Reality system) that was intersected by the line trace." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTraceResultLibrary, "GetTrackedGeometry", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(ARTraceResultLibrary_eventGetTrackedGeometry_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARTraceResultLibrary_NoRegister()
	{
		return UARTraceResultLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UARTraceResultLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera, "GetDistanceFromCamera" }, // 2831509904
				{ &Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform, "GetLocalToTrackingTransform" }, // 3459972510
				{ &Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform, "GetLocalToWorldTransform" }, // 2802521050
				{ &Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel, "GetTraceChannel" }, // 2952457310
				{ &Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry, "GetTrackedGeometry" }, // 4212255071
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ARBlueprintLibrary.h" },
				{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
				{ "ScriptName", "ARLibrary" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UARTraceResultLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UARTraceResultLibrary::StaticClass,
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
	IMPLEMENT_CLASS(UARTraceResultLibrary, 739036670);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARTraceResultLibrary(Z_Construct_UClass_UARTraceResultLibrary, &UARTraceResultLibrary::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARTraceResultLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTraceResultLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
