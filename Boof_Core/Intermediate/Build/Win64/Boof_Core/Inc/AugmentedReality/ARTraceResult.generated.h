// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUGMENTEDREALITY_ARTraceResult_generated_h
#error "ARTraceResult.generated.h already included, missing '#pragma once' in ARTraceResult.h"
#endif
#define AUGMENTEDREALITY_ARTraceResult_generated_h

#define Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_16_GENERATED_BODY \
	friend AUGMENTEDREALITY_API class UScriptStruct* Z_Construct_UScriptStruct_FARTraceResult(); \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__DistanceFromCamera() { return STRUCT_OFFSET(FARTraceResult, DistanceFromCamera); } \
	FORCEINLINE static uint32 __PPO__TraceChannel() { return STRUCT_OFFSET(FARTraceResult, TraceChannel); } \
	FORCEINLINE static uint32 __PPO__LocalToTrackingTransform() { return STRUCT_OFFSET(FARTraceResult, LocalToTrackingTransform); } \
	FORCEINLINE static uint32 __PPO__TrackedGeometry() { return STRUCT_OFFSET(FARTraceResult, TrackedGeometry); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_62_RPC_WRAPPERS
#define Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_62_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTraceResultDummy(); \
	friend AUGMENTEDREALITY_API class UClass* Z_Construct_UClass_UARTraceResultDummy(); \
public: \
	DECLARE_CLASS(UARTraceResultDummy, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTraceResultDummy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_62_INCLASS \
private: \
	static void StaticRegisterNativesUARTraceResultDummy(); \
	friend AUGMENTEDREALITY_API class UClass* Z_Construct_UClass_UARTraceResultDummy(); \
public: \
	DECLARE_CLASS(UARTraceResultDummy, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTraceResultDummy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTraceResultDummy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTraceResultDummy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTraceResultDummy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTraceResultDummy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTraceResultDummy(UARTraceResultDummy&&); \
	NO_API UARTraceResultDummy(const UARTraceResultDummy&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTraceResultDummy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTraceResultDummy(UARTraceResultDummy&&); \
	NO_API UARTraceResultDummy(const UARTraceResultDummy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTraceResultDummy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTraceResultDummy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTraceResultDummy)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_62_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_59_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_62_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_62_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_62_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_62_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_62_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
