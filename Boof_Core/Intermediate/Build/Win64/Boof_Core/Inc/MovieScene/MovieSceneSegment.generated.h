// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneSegment_generated_h
#error "MovieSceneSegment.generated.h already included, missing '#pragma once' in MovieSceneSegment.h"
#endif
#define MOVIESCENE_MovieSceneSegment_generated_h

#define Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSegment_h_144_GENERATED_BODY \
	friend MOVIESCENE_API class UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSegment(); \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSegment_h_83_GENERATED_BODY \
	friend MOVIESCENE_API class UScriptStruct* Z_Construct_UScriptStruct_FSectionEvaluationData(); \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSegment_h_32_GENERATED_BODY \
	friend MOVIESCENE_API class UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier(); \
	MOVIESCENE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__IdentifierIndex() { return STRUCT_OFFSET(FMovieSceneSegmentIdentifier, IdentifierIndex); }


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSegment_h


#define FOREACH_ENUM_ESECTIONEVALUATIONFLAGS(op) \
	op(ESectionEvaluationFlags::None) \
	op(ESectionEvaluationFlags::PreRoll) \
	op(ESectionEvaluationFlags::PostRoll) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
