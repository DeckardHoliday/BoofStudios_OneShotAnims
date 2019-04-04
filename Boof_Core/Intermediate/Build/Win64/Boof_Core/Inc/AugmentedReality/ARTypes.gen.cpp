// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ARTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARTypes() {}
// Cross Module References
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingState();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARSessionStatus();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingQuality();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARSessionStatus();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTypesDummyClass_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTypesDummyClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature()
	{
		struct _Script_AugmentedReality_eventOnARTransformUpdated_Parms
		{
			FTransform OldToNewTransform;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldToNewTransform_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldToNewTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "OldToNewTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_AugmentedReality_eventOnARTransformUpdated_Parms, OldToNewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_OldToNewTransform_MetaData, ARRAY_COUNT(NewProp_OldToNewTransform_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldToNewTransform,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ARTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality, "OnARTransformUpdated__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_AugmentedReality_eventOnARTransformUpdated_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature()
	{
		struct _Script_AugmentedReality_eventOnARTrackingStateChanged_Parms
		{
			EARTrackingState NewTrackingState;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewTrackingState = { UE4CodeGen_Private::EPropertyClass::Enum, "NewTrackingState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AugmentedReality_eventOnARTrackingStateChanged_Parms, NewTrackingState), Z_Construct_UEnum_AugmentedReality_EARTrackingState, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewTrackingState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewTrackingState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewTrackingState_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ARTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality, "OnARTrackingStateChanged__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_AugmentedReality_eventOnARTrackingStateChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EARSessionStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARSessionStatus, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARSessionStatus"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARSessionStatus(EARSessionStatus_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARSessionStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARSessionStatus_CRC() { return 2340105991U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARSessionStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARSessionStatus"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARSessionStatus_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARSessionStatus::NotStarted", (int64)EARSessionStatus::NotStarted },
				{ "EARSessionStatus::Running", (int64)EARSessionStatus::Running },
				{ "EARSessionStatus::NotSupported", (int64)EARSessionStatus::NotSupported },
				{ "EARSessionStatus::FatalError", (int64)EARSessionStatus::FatalError },
				{ "EARSessionStatus::PermissionNotGranted", (int64)EARSessionStatus::PermissionNotGranted },
				{ "EARSessionStatus::UnsupportedConfiguration", (int64)EARSessionStatus::UnsupportedConfiguration },
				{ "EARSessionStatus::Other", (int64)EARSessionStatus::Other },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FatalError.ToolTip", "The AR session encountered fatal error; the developer should call `StartARSession()` to re-start the AR subsystem." },
				{ "ModuleRelativePath", "Public/ARTypes.h" },
				{ "NotStarted.ToolTip", "Unreal AR session has not started yet." },
				{ "NotSupported.ToolTip", "Unreal AR session failed to start due to the AR subsystem not being supported by the device." },
				{ "Other.ToolTip", "Session isn't running due to unknown reason; @see FARSessionStatus::AdditionalInfo for more information" },
				{ "PermissionNotGranted.ToolTip", "AR session failed to start because it lacks the necessary permission (likely access to the camera or the gyroscope)." },
				{ "Running.ToolTip", "Unreal AR session is running." },
				{ "ToolTip", "Describes the current status of the AR session." },
				{ "UnsupportedConfiguration.ToolTip", "AR session failed to start because the configuration isn't supported." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EARSessionStatus",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EARSessionStatus",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EARTrackingQuality_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARTrackingQuality, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARTrackingQuality"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARTrackingQuality(EARTrackingQuality_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARTrackingQuality"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARTrackingQuality_CRC() { return 1439245115U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingQuality()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARTrackingQuality"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARTrackingQuality_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARTrackingQuality::NotTracking", (int64)EARTrackingQuality::NotTracking },
				{ "EARTrackingQuality::OrientationOnly", (int64)EARTrackingQuality::OrientationOnly },
				{ "EARTrackingQuality::OrientationAndPosition", (int64)EARTrackingQuality::OrientationAndPosition },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality" },
				{ "Experimental", "" },
				{ "ModuleRelativePath", "Public/ARTypes.h" },
				{ "NotTracking.ToolTip", "The tracking quality is not available." },
				{ "OrientationAndPosition.ToolTip", "The tracking quality is good." },
				{ "OrientationOnly.ToolTip", "The tracking quality is limited, relying only on the device's motion." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EARTrackingQuality",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EARTrackingQuality",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EARLineTraceChannels_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARLineTraceChannels"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARLineTraceChannels(EARLineTraceChannels_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARLineTraceChannels"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels_CRC() { return 2674272295U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARLineTraceChannels"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARLineTraceChannels::None", (int64)EARLineTraceChannels::None },
				{ "EARLineTraceChannels::FeaturePoint", (int64)EARLineTraceChannels::FeaturePoint },
				{ "EARLineTraceChannels::GroundPlane", (int64)EARLineTraceChannels::GroundPlane },
				{ "EARLineTraceChannels::PlaneUsingExtent", (int64)EARLineTraceChannels::PlaneUsingExtent },
				{ "EARLineTraceChannels::PlaneUsingBoundaryPolygon", (int64)EARLineTraceChannels::PlaneUsingBoundaryPolygon },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality|Trace Result" },
				{ "FeaturePoint.ToolTip", "Trace against points that the AR system considers significant ." },
				{ "GroundPlane.ToolTip", "Trace against estimated plane that does not have an associated tracked geometry." },
				{ "ModuleRelativePath", "Public/ARTypes.h" },
				{ "PlaneUsingBoundaryPolygon.ToolTip", "Trace against any plane tracked geometries using the boundary polygon." },
				{ "PlaneUsingExtent.ToolTip", "Trace against any plane tracked geometries using Center and Extent." },
				{ "ToolTip", "Channels that let users select which kind of tracked geometry to trace against." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EARLineTraceChannels",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EARLineTraceChannels",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EARTrackingState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARTrackingState, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARTrackingState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARTrackingState(EARTrackingState_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARTrackingState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARTrackingState_CRC() { return 1254902329U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARTrackingState"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARTrackingState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARTrackingState::Tracking", (int64)EARTrackingState::Tracking },
				{ "EARTrackingState::NotTracking", (int64)EARTrackingState::NotTracking },
				{ "EARTrackingState::StoppedTracking", (int64)EARTrackingState::StoppedTracking },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality" },
				{ "Experimental", "" },
				{ "ModuleRelativePath", "Public/ARTypes.h" },
				{ "NotTracking.ToolTip", "Currently not tracking, but may resume tracking later." },
				{ "StoppedTracking.ToolTip", "Stopped tracking forever." },
				{ "Tracking.ToolTip", "Currently not tracking." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EARTrackingState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EARTrackingState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FARSessionStatus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUGMENTEDREALITY_API uint32 Get_Z_Construct_UScriptStruct_FARSessionStatus_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FARSessionStatus, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARSessionStatus"), sizeof(FARSessionStatus), Get_Z_Construct_UScriptStruct_FARSessionStatus_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FARSessionStatus(FARSessionStatus::StaticStruct, TEXT("/Script/AugmentedReality"), TEXT("ARSessionStatus"), false, nullptr, nullptr);
static struct FScriptStruct_AugmentedReality_StaticRegisterNativesFARSessionStatus
{
	FScriptStruct_AugmentedReality_StaticRegisterNativesFARSessionStatus()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ARSessionStatus")),new UScriptStruct::TCppStructOps<FARSessionStatus>);
	}
} ScriptStruct_AugmentedReality_StaticRegisterNativesFARSessionStatus;
	UScriptStruct* Z_Construct_UScriptStruct_FARSessionStatus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FARSessionStatus_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ARSessionStatus"), sizeof(FARSessionStatus), Get_Z_Construct_UScriptStruct_FARSessionStatus_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ARTypes.h" },
				{ "ToolTip", "The current state of the AR subsystem including an optional explanation string." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARSessionStatus>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
				{ "Category", "AR AugmentedReality|Session" },
				{ "ModuleRelativePath", "Public/ARTypes.h" },
				{ "ToolTip", "The current status of the AR subsystem." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status = { UE4CodeGen_Private::EPropertyClass::Enum, "Status", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FARSessionStatus, Status), Z_Construct_UEnum_AugmentedReality_EARSessionStatus, METADATA_PARAMS(NewProp_Status_MetaData, ARRAY_COUNT(NewProp_Status_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalInfo_MetaData[] = {
				{ "Category", "AR AugmentedReality|Session" },
				{ "ModuleRelativePath", "Public/ARTypes.h" },
				{ "ToolTip", "Optional information about the current status of the system." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdditionalInfo = { UE4CodeGen_Private::EPropertyClass::Str, "AdditionalInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FARSessionStatus, AdditionalInfo), METADATA_PARAMS(NewProp_AdditionalInfo_MetaData, ARRAY_COUNT(NewProp_AdditionalInfo_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Status,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Status_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdditionalInfo,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ARSessionStatus",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FARSessionStatus),
				alignof(FARSessionStatus),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FARSessionStatus_CRC() { return 2946614755U; }
	void UARTypesDummyClass::StaticRegisterNativesUARTypesDummyClass()
	{
	}
	UClass* Z_Construct_UClass_UARTypesDummyClass_NoRegister()
	{
		return UARTypesDummyClass::StaticClass();
	}
	UClass* Z_Construct_UClass_UARTypesDummyClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ARTypes.h" },
				{ "ModuleRelativePath", "Public/ARTypes.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UARTypesDummyClass>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UARTypesDummyClass::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UARTypesDummyClass, 3012796780);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARTypesDummyClass(Z_Construct_UClass_UARTypesDummyClass, &UARTypesDummyClass::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARTypesDummyClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTypesDummyClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
