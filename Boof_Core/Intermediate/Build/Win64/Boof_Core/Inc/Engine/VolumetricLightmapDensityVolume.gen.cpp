// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Lightmass/VolumetricLightmapDensityVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolumetricLightmapDensityVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AVolumetricLightmapDensityVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AVolumetricLightmapDensityVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Interval();
// End Cross Module References
	void AVolumetricLightmapDensityVolume::StaticRegisterNativesAVolumetricLightmapDensityVolume()
	{
	}
	UClass* Z_Construct_UClass_AVolumetricLightmapDensityVolume_NoRegister()
	{
		return AVolumetricLightmapDensityVolume::StaticClass();
	}
	UClass* Z_Construct_UClass_AVolumetricLightmapDensityVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AVolume,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Brush Attachment Physics Volume Brush Physics Object Display Rendering Physics Input Blueprint" },
				{ "IncludePath", "Lightmass/VolumetricLightmapDensityVolume.h" },
				{ "ModuleRelativePath", "Classes/Lightmass/VolumetricLightmapDensityVolume.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "Provides local control over volumetric lightmap density.  Only convex shapes supported." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedMipLevelRange_MetaData[] = {
				{ "Category", "VolumetricLightmapDensityVolume" },
				{ "ModuleRelativePath", "Classes/Lightmass/VolumetricLightmapDensityVolume.h" },
				{ "ToolTip", "The Volumetric Lightmap has 3 mipmaps, where the highest density mipmap (mip0) corresponds to VolumetricLightmapDetailCellSize.\nmip0: DetailCellSize\nmip1: DetailCellSize * 4\nmip2: DetailCellSize * 16\n\nBy default, highest density will be placed around static geometry and static lights, but AllowedMipLevelRange can be used to override this behavior.\nExamples:\n[0, 3] = Volume does nothing\n[1, 3] = Volume removes highest density mip, even near static geometry, which can be useful to save memory ('stat MapBuildData')\n[0, 0] = Volume forces highest density.  Warning: using this on a large area can greatly increase memory and build times!\nWhen multiple volumes overlap, the smallest (highest density) values will be used." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllowedMipLevelRange = { UE4CodeGen_Private::EPropertyClass::Struct, "AllowedMipLevelRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVolumetricLightmapDensityVolume, AllowedMipLevelRange), Z_Construct_UScriptStruct_FInt32Interval, METADATA_PARAMS(NewProp_AllowedMipLevelRange_MetaData, ARRAY_COUNT(NewProp_AllowedMipLevelRange_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllowedMipLevelRange,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AVolumetricLightmapDensityVolume>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AVolumetricLightmapDensityVolume::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(AVolumetricLightmapDensityVolume, 358035939);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVolumetricLightmapDensityVolume(Z_Construct_UClass_AVolumetricLightmapDensityVolume, &AVolumetricLightmapDensityVolume::StaticClass, TEXT("/Script/Engine"), TEXT("AVolumetricLightmapDensityVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVolumetricLightmapDensityVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
