// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
enum class EARTrackingState : uint8;
#ifdef AUGMENTEDREALITY_ARTypes_generated_h
#error "ARTypes.generated.h already included, missing '#pragma once' in ARTypes.h"
#endif
#define AUGMENTEDREALITY_ARTypes_generated_h

#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_95_GENERATED_BODY \
	friend AUGMENTEDREALITY_API class UScriptStruct* Z_Construct_UScriptStruct_FARSessionStatus(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_118_DELEGATE \
struct _Script_AugmentedReality_eventOnARTransformUpdated_Parms \
{ \
	FTransform OldToNewTransform; \
}; \
static inline void FOnARTransformUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnARTransformUpdated, FTransform const& OldToNewTransform) \
{ \
	_Script_AugmentedReality_eventOnARTransformUpdated_Parms Parms; \
	Parms.OldToNewTransform=OldToNewTransform; \
	OnARTransformUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_117_DELEGATE \
struct _Script_AugmentedReality_eventOnARTrackingStateChanged_Parms \
{ \
	EARTrackingState NewTrackingState; \
}; \
static inline void FOnARTrackingStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnARTrackingStateChanged, EARTrackingState NewTrackingState) \
{ \
	_Script_AugmentedReality_eventOnARTrackingStateChanged_Parms Parms; \
	Parms.NewTrackingState=NewTrackingState; \
	OnARTrackingStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_123_RPC_WRAPPERS
#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_123_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTypesDummyClass(); \
	friend AUGMENTEDREALITY_API class UClass* Z_Construct_UClass_UARTypesDummyClass(); \
public: \
	DECLARE_CLASS(UARTypesDummyClass, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTypesDummyClass) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_123_INCLASS \
private: \
	static void StaticRegisterNativesUARTypesDummyClass(); \
	friend AUGMENTEDREALITY_API class UClass* Z_Construct_UClass_UARTypesDummyClass(); \
public: \
	DECLARE_CLASS(UARTypesDummyClass, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTypesDummyClass) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_123_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTypesDummyClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTypesDummyClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTypesDummyClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTypesDummyClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTypesDummyClass(UARTypesDummyClass&&); \
	NO_API UARTypesDummyClass(const UARTypesDummyClass&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_123_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTypesDummyClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTypesDummyClass(UARTypesDummyClass&&); \
	NO_API UARTypesDummyClass(const UARTypesDummyClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTypesDummyClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTypesDummyClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTypesDummyClass)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_123_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_120_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_123_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_123_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_123_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_123_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_123_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_123_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_123_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_123_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h


#define FOREACH_ENUM_EARSESSIONSTATUS(op) \
	op(EARSessionStatus::NotStarted) \
	op(EARSessionStatus::Running) \
	op(EARSessionStatus::NotSupported) \
	op(EARSessionStatus::FatalError) \
	op(EARSessionStatus::PermissionNotGranted) \
	op(EARSessionStatus::UnsupportedConfiguration) \
	op(EARSessionStatus::Other) 
#define FOREACH_ENUM_EARTRACKINGQUALITY(op) \
	op(EARTrackingQuality::NotTracking) \
	op(EARTrackingQuality::OrientationOnly) \
	op(EARTrackingQuality::OrientationAndPosition) 
#define FOREACH_ENUM_EARLINETRACECHANNELS(op) \
	op(EARLineTraceChannels::None) \
	op(EARLineTraceChannels::FeaturePoint) \
	op(EARLineTraceChannels::GroundPlane) \
	op(EARLineTraceChannels::PlaneUsingExtent) \
	op(EARLineTraceChannels::PlaneUsingBoundaryPolygon) 
#define FOREACH_ENUM_EARTRACKINGSTATE(op) \
	op(EARTrackingState::Tracking) \
	op(EARTrackingState::NotTracking) \
	op(EARTrackingState::StoppedTracking) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
