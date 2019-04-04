// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Evaluation/MovieSceneSequenceInstanceData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceInstanceData() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData();
// End Cross Module References
class UScriptStruct* FMovieSceneSequenceInstanceDataPtr::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceInstanceDataPtr"), sizeof(FMovieSceneSequenceInstanceDataPtr), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr(FMovieSceneSequenceInstanceDataPtr::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSequenceInstanceDataPtr"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceInstanceDataPtr
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceInstanceDataPtr()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSequenceInstanceDataPtr")),new UScriptStruct::TCppStructOps<FMovieSceneSequenceInstanceDataPtr>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceInstanceDataPtr;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSequenceInstanceDataPtr"), sizeof(FMovieSceneSequenceInstanceDataPtr), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceInstanceData.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceInstanceDataPtr>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneSequenceInstanceDataPtr",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FMovieSceneSequenceInstanceDataPtr),
				alignof(FMovieSceneSequenceInstanceDataPtr),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_CRC() { return 1896845381U; }
class UScriptStruct* FMovieSceneSequenceInstanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceInstanceData"), sizeof(FMovieSceneSequenceInstanceData), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSequenceInstanceData(FMovieSceneSequenceInstanceData::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSequenceInstanceData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceInstanceData
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceInstanceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSequenceInstanceData")),new UScriptStruct::TCppStructOps<FMovieSceneSequenceInstanceData>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceInstanceData;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSequenceInstanceData"), sizeof(FMovieSceneSequenceInstanceData), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceInstanceData.h" },
				{ "ToolTip", "Abstract base class that defines instance data for sub sequences" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceInstanceData>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneSequenceInstanceData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneSequenceInstanceData),
				alignof(FMovieSceneSequenceInstanceData),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_CRC() { return 1256110019U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
