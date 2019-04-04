// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CameraTypes_generated_h
#error "CameraTypes.generated.h already included, missing '#pragma once' in CameraTypes.h"
#endif
#define ENGINE_CameraTypes_generated_h

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraTypes_h_40_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Camera_CameraTypes_h


#define FOREACH_ENUM_ECAMERAANIMPLAYSPACE(op) \
	op(ECameraAnimPlaySpace::CameraLocal) \
	op(ECameraAnimPlaySpace::World) \
	op(ECameraAnimPlaySpace::UserDefined) 
#define FOREACH_ENUM_ECAMERAPROJECTIONMODE(op) \
	op(ECameraProjectionMode::Perspective) \
	op(ECameraProjectionMode::Orthographic) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
