// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionMaterialLayerOutput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionMaterialLayerOutput() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFunctionOutput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionMaterialLayerOutput::StaticRegisterNativesUMaterialExpressionMaterialLayerOutput()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_NoRegister()
	{
		return UMaterialExpressionMaterialLayerOutput::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpressionFunctionOutput,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "object object Object" },
				{ "IncludePath", "Materials/MaterialExpressionMaterialLayerOutput.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialLayerOutput.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionMaterialLayerOutput>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionMaterialLayerOutput::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionMaterialLayerOutput, 4252908914);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionMaterialLayerOutput(Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput, &UMaterialExpressionMaterialLayerOutput::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionMaterialLayerOutput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionMaterialLayerOutput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
