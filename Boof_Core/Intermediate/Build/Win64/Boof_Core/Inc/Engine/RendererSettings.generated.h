// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RendererSettings_generated_h
#error "RendererSettings.generated.h already included, missing '#pragma once' in RendererSettings.h"
#endif
#define ENGINE_RendererSettings_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_115_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_115_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURendererSettings(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_URendererSettings(); \
public: \
	DECLARE_CLASS(URendererSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(URendererSettings) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_115_INCLASS \
private: \
	static void StaticRegisterNativesURendererSettings(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_URendererSettings(); \
public: \
	DECLARE_CLASS(URendererSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(URendererSettings) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_115_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URendererSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URendererSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URendererSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URendererSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URendererSettings(URendererSettings&&); \
	NO_API URendererSettings(const URendererSettings&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_115_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URendererSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URendererSettings(URendererSettings&&); \
	NO_API URendererSettings(const URendererSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URendererSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URendererSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URendererSettings)


#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_115_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_112_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_115_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_115_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_115_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_115_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_115_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_115_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_115_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_115_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RendererSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_593_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_593_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_593_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURendererOverrideSettings(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_URendererOverrideSettings(); \
public: \
	DECLARE_CLASS(URendererOverrideSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_GlobalUserConfig | CLASS_Config), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(URendererOverrideSettings) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_593_INCLASS \
private: \
	static void StaticRegisterNativesURendererOverrideSettings(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_URendererOverrideSettings(); \
public: \
	DECLARE_CLASS(URendererOverrideSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_GlobalUserConfig | CLASS_Config), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(URendererOverrideSettings) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_593_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URendererOverrideSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URendererOverrideSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URendererOverrideSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URendererOverrideSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URendererOverrideSettings(URendererOverrideSettings&&); \
	NO_API URendererOverrideSettings(const URendererOverrideSettings&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_593_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URendererOverrideSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URendererOverrideSettings(URendererOverrideSettings&&); \
	NO_API URendererOverrideSettings(const URendererOverrideSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URendererOverrideSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URendererOverrideSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URendererOverrideSettings)


#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_593_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_590_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_593_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_593_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_593_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_593_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_593_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_593_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_593_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_593_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_593_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_593_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RendererOverrideSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h


#define FOREACH_ENUM_EAUTOEXPOSUREMETHODUI(op) \
	op(EAutoExposureMethodUI::AEM_Histogram) \
	op(EAutoExposureMethodUI::AEM_Basic) \
	op(EAutoExposureMethodUI::AEM_Manual) 
#define FOREACH_ENUM_EEARLYZPASS(op) \
	op(EEarlyZPass::None) \
	op(EEarlyZPass::OpaqueOnly) \
	op(EEarlyZPass::OpaqueAndMasked) \
	op(EEarlyZPass::Auto) 
#define FOREACH_ENUM_ECUSTOMDEPTHSTENCIL(op) \
	op(ECustomDepthStencil::Disabled) \
	op(ECustomDepthStencil::Enabled) \
	op(ECustomDepthStencil::EnabledOnDemand) \
	op(ECustomDepthStencil::EnabledWithStencil) 
#define FOREACH_ENUM_EMOBILEMSAASAMPLECOUNT(op) \
	op(EMobileMSAASampleCount::One) \
	op(EMobileMSAASampleCount::Two) \
	op(EMobileMSAASampleCount::Four) \
	op(EMobileMSAASampleCount::Eight) 
#define FOREACH_ENUM_ECOMPOSITINGSAMPLECOUNT(op) \
	op(ECompositingSampleCount::One) \
	op(ECompositingSampleCount::Two) \
	op(ECompositingSampleCount::Four) \
	op(ECompositingSampleCount::Eight) 
#define FOREACH_ENUM_ECLEARSCENEOPTIONS(op) \
	op(EClearSceneOptions::NoClear) \
	op(EClearSceneOptions::HardwareClear) \
	op(EClearSceneOptions::QuadAtMaxZ) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
