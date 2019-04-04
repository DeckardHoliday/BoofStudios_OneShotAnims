// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEVELSEQUENCE_DefaultLevelSequenceInstanceData_generated_h
#error "DefaultLevelSequenceInstanceData.generated.h already included, missing '#pragma once' in DefaultLevelSequenceInstanceData.h"
#endif
#define LEVELSEQUENCE_DefaultLevelSequenceInstanceData_generated_h

#define Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDefaultLevelSequenceInstanceData(); \
	friend LEVELSEQUENCE_API class UClass* Z_Construct_UClass_UDefaultLevelSequenceInstanceData(); \
public: \
	DECLARE_CLASS(UDefaultLevelSequenceInstanceData, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(UDefaultLevelSequenceInstanceData) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UDefaultLevelSequenceInstanceData*>(this); }


#define Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUDefaultLevelSequenceInstanceData(); \
	friend LEVELSEQUENCE_API class UClass* Z_Construct_UClass_UDefaultLevelSequenceInstanceData(); \
public: \
	DECLARE_CLASS(UDefaultLevelSequenceInstanceData, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(UDefaultLevelSequenceInstanceData) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UDefaultLevelSequenceInstanceData*>(this); }


#define Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDefaultLevelSequenceInstanceData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDefaultLevelSequenceInstanceData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDefaultLevelSequenceInstanceData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDefaultLevelSequenceInstanceData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDefaultLevelSequenceInstanceData(UDefaultLevelSequenceInstanceData&&); \
	NO_API UDefaultLevelSequenceInstanceData(const UDefaultLevelSequenceInstanceData&); \
public:


#define Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDefaultLevelSequenceInstanceData(UDefaultLevelSequenceInstanceData&&); \
	NO_API UDefaultLevelSequenceInstanceData(const UDefaultLevelSequenceInstanceData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDefaultLevelSequenceInstanceData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDefaultLevelSequenceInstanceData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDefaultLevelSequenceInstanceData)


#define Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TransformOriginActor() { return STRUCT_OFFSET(UDefaultLevelSequenceInstanceData, TransformOriginActor); } \
	FORCEINLINE static uint32 __PPO__TransformOrigin() { return STRUCT_OFFSET(UDefaultLevelSequenceInstanceData, TransformOrigin); }


#define Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_13_PROLOG
#define Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_18_INCLASS \
	Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
