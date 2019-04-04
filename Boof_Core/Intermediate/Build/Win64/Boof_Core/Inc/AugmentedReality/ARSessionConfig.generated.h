// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUGMENTEDREALITY_ARSessionConfig_generated_h
#error "ARSessionConfig.generated.h already included, missing '#pragma once' in ARSessionConfig.h"
#endif
#define AUGMENTEDREALITY_ARSessionConfig_generated_h

#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_64_RPC_WRAPPERS
#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_64_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARSessionConfig(); \
	friend AUGMENTEDREALITY_API class UClass* Z_Construct_UClass_UARSessionConfig(); \
public: \
	DECLARE_CLASS(UARSessionConfig, UDataAsset, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARSessionConfig) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_64_INCLASS \
private: \
	static void StaticRegisterNativesUARSessionConfig(); \
	friend AUGMENTEDREALITY_API class UClass* Z_Construct_UClass_UARSessionConfig(); \
public: \
	DECLARE_CLASS(UARSessionConfig, UDataAsset, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARSessionConfig) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARSessionConfig(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARSessionConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARSessionConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARSessionConfig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARSessionConfig(UARSessionConfig&&); \
	NO_API UARSessionConfig(const UARSessionConfig&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_64_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARSessionConfig(UARSessionConfig&&); \
	NO_API UARSessionConfig(const UARSessionConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARSessionConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARSessionConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARSessionConfig)


#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_64_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SessionType() { return STRUCT_OFFSET(UARSessionConfig, SessionType); } \
	FORCEINLINE static uint32 __PPO__PlaneDetectionMode() { return STRUCT_OFFSET(UARSessionConfig, PlaneDetectionMode); } \
	FORCEINLINE static uint32 __PPO__LightEstimationMode() { return STRUCT_OFFSET(UARSessionConfig, LightEstimationMode); } \
	FORCEINLINE static uint32 __PPO__FrameSyncMode() { return STRUCT_OFFSET(UARSessionConfig, FrameSyncMode); } \
	FORCEINLINE static uint32 __PPO__bEnableAutomaticCameraOverlay() { return STRUCT_OFFSET(UARSessionConfig, bEnableAutomaticCameraOverlay); } \
	FORCEINLINE static uint32 __PPO__bEnableAutomaticCameraTracking() { return STRUCT_OFFSET(UARSessionConfig, bEnableAutomaticCameraTracking); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_61_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_64_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_64_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_64_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_64_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_64_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h


#define FOREACH_ENUM_EARFRAMESYNCMODE(op) \
	op(EARFrameSyncMode::SyncTickWithCameraImage) \
	op(EARFrameSyncMode::SyncTickWithoutCameraImage) 
#define FOREACH_ENUM_EARLIGHTESTIMATIONMODE(op) \
	op(EARLightEstimationMode::None) \
	op(EARLightEstimationMode::AmbientLightEstimate) \
	op(EARLightEstimationMode::DirectionalLightEstimate) 
#define FOREACH_ENUM_EARPLANEDETECTIONMODE(op) \
	op(EARPlaneDetectionMode::None) \
	op(EARPlaneDetectionMode::HorizontalPlaneDetection) 
#define FOREACH_ENUM_EARSESSIONTYPE(op) \
	op(EARSessionType::None) \
	op(EARSessionType::Orientation) \
	op(EARSessionType::World) \
	op(EARSessionType::Face) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
