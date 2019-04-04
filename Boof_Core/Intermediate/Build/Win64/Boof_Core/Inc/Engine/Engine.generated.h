// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Engine_generated_h
#error "Engine.generated.h already included, missing '#pragma once' in Engine.h"
#endif
#define ENGINE_Engine_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_574_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FPluginRedirect(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_561_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FStructRedirect(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_530_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FClassRedirect(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_517_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FGameNameRedirect(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_477_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FScreenMessageString(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_448_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FDropNoteInfo(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_424_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FStatColorMapping(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_403_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FStatColorMapEntry(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_269_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FWorldContext(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_221_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FNamedNetDriver(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_191_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FNetDriverDefinition(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_155_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FLevelStreamingStatus(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_124_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_607_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_607_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_607_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEngine(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UEngine(); \
public: \
	DECLARE_CLASS(UEngine, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UEngine) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_607_INCLASS \
private: \
	static void StaticRegisterNativesUEngine(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UEngine(); \
public: \
	DECLARE_CLASS(UEngine, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UEngine) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_607_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEngine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEngine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEngine(UEngine&&); \
	NO_API UEngine(const UEngine&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_607_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEngine(UEngine&&); \
	NO_API UEngine(const UEngine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEngine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEngine)


#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_607_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TinyFont() { return STRUCT_OFFSET(UEngine, TinyFont); } \
	FORCEINLINE static uint32 __PPO__SmallFont() { return STRUCT_OFFSET(UEngine, SmallFont); } \
	FORCEINLINE static uint32 __PPO__MediumFont() { return STRUCT_OFFSET(UEngine, MediumFont); } \
	FORCEINLINE static uint32 __PPO__LargeFont() { return STRUCT_OFFSET(UEngine, LargeFont); } \
	FORCEINLINE static uint32 __PPO__SubtitleFont() { return STRUCT_OFFSET(UEngine, SubtitleFont); } \
	FORCEINLINE static uint32 __PPO__AdditionalFonts() { return STRUCT_OFFSET(UEngine, AdditionalFonts); } \
	FORCEINLINE static uint32 __PPO__DefaultSelectedMaterialColor() { return STRUCT_OFFSET(UEngine, DefaultSelectedMaterialColor); } \
	FORCEINLINE static uint32 __PPO__SelectedMaterialColor() { return STRUCT_OFFSET(UEngine, SelectedMaterialColor); } \
	FORCEINLINE static uint32 __PPO__SelectionOutlineColor() { return STRUCT_OFFSET(UEngine, SelectionOutlineColor); } \
	FORCEINLINE static uint32 __PPO__SubduedSelectionOutlineColor() { return STRUCT_OFFSET(UEngine, SubduedSelectionOutlineColor); } \
	FORCEINLINE static uint32 __PPO__SelectedMaterialColorOverride() { return STRUCT_OFFSET(UEngine, SelectedMaterialColorOverride); } \
	FORCEINLINE static uint32 __PPO__bIsOverridingSelectedColor() { return STRUCT_OFFSET(UEngine, bIsOverridingSelectedColor); } \
	FORCEINLINE static uint32 __PPO__ScreenSaverInhibitorSemaphore() { return STRUCT_OFFSET(UEngine, ScreenSaverInhibitorSemaphore); } \
	FORCEINLINE static uint32 __PPO__NextWorldContextHandle() { return STRUCT_OFFSET(UEngine, NextWorldContextHandle); }


#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_602_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_607_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_607_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_607_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_607_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_607_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_607_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_607_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_607_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_607_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_607_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Engine."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_Engine_h


#define FOREACH_ENUM_ECONSOLETYPE(op) \
	op(CONSOLE_Any) \
	op(CONSOLE_Mobile) 
#define FOREACH_ENUM_ETRANSITIONTYPE(op) \
	op(TT_None) \
	op(TT_Paused) \
	op(TT_Loading) \
	op(TT_Saving) \
	op(TT_Connecting) \
	op(TT_Precaching) \
	op(TT_WaitingToConnect) 
#define FOREACH_ENUM_EFULLYLOADPACKAGETYPE(op) \
	op(FULLYLOAD_Map) \
	op(FULLYLOAD_Game_PreLoadClass) \
	op(FULLYLOAD_Game_PostLoadClass) \
	op(FULLYLOAD_Always) \
	op(FULLYLOAD_Mutator) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
