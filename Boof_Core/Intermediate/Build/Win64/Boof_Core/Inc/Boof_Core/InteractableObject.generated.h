// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOOF_CORE_InteractableObject_generated_h
#error "InteractableObject.generated.h already included, missing '#pragma once' in InteractableObject.h"
#endif
#define BOOF_CORE_InteractableObject_generated_h

#define Boof_Core_Source_Boof_Core_InteractableObject_h_21_RPC_WRAPPERS
#define Boof_Core_Source_Boof_Core_InteractableObject_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Boof_Core_Source_Boof_Core_InteractableObject_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractableObject(); \
	friend BOOF_CORE_API class UClass* Z_Construct_UClass_AInteractableObject(); \
public: \
	DECLARE_CLASS(AInteractableObject, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Boof_Core"), NO_API) \
	DECLARE_SERIALIZER(AInteractableObject) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Boof_Core_Source_Boof_Core_InteractableObject_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAInteractableObject(); \
	friend BOOF_CORE_API class UClass* Z_Construct_UClass_AInteractableObject(); \
public: \
	DECLARE_CLASS(AInteractableObject, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Boof_Core"), NO_API) \
	DECLARE_SERIALIZER(AInteractableObject) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Boof_Core_Source_Boof_Core_InteractableObject_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractableObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractableObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractableObject(AInteractableObject&&); \
	NO_API AInteractableObject(const AInteractableObject&); \
public:


#define Boof_Core_Source_Boof_Core_InteractableObject_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractableObject(AInteractableObject&&); \
	NO_API AInteractableObject(const AInteractableObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractableObject)


#define Boof_Core_Source_Boof_Core_InteractableObject_h_21_PRIVATE_PROPERTY_OFFSET
#define Boof_Core_Source_Boof_Core_InteractableObject_h_17_PROLOG
#define Boof_Core_Source_Boof_Core_InteractableObject_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Boof_Core_Source_Boof_Core_InteractableObject_h_21_PRIVATE_PROPERTY_OFFSET \
	Boof_Core_Source_Boof_Core_InteractableObject_h_21_RPC_WRAPPERS \
	Boof_Core_Source_Boof_Core_InteractableObject_h_21_INCLASS \
	Boof_Core_Source_Boof_Core_InteractableObject_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Boof_Core_Source_Boof_Core_InteractableObject_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Boof_Core_Source_Boof_Core_InteractableObject_h_21_PRIVATE_PROPERTY_OFFSET \
	Boof_Core_Source_Boof_Core_InteractableObject_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Boof_Core_Source_Boof_Core_InteractableObject_h_21_INCLASS_NO_PURE_DECLS \
	Boof_Core_Source_Boof_Core_InteractableObject_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Boof_Core_Source_Boof_Core_InteractableObject_h


#define FOREACH_ENUM_EOBJECTTYPE(op) \
	op(EObjectType::Dildo) \
	op(EObjectType::Fleshlight) \
	op(EObjectType::Viewport) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
