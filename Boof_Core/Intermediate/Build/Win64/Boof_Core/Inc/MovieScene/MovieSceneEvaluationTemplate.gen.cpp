// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Evaluation/MovieSceneEvaluationTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationTemplate() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackFieldData();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationField();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSectionData();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
// End Cross Module References
class UScriptStruct* FMovieSceneEvaluationTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationTemplate"), sizeof(FMovieSceneEvaluationTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationTemplate(FMovieSceneEvaluationTemplate::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationTemplate
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationTemplate>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationTemplate"), sizeof(FMovieSceneEvaluationTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
				{ "ToolTip", "Template that is used for efficient runtime evaluation of a movie scene sequence. Potentially serialized into the asset." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubSectionFieldData_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubSectionFieldData = { UE4CodeGen_Private::EPropertyClass::Struct, "SubSectionFieldData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTemplate, SubSectionFieldData), Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData, METADATA_PARAMS(NewProp_SubSectionFieldData_MetaData, ARRAY_COUNT(NewProp_SubSectionFieldData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackFieldData_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackFieldData = { UE4CodeGen_Private::EPropertyClass::Struct, "TrackFieldData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTemplate, TrackFieldData), Z_Construct_UScriptStruct_FMovieSceneTrackFieldData, METADATA_PARAMS(NewProp_TrackFieldData_MetaData, ARRAY_COUNT(NewProp_TrackFieldData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateLedger_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TemplateLedger = { UE4CodeGen_Private::EPropertyClass::Struct, "TemplateLedger", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTemplate, TemplateLedger), Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger, METADATA_PARAMS(NewProp_TemplateLedger_MetaData, ARRAY_COUNT(NewProp_TemplateLedger_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceSignature_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SequenceSignature = { UE4CodeGen_Private::EPropertyClass::Struct, "SequenceSignature", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTemplate, SequenceSignature), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_SequenceSignature_MetaData, ARRAY_COUNT(NewProp_SequenceSignature_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hierarchy_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
				{ "ToolTip", "Map of all sequences found in this template (recursively)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hierarchy = { UE4CodeGen_Private::EPropertyClass::Struct, "Hierarchy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTemplate, Hierarchy), Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy, METADATA_PARAMS(NewProp_Hierarchy_MetaData, ARRAY_COUNT(NewProp_Hierarchy_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvaluationField_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
				{ "ToolTip", "Evaluation field for efficient runtime evaluation" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EvaluationField = { UE4CodeGen_Private::EPropertyClass::Struct, "EvaluationField", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTemplate, EvaluationField), Z_Construct_UScriptStruct_FMovieSceneEvaluationField, METADATA_PARAMS(NewProp_EvaluationField_MetaData, ARRAY_COUNT(NewProp_EvaluationField_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
				{ "ToolTip", "Map of evaluation tracks from identifier to track" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_Tracks = { UE4CodeGen_Private::EPropertyClass::Map, "Tracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040008000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTemplate, Tracks), METADATA_PARAMS(NewProp_Tracks_MetaData, ARRAY_COUNT(NewProp_Tracks_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tracks_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Struct, "Tracks_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tracks_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "Tracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubSectionFieldData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackFieldData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TemplateLedger,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SequenceSignature,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hierarchy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EvaluationField,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tracks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tracks_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tracks_ValueProp,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneEvaluationTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneEvaluationTemplate),
				alignof(FMovieSceneEvaluationTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_CRC() { return 744904953U; }
class UScriptStruct* FMovieSceneSubSectionFieldData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSubSectionFieldData"), sizeof(FMovieSceneSubSectionFieldData), Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSubSectionFieldData(FMovieSceneSubSectionFieldData::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSubSectionFieldData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSubSectionFieldData
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSubSectionFieldData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSubSectionFieldData")),new UScriptStruct::TCppStructOps<FMovieSceneSubSectionFieldData>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSubSectionFieldData;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSubSectionFieldData"), sizeof(FMovieSceneSubSectionFieldData), Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
				{ "ToolTip", "Custom serialized track field data that allows efficient lookup of each sub section contained within this template for a given time" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSubSectionFieldData>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneSubSectionFieldData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneSubSectionFieldData),
				alignof(FMovieSceneSubSectionFieldData),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData_CRC() { return 1031143400U; }
class UScriptStruct* FMovieSceneSubSectionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSubSectionData, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSubSectionData"), sizeof(FMovieSceneSubSectionData), Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSubSectionData(FMovieSceneSubSectionData::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSubSectionData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSubSectionData
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSubSectionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSubSectionData")),new UScriptStruct::TCppStructOps<FMovieSceneSubSectionData>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSubSectionData;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSectionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSubSectionData"), sizeof(FMovieSceneSubSectionData), Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
				{ "ToolTip", "Data that represents a single sub-section" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSubSectionData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
				{ "ToolTip", "Evaluation flags for the section" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flags = { UE4CodeGen_Private::EPropertyClass::Enum, "Flags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSectionData, Flags), Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags, METADATA_PARAMS(NewProp_Flags_MetaData, ARRAY_COUNT(NewProp_Flags_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flags_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectBindingId_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
				{ "ToolTip", "The object binding that the sub section belongs to (usually zero)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectBindingId = { UE4CodeGen_Private::EPropertyClass::Struct, "ObjectBindingId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSectionData, ObjectBindingId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ObjectBindingId_MetaData, ARRAY_COUNT(NewProp_ObjectBindingId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
				{ "ToolTip", "The sub section itself" },
			};
#endif
			static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Section = { UE4CodeGen_Private::EPropertyClass::WeakObject, "Section", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000080008, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSectionData, Section), Z_Construct_UClass_UMovieSceneSubSection_NoRegister, METADATA_PARAMS(NewProp_Section_MetaData, ARRAY_COUNT(NewProp_Section_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Flags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Flags_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectBindingId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Section,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneSubSectionData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneSubSectionData),
				alignof(FMovieSceneSubSectionData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionData_CRC() { return 163901281U; }
class UScriptStruct* FMovieSceneTrackFieldData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackFieldData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackFieldData, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackFieldData"), sizeof(FMovieSceneTrackFieldData), Get_Z_Construct_UScriptStruct_FMovieSceneTrackFieldData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTrackFieldData(FMovieSceneTrackFieldData::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneTrackFieldData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackFieldData
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackFieldData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneTrackFieldData")),new UScriptStruct::TCppStructOps<FMovieSceneTrackFieldData>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackFieldData;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackFieldData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackFieldData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTrackFieldData"), sizeof(FMovieSceneTrackFieldData), Get_Z_Construct_UScriptStruct_FMovieSceneTrackFieldData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
				{ "ToolTip", "Custom serialized track field data that allows efficient lookup of each track contained within this template for a given time" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackFieldData>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneTrackFieldData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneTrackFieldData),
				alignof(FMovieSceneTrackFieldData),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackFieldData_CRC() { return 1088328960U; }
class UScriptStruct* FMovieSceneTemplateGenerationLedger::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTemplateGenerationLedger"), sizeof(FMovieSceneTemplateGenerationLedger), Get_Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTemplateGenerationLedger(FMovieSceneTemplateGenerationLedger::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneTemplateGenerationLedger"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTemplateGenerationLedger
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTemplateGenerationLedger()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneTemplateGenerationLedger")),new UScriptStruct::TCppStructOps<FMovieSceneTemplateGenerationLedger>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTemplateGenerationLedger;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTemplateGenerationLedger"), sizeof(FMovieSceneTemplateGenerationLedger), Get_Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTemplateGenerationLedger>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubSectionRanges_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
				{ "ToolTip", "Map of sub section ranges that exist in a template" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_SubSectionRanges = { UE4CodeGen_Private::EPropertyClass::Map, "SubSectionRanges", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneTemplateGenerationLedger, SubSectionRanges), METADATA_PARAMS(NewProp_SubSectionRanges_MetaData, ARRAY_COUNT(NewProp_SubSectionRanges_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubSectionRanges_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Struct, "SubSectionRanges_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubSectionRanges_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "SubSectionRanges", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackSignatureToTrackIdentifier_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
				{ "ToolTip", "Map of track signature to array of track identifiers that it created" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_TrackSignatureToTrackIdentifier = { UE4CodeGen_Private::EPropertyClass::Map, "TrackSignatureToTrackIdentifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneTemplateGenerationLedger, TrackSignatureToTrackIdentifier), METADATA_PARAMS(NewProp_TrackSignatureToTrackIdentifier_MetaData, ARRAY_COUNT(NewProp_TrackSignatureToTrackIdentifier_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackSignatureToTrackIdentifier_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Struct, "TrackSignatureToTrackIdentifier_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackSignatureToTrackIdentifier_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "TrackSignatureToTrackIdentifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastTrackIdentifier_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastTrackIdentifier = { UE4CodeGen_Private::EPropertyClass::Struct, "LastTrackIdentifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneTemplateGenerationLedger, LastTrackIdentifier), Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier, METADATA_PARAMS(NewProp_LastTrackIdentifier_MetaData, ARRAY_COUNT(NewProp_LastTrackIdentifier_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubSectionRanges,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubSectionRanges_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubSectionRanges_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackSignatureToTrackIdentifier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackSignatureToTrackIdentifier_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackSignatureToTrackIdentifier_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastTrackIdentifier,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneTemplateGenerationLedger",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneTemplateGenerationLedger),
				alignof(FMovieSceneTemplateGenerationLedger),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_CRC() { return 358050895U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
