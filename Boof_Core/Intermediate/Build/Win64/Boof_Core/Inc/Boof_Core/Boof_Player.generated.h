// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOOF_CORE_Boof_Player_generated_h
#error "Boof_Player.generated.h already included, missing '#pragma once' in Boof_Player.h"
#endif
#define BOOF_CORE_Boof_Player_generated_h

#define Boof_Core_Source_Boof_Core_Boof_Player_h_21_RPC_WRAPPERS
#define Boof_Core_Source_Boof_Core_Boof_Player_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Boof_Core_Source_Boof_Core_Boof_Player_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoof_Player(); \
	friend BOOF_CORE_API class UClass* Z_Construct_UClass_ABoof_Player(); \
public: \
	DECLARE_CLASS(ABoof_Player, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Boof_Core"), NO_API) \
	DECLARE_SERIALIZER(ABoof_Player) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Boof_Core_Source_Boof_Core_Boof_Player_h_21_INCLASS \
private: \
	static void StaticRegisterNativesABoof_Player(); \
	friend BOOF_CORE_API class UClass* Z_Construct_UClass_ABoof_Player(); \
public: \
	DECLARE_CLASS(ABoof_Player, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Boof_Core"), NO_API) \
	DECLARE_SERIALIZER(ABoof_Player) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Boof_Core_Source_Boof_Core_Boof_Player_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoof_Player(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoof_Player) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoof_Player); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoof_Player); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoof_Player(ABoof_Player&&); \
	NO_API ABoof_Player(const ABoof_Player&); \
public:


#define Boof_Core_Source_Boof_Core_Boof_Player_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoof_Player(ABoof_Player&&); \
	NO_API ABoof_Player(const ABoof_Player&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoof_Player); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoof_Player); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoof_Player)


#define Boof_Core_Source_Boof_Core_Boof_Player_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ABoof_Player, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__defaultCollissionComponent() { return STRUCT_OFFSET(ABoof_Player, defaultCollissionComponent); } \
	FORCEINLINE static uint32 __PPO__defaultMesh() { return STRUCT_OFFSET(ABoof_Player, defaultMesh); }


#define Boof_Core_Source_Boof_Core_Boof_Player_h_18_PROLOG
#define Boof_Core_Source_Boof_Core_Boof_Player_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Boof_Core_Source_Boof_Core_Boof_Player_h_21_PRIVATE_PROPERTY_OFFSET \
	Boof_Core_Source_Boof_Core_Boof_Player_h_21_RPC_WRAPPERS \
	Boof_Core_Source_Boof_Core_Boof_Player_h_21_INCLASS \
	Boof_Core_Source_Boof_Core_Boof_Player_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Boof_Core_Source_Boof_Core_Boof_Player_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Boof_Core_Source_Boof_Core_Boof_Player_h_21_PRIVATE_PROPERTY_OFFSET \
	Boof_Core_Source_Boof_Core_Boof_Player_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Boof_Core_Source_Boof_Core_Boof_Player_h_21_INCLASS_NO_PURE_DECLS \
	Boof_Core_Source_Boof_Core_Boof_Player_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Boof_Core_Source_Boof_Core_Boof_Player_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
