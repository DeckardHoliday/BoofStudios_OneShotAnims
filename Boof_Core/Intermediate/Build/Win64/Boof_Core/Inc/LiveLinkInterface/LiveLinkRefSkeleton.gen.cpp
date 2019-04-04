// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LiveLinkRefSkeleton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkRefSkeleton() {}
// Cross Module References
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkRefSkeleton();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References
class UScriptStruct* FLiveLinkRefSkeleton::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkRefSkeleton, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkRefSkeleton"), sizeof(FLiveLinkRefSkeleton), Get_Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkRefSkeleton(FLiveLinkRefSkeleton::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkRefSkeleton"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkRefSkeleton
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkRefSkeleton()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkRefSkeleton")),new UScriptStruct::TCppStructOps<FLiveLinkRefSkeleton>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkRefSkeleton;
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkRefSkeleton()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkRefSkeleton"), sizeof(FLiveLinkRefSkeleton), Get_Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LiveLinkRefSkeleton.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkRefSkeleton>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneParents_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkRefSkeleton.h" },
				{ "ToolTip", "Parent Indices: For each bone it specifies the index of its parent" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneParents = { UE4CodeGen_Private::EPropertyClass::Array, "BoneParents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkRefSkeleton, BoneParents), METADATA_PARAMS(NewProp_BoneParents_MetaData, ARRAY_COUNT(NewProp_BoneParents_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneParents_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "BoneParents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkRefSkeleton.h" },
				{ "ToolTip", "Names of each bone in the skeleton" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneNames = { UE4CodeGen_Private::EPropertyClass::Array, "BoneNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkRefSkeleton, BoneNames), METADATA_PARAMS(NewProp_BoneNames_MetaData, ARRAY_COUNT(NewProp_BoneNames_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "BoneNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneParents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneParents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneNames_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LiveLinkRefSkeleton",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLiveLinkRefSkeleton),
				alignof(FLiveLinkRefSkeleton),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_CRC() { return 3941421837U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
