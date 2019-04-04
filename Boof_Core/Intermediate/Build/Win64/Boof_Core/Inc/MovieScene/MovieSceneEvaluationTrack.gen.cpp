// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Evaluation/MovieSceneEvaluationTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationTrack() {}
// Cross Module References
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EEvaluationMethod();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FSectionEvaluationDataTree();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSegment();
// End Cross Module References
	static UEnum* EEvaluationMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EEvaluationMethod, Z_Construct_UPackage__Script_MovieScene(), TEXT("EEvaluationMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEvaluationMethod(EEvaluationMethod_StaticEnum, TEXT("/Script/MovieScene"), TEXT("EEvaluationMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieScene_EEvaluationMethod_CRC() { return 1802993653U; }
	UEnum* Z_Construct_UEnum_MovieScene_EEvaluationMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEvaluationMethod"), 0, Get_Z_Construct_UEnum_MovieScene_EEvaluationMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEvaluationMethod::Static", (int64)EEvaluationMethod::Static },
				{ "EEvaluationMethod::Swept", (int64)EEvaluationMethod::Swept },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
				{ "Static.ToolTip", "Evaluation only ever occurs at a single time. Delta is irrelevant. Example: Basic curve eval, animation" },
				{ "Swept.ToolTip", "Evaluation from one frame to the next must consider the entire swept delta range on the track. Example: Events" },
				{ "ToolTip", "Enumeration to determine how a track should be evaluated" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEvaluationMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EEvaluationMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMovieSceneEvaluationTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationTrack"), sizeof(FMovieSceneEvaluationTrack), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationTrack(FMovieSceneEvaluationTrack::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationTrack"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationTrack
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationTrack")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationTrack>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationTrack;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationTrack"), sizeof(FMovieSceneEvaluationTrack), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
				{ "ToolTip", "Evaluation track that is stored within an evaluation template for a sequence.\nContains user-defined evaluation templates, and an optional track implementation" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationTrack>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvaluateInPostroll_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
				{ "ToolTip", "Whether this track is evaluated in postroll" },
			};
#endif
			auto NewProp_bEvaluateInPostroll_SetBit = [](void* Obj){ ((FMovieSceneEvaluationTrack*)Obj)->bEvaluateInPostroll = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvaluateInPostroll = { UE4CodeGen_Private::EPropertyClass::Bool, "bEvaluateInPostroll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FMovieSceneEvaluationTrack), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEvaluateInPostroll_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEvaluateInPostroll_MetaData, ARRAY_COUNT(NewProp_bEvaluateInPostroll_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvaluateInPreroll_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
				{ "ToolTip", "Whether this track is evaluated in preroll" },
			};
#endif
			auto NewProp_bEvaluateInPreroll_SetBit = [](void* Obj){ ((FMovieSceneEvaluationTrack*)Obj)->bEvaluateInPreroll = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvaluateInPreroll = { UE4CodeGen_Private::EPropertyClass::Bool, "bEvaluateInPreroll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FMovieSceneEvaluationTrack), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEvaluateInPreroll_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEvaluateInPreroll_MetaData, ARRAY_COUNT(NewProp_bEvaluateInPreroll_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvaluationGroup_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
				{ "ToolTip", "Flush group that determines whether this track belongs to a group of tracks" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_EvaluationGroup = { UE4CodeGen_Private::EPropertyClass::Name, "EvaluationGroup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTrack, EvaluationGroup), METADATA_PARAMS(NewProp_EvaluationGroup_MetaData, ARRAY_COUNT(NewProp_EvaluationGroup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackTemplate_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
				{ "ToolTip", "Domain-specific track implementation override." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackTemplate = { UE4CodeGen_Private::EPropertyClass::Struct, "TrackTemplate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTrack, TrackTemplate), Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr, METADATA_PARAMS(NewProp_TrackTemplate_MetaData, ARRAY_COUNT(NewProp_TrackTemplate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildTemplates_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
				{ "ToolTip", "Domain-specific evaluation templates (normally 1 per section)" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildTemplates = { UE4CodeGen_Private::EPropertyClass::Array, "ChildTemplates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTrack, ChildTemplates), METADATA_PARAMS(NewProp_ChildTemplates_MetaData, ARRAY_COUNT(NewProp_ChildTemplates_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChildTemplates_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ChildTemplates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvaluationTree_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
				{ "ToolTip", "Evaluation tree specifying what happens at any given time." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EvaluationTree = { UE4CodeGen_Private::EPropertyClass::Struct, "EvaluationTree", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTrack, EvaluationTree), Z_Construct_UScriptStruct_FSectionEvaluationDataTree, METADATA_PARAMS(NewProp_EvaluationTree_MetaData, ARRAY_COUNT(NewProp_EvaluationTree_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTrack_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
				{ "NativeConst", "" },
				{ "ToolTip", "The movie scene track that created this evaluation track." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceTrack = { UE4CodeGen_Private::EPropertyClass::Object, "SourceTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTrack, SourceTrack), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(NewProp_SourceTrack_MetaData, ARRAY_COUNT(NewProp_SourceTrack_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
				{ "ToolTip", "Array of segmented ranges contained within the track." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Segments = { UE4CodeGen_Private::EPropertyClass::Struct, "Segments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTrack, Segments), Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments, METADATA_PARAMS(NewProp_Segments_MetaData, ARRAY_COUNT(NewProp_Segments_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvaluationMethod_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
				{ "ToolTip", "Evaluation method - static or swept" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EvaluationMethod = { UE4CodeGen_Private::EPropertyClass::Enum, "EvaluationMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTrack, EvaluationMethod), Z_Construct_UEnum_MovieScene_EEvaluationMethod, METADATA_PARAMS(NewProp_EvaluationMethod_MetaData, ARRAY_COUNT(NewProp_EvaluationMethod_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_EvaluationMethod_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvaluationPriority_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
				{ "ToolTip", "Evaluation priority. Highest is evaluated first" },
			};
#endif
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_EvaluationPriority = { UE4CodeGen_Private::EPropertyClass::UInt16, "EvaluationPriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTrack, EvaluationPriority), METADATA_PARAMS(NewProp_EvaluationPriority_MetaData, ARRAY_COUNT(NewProp_EvaluationPriority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectBindingID_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
				{ "ToolTip", "ID of the possessable or spawnable within the UMovieScene this track belongs to, if any. Zero guid where this relates to a master track." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectBindingID = { UE4CodeGen_Private::EPropertyClass::Struct, "ObjectBindingID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTrack, ObjectBindingID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ObjectBindingID_MetaData, ARRAY_COUNT(NewProp_ObjectBindingID_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEvaluateInPostroll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEvaluateInPreroll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EvaluationGroup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackTemplate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChildTemplates,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChildTemplates_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EvaluationTree,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceTrack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Segments,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EvaluationMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EvaluationMethod_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EvaluationPriority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectBindingID,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneEvaluationTrack",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneEvaluationTrack),
				alignof(FMovieSceneEvaluationTrack),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_CRC() { return 302110291U; }
class UScriptStruct* FMovieSceneEvaluationTrackSegments::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationTrackSegments"), sizeof(FMovieSceneEvaluationTrackSegments), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationTrackSegments(FMovieSceneEvaluationTrackSegments::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationTrackSegments"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationTrackSegments
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationTrackSegments()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationTrackSegments")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationTrackSegments>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationTrackSegments;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationTrackSegments"), sizeof(FMovieSceneEvaluationTrackSegments), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
				{ "ToolTip", "Structure that references a sorted array of segments by indirect identifiers" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationTrackSegments>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortedSegments_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
				{ "ToolTip", "Array of segmented ranges contained within the track." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SortedSegments = { UE4CodeGen_Private::EPropertyClass::Array, "SortedSegments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTrackSegments, SortedSegments), METADATA_PARAMS(NewProp_SortedSegments_MetaData, ARRAY_COUNT(NewProp_SortedSegments_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SortedSegments_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SortedSegments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneSegment, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentIdentifierToIndex_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
				{ "ToolTip", "Array of indices into SortedSegments where each FMovieSceneSegmentIdentifier represents and index into SegmentIdentifierToIndex. Never shuffled until the container is reset." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SegmentIdentifierToIndex = { UE4CodeGen_Private::EPropertyClass::Array, "SegmentIdentifierToIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTrackSegments, SegmentIdentifierToIndex), METADATA_PARAMS(NewProp_SegmentIdentifierToIndex_MetaData, ARRAY_COUNT(NewProp_SegmentIdentifierToIndex_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SegmentIdentifierToIndex_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "SegmentIdentifierToIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SortedSegments,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SortedSegments_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SegmentIdentifierToIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SegmentIdentifierToIndex_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneEvaluationTrackSegments",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneEvaluationTrackSegments),
				alignof(FMovieSceneEvaluationTrackSegments),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTrackSegments_CRC() { return 2796964331U; }
class UScriptStruct* FSectionEvaluationDataTree::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FSectionEvaluationDataTree_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSectionEvaluationDataTree, Z_Construct_UPackage__Script_MovieScene(), TEXT("SectionEvaluationDataTree"), sizeof(FSectionEvaluationDataTree), Get_Z_Construct_UScriptStruct_FSectionEvaluationDataTree_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSectionEvaluationDataTree(FSectionEvaluationDataTree::StaticStruct, TEXT("/Script/MovieScene"), TEXT("SectionEvaluationDataTree"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFSectionEvaluationDataTree
{
	FScriptStruct_MovieScene_StaticRegisterNativesFSectionEvaluationDataTree()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SectionEvaluationDataTree")),new UScriptStruct::TCppStructOps<FSectionEvaluationDataTree>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFSectionEvaluationDataTree;
	UScriptStruct* Z_Construct_UScriptStruct_FSectionEvaluationDataTree()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSectionEvaluationDataTree_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SectionEvaluationDataTree"), sizeof(FSectionEvaluationDataTree), Get_Z_Construct_UScriptStruct_FSectionEvaluationDataTree_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
				{ "ToolTip", "Custom serialized tree of section evaluation data for a track" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSectionEvaluationDataTree>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SectionEvaluationDataTree",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSectionEvaluationDataTree),
				alignof(FSectionEvaluationDataTree),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSectionEvaluationDataTree_CRC() { return 3131664593U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
