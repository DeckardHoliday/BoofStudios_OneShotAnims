// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ARSessionConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARSessionConfig() {}
// Cross Module References
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARSessionType();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARSessionConfig_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARSessionConfig();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
	static UEnum* EARFrameSyncMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARFrameSyncMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARFrameSyncMode(EARFrameSyncMode_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARFrameSyncMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode_CRC() { return 1799781167U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARFrameSyncMode"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARFrameSyncMode::SyncTickWithCameraImage", (int64)EARFrameSyncMode::SyncTickWithCameraImage },
				{ "EARFrameSyncMode::SyncTickWithoutCameraImage", (int64)EARFrameSyncMode::SyncTickWithoutCameraImage },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality" },
				{ "Experimental", "" },
				{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
				{ "SyncTickWithCameraImage.ToolTip", "Unreal tick will be synced with the camera image update rate." },
				{ "SyncTickWithoutCameraImage.ToolTip", "Unreal tick will not related to the camera image update rate." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EARFrameSyncMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EARFrameSyncMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EARLightEstimationMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARLightEstimationMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARLightEstimationMode(EARLightEstimationMode_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARLightEstimationMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode_CRC() { return 2037046375U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARLightEstimationMode"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARLightEstimationMode::None", (int64)EARLightEstimationMode::None },
				{ "EARLightEstimationMode::AmbientLightEstimate", (int64)EARLightEstimationMode::AmbientLightEstimate },
				{ "EARLightEstimationMode::DirectionalLightEstimate", (int64)EARLightEstimationMode::DirectionalLightEstimate },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AmbientLightEstimate.ToolTip", "Enable light estimation for ambient intensity; returned as a UARBasicLightEstimate" },
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality" },
				{ "DirectionalLightEstimate.ToolTip", "Enable directional light estimation of environment with an additional key light.\nCurrently not supported." },
				{ "Experimental", "" },
				{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
				{ "None.ToolTip", "Light estimation disabled." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EARLightEstimationMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EARLightEstimationMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EARPlaneDetectionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARPlaneDetectionMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARPlaneDetectionMode(EARPlaneDetectionMode_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARPlaneDetectionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode_CRC() { return 3345095194U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARPlaneDetectionMode"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARPlaneDetectionMode::None", (int64)EARPlaneDetectionMode::None },
				{ "EARPlaneDetectionMode::HorizontalPlaneDetection", (int64)EARPlaneDetectionMode::HorizontalPlaneDetection },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality" },
				{ "Experimental", "" },
				{ "HorizontalPlaneDetection.ToolTip", "Detect Horizontal Surfaces" },
				{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
				{ "None.ToolTip", "No Geometry Detection" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EARPlaneDetectionMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EARPlaneDetectionMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EARSessionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARSessionType, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARSessionType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARSessionType(EARSessionType_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARSessionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARSessionType_CRC() { return 1440304786U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARSessionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARSessionType"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARSessionType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARSessionType::None", (int64)EARSessionType::None },
				{ "EARSessionType::Orientation", (int64)EARSessionType::Orientation },
				{ "EARSessionType::World", (int64)EARSessionType::World },
				{ "EARSessionType::Face", (int64)EARSessionType::Face },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality" },
				{ "Experimental", "" },
				{ "Face.ToolTip", "AR meant to overlay onto a face" },
				{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
				{ "None.ToolTip", "AR tracking is not supported" },
				{ "Orientation.ToolTip", "AR session used to track orientation of the device only" },
				{ "World.ToolTip", "AR meant to overlay onto the world with tracking" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EARSessionType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EARSessionType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UARSessionConfig::StaticRegisterNativesUARSessionConfig()
	{
	}
	UClass* Z_Construct_UClass_UARSessionConfig_NoRegister()
	{
		return UARSessionConfig::StaticClass();
	}
	UClass* Z_Construct_UClass_UARSessionConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDataAsset,
				(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality" },
				{ "IncludePath", "ARSessionConfig.h" },
				{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAutomaticCameraTracking_MetaData[] = {
				{ "Category", "AR Settings" },
				{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
				{ "ToolTip", "Whether the game camera should track the device movement or not. Defaults to true." },
			};
#endif
			auto NewProp_bEnableAutomaticCameraTracking_SetBit = [](void* Obj){ ((UARSessionConfig*)Obj)->bEnableAutomaticCameraTracking = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAutomaticCameraTracking = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableAutomaticCameraTracking", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UARSessionConfig), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableAutomaticCameraTracking_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableAutomaticCameraTracking_MetaData, ARRAY_COUNT(NewProp_bEnableAutomaticCameraTracking_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAutomaticCameraOverlay_MetaData[] = {
				{ "Category", "AR Settings" },
				{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
				{ "ToolTip", "Whether the AR camera feed should be drawn as an overlay or not. Defaults to true." },
			};
#endif
			auto NewProp_bEnableAutomaticCameraOverlay_SetBit = [](void* Obj){ ((UARSessionConfig*)Obj)->bEnableAutomaticCameraOverlay = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAutomaticCameraOverlay = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableAutomaticCameraOverlay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UARSessionConfig), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableAutomaticCameraOverlay_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableAutomaticCameraOverlay_MetaData, ARRAY_COUNT(NewProp_bEnableAutomaticCameraOverlay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameSyncMode_MetaData[] = {
				{ "Category", "AR Settings" },
				{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
				{ "ToolTip", "@see EARFrameSyncMode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FrameSyncMode = { UE4CodeGen_Private::EPropertyClass::Enum, "FrameSyncMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040040000000001, 1, nullptr, STRUCT_OFFSET(UARSessionConfig, FrameSyncMode), Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode, METADATA_PARAMS(NewProp_FrameSyncMode_MetaData, ARRAY_COUNT(NewProp_FrameSyncMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_FrameSyncMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightEstimationMode_MetaData[] = {
				{ "Category", "AR Settings" },
				{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
				{ "ToolTip", "@see EARLightEstimationMode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LightEstimationMode = { UE4CodeGen_Private::EPropertyClass::Enum, "LightEstimationMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UARSessionConfig, LightEstimationMode), Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode, METADATA_PARAMS(NewProp_LightEstimationMode_MetaData, ARRAY_COUNT(NewProp_LightEstimationMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LightEstimationMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneDetectionMode_MetaData[] = {
				{ "Category", "AR Settings" },
				{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
				{ "ToolTip", "@see EARPlaneDetectionMode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlaneDetectionMode = { UE4CodeGen_Private::EPropertyClass::Enum, "PlaneDetectionMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UARSessionConfig, PlaneDetectionMode), Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode, METADATA_PARAMS(NewProp_PlaneDetectionMode_MetaData, ARRAY_COUNT(NewProp_PlaneDetectionMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaneDetectionMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionType_MetaData[] = {
				{ "Category", "AR Settings" },
				{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
				{ "ToolTip", "@see EARSessionType" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SessionType = { UE4CodeGen_Private::EPropertyClass::Enum, "SessionType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UARSessionConfig, SessionType), Z_Construct_UEnum_AugmentedReality_EARSessionType, METADATA_PARAMS(NewProp_SessionType_MetaData, ARRAY_COUNT(NewProp_SessionType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SessionType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableAutomaticCameraTracking,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableAutomaticCameraOverlay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrameSyncMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrameSyncMode_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightEstimationMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightEstimationMode_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlaneDetectionMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlaneDetectionMode_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SessionType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SessionType_Underlying,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UARSessionConfig>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UARSessionConfig::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UARSessionConfig, 2951615154);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARSessionConfig(Z_Construct_UClass_UARSessionConfig, &UARSessionConfig::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARSessionConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARSessionConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
