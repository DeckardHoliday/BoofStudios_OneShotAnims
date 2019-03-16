// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOOF_CORE_Boof_Actors_generated_h
#error "Boof_Actors.generated.h already included, missing '#pragma once' in Boof_Actors.h"
#endif
#define BOOF_CORE_Boof_Actors_generated_h

#define Boof_Core_Source_Boof_Core_Boof_Actors_h_24_RPC_WRAPPERS
#define Boof_Core_Source_Boof_Core_Boof_Actors_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define Boof_Core_Source_Boof_Core_Boof_Actors_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoof_Actors(); \
	friend BOOF_CORE_API class UClass* Z_Construct_UClass_ABoof_Actors(); \
public: \
	DECLARE_CLASS(ABoof_Actors, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Boof_Core"), NO_API) \
	DECLARE_SERIALIZER(ABoof_Actors) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Boof_Core_Source_Boof_Core_Boof_Actors_h_24_INCLASS \
private: \
	static void StaticRegisterNativesABoof_Actors(); \
	friend BOOF_CORE_API class UClass* Z_Construct_UClass_ABoof_Actors(); \
public: \
	DECLARE_CLASS(ABoof_Actors, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Boof_Core"), NO_API) \
	DECLARE_SERIALIZER(ABoof_Actors) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Boof_Core_Source_Boof_Core_Boof_Actors_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoof_Actors(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoof_Actors) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoof_Actors); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoof_Actors); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoof_Actors(ABoof_Actors&&); \
	NO_API ABoof_Actors(const ABoof_Actors&); \
public:


#define Boof_Core_Source_Boof_Core_Boof_Actors_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoof_Actors(ABoof_Actors&&); \
	NO_API ABoof_Actors(const ABoof_Actors&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoof_Actors); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoof_Actors); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoof_Actors)


#define Boof_Core_Source_Boof_Core_Boof_Actors_h_24_PRIVATE_PROPERTY_OFFSET
#define Boof_Core_Source_Boof_Core_Boof_Actors_h_19_PROLOG
#define Boof_Core_Source_Boof_Core_Boof_Actors_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Boof_Core_Source_Boof_Core_Boof_Actors_h_24_PRIVATE_PROPERTY_OFFSET \
	Boof_Core_Source_Boof_Core_Boof_Actors_h_24_RPC_WRAPPERS \
	Boof_Core_Source_Boof_Core_Boof_Actors_h_24_INCLASS \
	Boof_Core_Source_Boof_Core_Boof_Actors_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Boof_Core_Source_Boof_Core_Boof_Actors_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Boof_Core_Source_Boof_Core_Boof_Actors_h_24_PRIVATE_PROPERTY_OFFSET \
	Boof_Core_Source_Boof_Core_Boof_Actors_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Boof_Core_Source_Boof_Core_Boof_Actors_h_24_INCLASS_NO_PURE_DECLS \
	Boof_Core_Source_Boof_Core_Boof_Actors_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Boof_Core_Source_Boof_Core_Boof_Actors_h


#define FOREACH_ENUM_EPOSITIONPREF(op) \
	op(EPositionPref::Top) \
	op(EPositionPref::Bottom) \
	op(EPositionPref::Switch) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
