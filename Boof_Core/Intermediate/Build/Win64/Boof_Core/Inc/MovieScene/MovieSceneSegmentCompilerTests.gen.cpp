// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/Tests/MovieSceneSegmentCompilerTests.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSegmentCompilerTests() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSegmentCompilerTestTrack_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSegmentCompilerTestTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSegmentCompilerTestSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSegmentCompilerTestSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
// End Cross Module References
class UScriptStruct* FTestMovieSceneEvalTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate, Z_Construct_UPackage__Script_MovieScene(), TEXT("TestMovieSceneEvalTemplate"), sizeof(FTestMovieSceneEvalTemplate), Get_Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTestMovieSceneEvalTemplate(FTestMovieSceneEvalTemplate::StaticStruct, TEXT("/Script/MovieScene"), TEXT("TestMovieSceneEvalTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFTestMovieSceneEvalTemplate
{
	FScriptStruct_MovieScene_StaticRegisterNativesFTestMovieSceneEvalTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TestMovieSceneEvalTemplate")),new UScriptStruct::TCppStructOps<FTestMovieSceneEvalTemplate>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFTestMovieSceneEvalTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TestMovieSceneEvalTemplate"), sizeof(FTestMovieSceneEvalTemplate), Get_Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Tests/MovieSceneSegmentCompilerTests.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestMovieSceneEvalTemplate>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TestMovieSceneEvalTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FTestMovieSceneEvalTemplate),
				alignof(FTestMovieSceneEvalTemplate),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_CRC() { return 1199615613U; }
	void UMovieSceneSegmentCompilerTestTrack::StaticRegisterNativesUMovieSceneSegmentCompilerTestTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneSegmentCompilerTestTrack_NoRegister()
	{
		return UMovieSceneSegmentCompilerTestTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneSegmentCompilerTestTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneTrack,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Tests/MovieSceneSegmentCompilerTests.h" },
				{ "ModuleRelativePath", "Private/Tests/MovieSceneSegmentCompilerTests.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionArray_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Private/Tests/MovieSceneSegmentCompilerTests.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SectionArray = { UE4CodeGen_Private::EPropertyClass::Array, "SectionArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000008, 1, nullptr, STRUCT_OFFSET(UMovieSceneSegmentCompilerTestTrack, SectionArray), METADATA_PARAMS(NewProp_SectionArray_MetaData, ARRAY_COUNT(NewProp_SectionArray_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SectionArray_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SectionArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHighPassFilter_MetaData[] = {
				{ "ModuleRelativePath", "Private/Tests/MovieSceneSegmentCompilerTests.h" },
			};
#endif
			auto NewProp_bHighPassFilter_SetBit = [](void* Obj){ ((UMovieSceneSegmentCompilerTestTrack*)Obj)->bHighPassFilter = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHighPassFilter = { UE4CodeGen_Private::EPropertyClass::Bool, "bHighPassFilter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMovieSceneSegmentCompilerTestTrack), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHighPassFilter_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHighPassFilter_MetaData, ARRAY_COUNT(NewProp_bHighPassFilter_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionArray_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHighPassFilter,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneSegmentCompilerTestTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneSegmentCompilerTestTrack::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A80080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneSegmentCompilerTestTrack, 2325681439);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSegmentCompilerTestTrack(Z_Construct_UClass_UMovieSceneSegmentCompilerTestTrack, &UMovieSceneSegmentCompilerTestTrack::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneSegmentCompilerTestTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSegmentCompilerTestTrack);
	void UMovieSceneSegmentCompilerTestSection::StaticRegisterNativesUMovieSceneSegmentCompilerTestSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneSegmentCompilerTestSection_NoRegister()
	{
		return UMovieSceneSegmentCompilerTestSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneSegmentCompilerTestSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Tests/MovieSceneSegmentCompilerTests.h" },
				{ "ModuleRelativePath", "Private/Tests/MovieSceneSegmentCompilerTests.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneSegmentCompilerTestSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneSegmentCompilerTestSection::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00280080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneSegmentCompilerTestSection, 314330141);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSegmentCompilerTestSection(Z_Construct_UClass_UMovieSceneSegmentCompilerTestSection, &UMovieSceneSegmentCompilerTestSection::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneSegmentCompilerTestSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSegmentCompilerTestSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
