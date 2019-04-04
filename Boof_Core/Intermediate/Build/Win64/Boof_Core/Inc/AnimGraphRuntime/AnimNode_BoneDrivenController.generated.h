// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimNode_BoneDrivenController_generated_h
#error "AnimNode_BoneDrivenController.generated.h already included, missing '#pragma once' in AnimNode_BoneDrivenController.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_BoneDrivenController_generated_h

#define Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_BoneDrivenController_h_67_GENERATED_BODY \
	friend ANIMGRAPHRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController(); \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__TargetComponent_DEPRECATED() { return STRUCT_OFFSET(FAnimNode_BoneDrivenController, TargetComponent_DEPRECATED); } \
	typedef FAnimNode_SkeletalControlBase Super;


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_BoneDrivenController_h


#define FOREACH_ENUM_EDRIVENDESTINATIONMODE(op) \
	op(EDrivenDestinationMode::Bone) \
	op(EDrivenDestinationMode::MorphTarget) \
	op(EDrivenDestinationMode::MaterialParameter) 
#define FOREACH_ENUM_EDRIVENBONEMODIFICATIONMODE(op) \
	op(EDrivenBoneModificationMode::AddToInput) \
	op(EDrivenBoneModificationMode::ReplaceComponent) \
	op(EDrivenBoneModificationMode::AddToRefPose) 
#define FOREACH_ENUM_ECOMPONENTTYPE(op) \
	op(EComponentType::None) \
	op(EComponentType::TranslationX) \
	op(EComponentType::TranslationY) \
	op(EComponentType::TranslationZ) \
	op(EComponentType::RotationX) \
	op(EComponentType::RotationY) \
	op(EComponentType::RotationZ) \
	op(EComponentType::Scale) \
	op(EComponentType::ScaleX) \
	op(EComponentType::ScaleY) \
	op(EComponentType::ScaleZ) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
