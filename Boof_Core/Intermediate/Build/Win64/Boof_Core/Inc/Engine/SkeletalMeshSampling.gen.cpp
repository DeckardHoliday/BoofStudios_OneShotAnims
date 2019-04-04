// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/SkeletalMeshSampling.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshSampling() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData();
// End Cross Module References
class UScriptStruct* FSkeletalMeshSamplingInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshSamplingInfo"), sizeof(FSkeletalMeshSamplingInfo), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMeshSamplingInfo(FSkeletalMeshSamplingInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("SkeletalMeshSamplingInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkeletalMeshSamplingInfo")),new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshSamplingInfo"), sizeof(FSkeletalMeshSamplingInfo), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuiltData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuiltData = { UE4CodeGen_Private::EPropertyClass::Struct, "BuiltData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshSamplingInfo, BuiltData), Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData, METADATA_PARAMS(NewProp_BuiltData_MetaData, ARRAY_COUNT(NewProp_BuiltData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Regions_MetaData[] = {
				{ "Category", "Sampling" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
				{ "ToolTip", "Info defining sampling of named regions on this mesh." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Regions = { UE4CodeGen_Private::EPropertyClass::Array, "Regions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshSamplingInfo, Regions), METADATA_PARAMS(NewProp_Regions_MetaData, ARRAY_COUNT(NewProp_Regions_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Regions_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Regions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BuiltData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Regions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Regions_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SkeletalMeshSamplingInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FSkeletalMeshSamplingInfo),
				alignof(FSkeletalMeshSamplingInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_CRC() { return 3875972099U; }
class UScriptStruct* FSkeletalMeshSamplingRegion::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshSamplingRegion"), sizeof(FSkeletalMeshSamplingRegion), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMeshSamplingRegion(FSkeletalMeshSamplingRegion::StaticStruct, TEXT("/Script/Engine"), TEXT("SkeletalMeshSamplingRegion"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingRegion
{
	FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingRegion()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkeletalMeshSamplingRegion")),new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingRegion>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingRegion;
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshSamplingRegion"), sizeof(FSkeletalMeshSamplingRegion), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
				{ "ToolTip", "Defined a named region on a mesh that will have associated triangles and bones for fast sampling at each enabled LOD." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingRegion>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneFilters_MetaData[] = {
				{ "Category", "Region" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
				{ "ToolTip", "Filters to determine which triangles and bones to include in this region based on bone." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneFilters = { UE4CodeGen_Private::EPropertyClass::Array, "BoneFilters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshSamplingRegion, BoneFilters), METADATA_PARAMS(NewProp_BoneFilters_MetaData, ARRAY_COUNT(NewProp_BoneFilters_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneFilters_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneFilters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialFilters_MetaData[] = {
				{ "Category", "Region" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
				{ "ToolTip", "Filters to determine which triangles to include in this region based on material." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialFilters = { UE4CodeGen_Private::EPropertyClass::Array, "MaterialFilters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshSamplingRegion, MaterialFilters), METADATA_PARAMS(NewProp_MaterialFilters_MetaData, ARRAY_COUNT(NewProp_MaterialFilters_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialFilters_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "MaterialFilters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportUniformlyDistributedSampling_MetaData[] = {
				{ "Category", "Region" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
				{ "ToolTip", "Mesh supports uniformly distributed sampling in constant time.\nMemory cost is 8 bytes per triangle." },
			};
#endif
			auto NewProp_bSupportUniformlyDistributedSampling_SetBit = [](void* Obj){ ((FSkeletalMeshSamplingRegion*)Obj)->bSupportUniformlyDistributedSampling = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportUniformlyDistributedSampling = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportUniformlyDistributedSampling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSkeletalMeshSamplingRegion), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportUniformlyDistributedSampling_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportUniformlyDistributedSampling_MetaData, ARRAY_COUNT(NewProp_bSupportUniformlyDistributedSampling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[] = {
				{ "Category", "Region" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
				{ "ToolTip", "The LOD of the mesh that this region applies to." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LODIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshSamplingRegion, LODIndex), METADATA_PARAMS(NewProp_LODIndex_MetaData, ARRAY_COUNT(NewProp_LODIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "Category", "Region" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
				{ "ToolTip", "Name of this region that users will reference." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshSamplingRegion, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneFilters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneFilters_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialFilters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialFilters_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportUniformlyDistributedSampling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SkeletalMeshSamplingRegion",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FSkeletalMeshSamplingRegion),
				alignof(FSkeletalMeshSamplingRegion),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_CRC() { return 494471724U; }
class UScriptStruct* FSkeletalMeshSamplingRegionMaterialFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshSamplingRegionMaterialFilter"), sizeof(FSkeletalMeshSamplingRegionMaterialFilter), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter(FSkeletalMeshSamplingRegionMaterialFilter::StaticStruct, TEXT("/Script/Engine"), TEXT("SkeletalMeshSamplingRegionMaterialFilter"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingRegionMaterialFilter
{
	FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingRegionMaterialFilter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkeletalMeshSamplingRegionMaterialFilter")),new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingRegionMaterialFilter>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingRegionMaterialFilter;
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshSamplingRegionMaterialFilter"), sizeof(FSkeletalMeshSamplingRegionMaterialFilter), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
				{ "ToolTip", "Filter to include triangles in a sampling region based on their material." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingRegionMaterialFilter>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialName_MetaData[] = {
				{ "Category", "Material Filter" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaterialName = { UE4CodeGen_Private::EPropertyClass::Name, "MaterialName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshSamplingRegionMaterialFilter, MaterialName), METADATA_PARAMS(NewProp_MaterialName_MetaData, ARRAY_COUNT(NewProp_MaterialName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SkeletalMeshSamplingRegionMaterialFilter",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSkeletalMeshSamplingRegionMaterialFilter),
				alignof(FSkeletalMeshSamplingRegionMaterialFilter),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_CRC() { return 2506228047U; }
class UScriptStruct* FSkeletalMeshSamplingRegionBoneFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshSamplingRegionBoneFilter"), sizeof(FSkeletalMeshSamplingRegionBoneFilter), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter(FSkeletalMeshSamplingRegionBoneFilter::StaticStruct, TEXT("/Script/Engine"), TEXT("SkeletalMeshSamplingRegionBoneFilter"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingRegionBoneFilter
{
	FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingRegionBoneFilter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkeletalMeshSamplingRegionBoneFilter")),new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingRegionBoneFilter>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingRegionBoneFilter;
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshSamplingRegionBoneFilter"), sizeof(FSkeletalMeshSamplingRegionBoneFilter), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
				{ "ToolTip", "Filter to include or exclude bones and their associated triangles from a sampling region." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingRegionBoneFilter>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyToChildren_MetaData[] = {
				{ "Category", "Bone Filter" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
				{ "ToolTip", "If true, this filter will apply to all children of this bone as well." },
			};
#endif
			auto NewProp_bApplyToChildren_SetBit = [](void* Obj){ ((FSkeletalMeshSamplingRegionBoneFilter*)Obj)->bApplyToChildren = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyToChildren = { UE4CodeGen_Private::EPropertyClass::Bool, "bApplyToChildren", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSkeletalMeshSamplingRegionBoneFilter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bApplyToChildren_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bApplyToChildren_MetaData, ARRAY_COUNT(NewProp_bApplyToChildren_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeOrExclude_MetaData[] = {
				{ "Category", "Bone Filter" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
				{ "ToolTip", "If true, this filter will include bones. If false, it will exclude them." },
			};
#endif
			auto NewProp_bIncludeOrExclude_SetBit = [](void* Obj){ ((FSkeletalMeshSamplingRegionBoneFilter*)Obj)->bIncludeOrExclude = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeOrExclude = { UE4CodeGen_Private::EPropertyClass::Bool, "bIncludeOrExclude", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSkeletalMeshSamplingRegionBoneFilter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIncludeOrExclude_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIncludeOrExclude_MetaData, ARRAY_COUNT(NewProp_bIncludeOrExclude_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
				{ "Category", "Bone Filter" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshSamplingRegionBoneFilter, BoneName), METADATA_PARAMS(NewProp_BoneName_MetaData, ARRAY_COUNT(NewProp_BoneName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bApplyToChildren,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIncludeOrExclude,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SkeletalMeshSamplingRegionBoneFilter",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSkeletalMeshSamplingRegionBoneFilter),
				alignof(FSkeletalMeshSamplingRegionBoneFilter),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_CRC() { return 1783810072U; }
class UScriptStruct* FSkeletalMeshSamplingBuiltData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshSamplingBuiltData"), sizeof(FSkeletalMeshSamplingBuiltData), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMeshSamplingBuiltData(FSkeletalMeshSamplingBuiltData::StaticStruct, TEXT("/Script/Engine"), TEXT("SkeletalMeshSamplingBuiltData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingBuiltData
{
	FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingBuiltData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkeletalMeshSamplingBuiltData")),new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingBuiltData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingBuiltData;
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshSamplingBuiltData"), sizeof(FSkeletalMeshSamplingBuiltData), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingBuiltData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegionBuiltData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RegionBuiltData = { UE4CodeGen_Private::EPropertyClass::Array, "RegionBuiltData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshSamplingBuiltData, RegionBuiltData), METADATA_PARAMS(NewProp_RegionBuiltData_MetaData, ARRAY_COUNT(NewProp_RegionBuiltData_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RegionBuiltData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "RegionBuiltData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WholeMeshBuiltData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WholeMeshBuiltData = { UE4CodeGen_Private::EPropertyClass::Array, "WholeMeshBuiltData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshSamplingBuiltData, WholeMeshBuiltData), METADATA_PARAMS(NewProp_WholeMeshBuiltData_MetaData, ARRAY_COUNT(NewProp_WholeMeshBuiltData_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WholeMeshBuiltData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "WholeMeshBuiltData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RegionBuiltData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RegionBuiltData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WholeMeshBuiltData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WholeMeshBuiltData_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SkeletalMeshSamplingBuiltData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FSkeletalMeshSamplingBuiltData),
				alignof(FSkeletalMeshSamplingBuiltData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_CRC() { return 1375581085U; }
class UScriptStruct* FSkeletalMeshSamplingLODBuiltData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshSamplingLODBuiltData"), sizeof(FSkeletalMeshSamplingLODBuiltData), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData(FSkeletalMeshSamplingLODBuiltData::StaticStruct, TEXT("/Script/Engine"), TEXT("SkeletalMeshSamplingLODBuiltData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingLODBuiltData
{
	FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingLODBuiltData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkeletalMeshSamplingLODBuiltData")),new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingLODBuiltData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingLODBuiltData;
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshSamplingLODBuiltData"), sizeof(FSkeletalMeshSamplingLODBuiltData), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
				{ "ToolTip", "Built data for sampling a the whole mesh at a particular LOD." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingLODBuiltData>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SkeletalMeshSamplingLODBuiltData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FSkeletalMeshSamplingLODBuiltData),
				alignof(FSkeletalMeshSamplingLODBuiltData),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData_CRC() { return 2748719033U; }
class UScriptStruct* FSkeletalMeshSamplingRegionBuiltData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshSamplingRegionBuiltData"), sizeof(FSkeletalMeshSamplingRegionBuiltData), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData(FSkeletalMeshSamplingRegionBuiltData::StaticStruct, TEXT("/Script/Engine"), TEXT("SkeletalMeshSamplingRegionBuiltData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingRegionBuiltData
{
	FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingRegionBuiltData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkeletalMeshSamplingRegionBuiltData")),new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingRegionBuiltData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingRegionBuiltData;
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshSamplingRegionBuiltData"), sizeof(FSkeletalMeshSamplingRegionBuiltData), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
				{ "ToolTip", "Built data for sampling a single region of a skeletal mesh." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingRegionBuiltData>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SkeletalMeshSamplingRegionBuiltData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FSkeletalMeshSamplingRegionBuiltData),
				alignof(FSkeletalMeshSamplingRegionBuiltData),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData_CRC() { return 61172212U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
