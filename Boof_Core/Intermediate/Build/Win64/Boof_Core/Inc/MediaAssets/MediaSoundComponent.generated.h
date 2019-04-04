// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaPlayer;
struct FSoundAttenuationSettings;
#ifdef MEDIAASSETS_MediaSoundComponent_generated_h
#error "MediaSoundComponent.generated.h already included, missing '#pragma once' in MediaSoundComponent.h"
#endif
#define MEDIAASSETS_MediaSoundComponent_generated_h

#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_49_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMediaPlayer) \
	{ \
		P_GET_OBJECT(UMediaPlayer,Z_Param_NewMediaPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMediaPlayer(Z_Param_NewMediaPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMediaPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMediaPlayer**)Z_Param__Result=P_THIS->GetMediaPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetAttenuationSettingsToApply) \
	{ \
		P_GET_STRUCT_REF(FSoundAttenuationSettings,Z_Param_Out_OutAttenuationSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_GetAttenuationSettingsToApply(Z_Param_Out_OutAttenuationSettings); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMediaPlayer) \
	{ \
		P_GET_OBJECT(UMediaPlayer,Z_Param_NewMediaPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMediaPlayer(Z_Param_NewMediaPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMediaPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMediaPlayer**)Z_Param__Result=P_THIS->GetMediaPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetAttenuationSettingsToApply) \
	{ \
		P_GET_STRUCT_REF(FSoundAttenuationSettings,Z_Param_Out_OutAttenuationSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_GetAttenuationSettingsToApply(Z_Param_Out_OutAttenuationSettings); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaSoundComponent(); \
	friend MEDIAASSETS_API class UClass* Z_Construct_UClass_UMediaSoundComponent(); \
public: \
	DECLARE_CLASS(UMediaSoundComponent, USynthComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaSoundComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUMediaSoundComponent(); \
	friend MEDIAASSETS_API class UClass* Z_Construct_UClass_UMediaSoundComponent(); \
public: \
	DECLARE_CLASS(UMediaSoundComponent, USynthComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaSoundComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaSoundComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaSoundComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaSoundComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaSoundComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaSoundComponent(UMediaSoundComponent&&); \
	NO_API UMediaSoundComponent(const UMediaSoundComponent&); \
public:


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaSoundComponent(UMediaSoundComponent&&); \
	NO_API UMediaSoundComponent(const UMediaSoundComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaSoundComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaSoundComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaSoundComponent)


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_49_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MediaPlayer() { return STRUCT_OFFSET(UMediaSoundComponent, MediaPlayer); }


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_45_PROLOG
#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_49_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_49_RPC_WRAPPERS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_49_INCLASS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_49_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_49_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h


#define FOREACH_ENUM_EMEDIASOUNDCHANNELS(op) \
	op(EMediaSoundChannels::Mono) \
	op(EMediaSoundChannels::Stereo) \
	op(EMediaSoundChannels::Surround) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
