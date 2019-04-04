// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialFunctionMaterialLayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialFunctionMaterialLayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayer();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInstance();
// End Cross Module References
	void UMaterialFunctionMaterialLayer::StaticRegisterNativesUMaterialFunctionMaterialLayer()
	{
	}
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayer_NoRegister()
	{
		return UMaterialFunctionMaterialLayer::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialFunction,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "object object object" },
				{ "IncludePath", "Materials/MaterialFunctionMaterialLayer.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionMaterialLayer.h" },
				{ "ToolTip", "Specialized Material Function that acts as a layer" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialFunctionMaterialLayer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialFunctionMaterialLayer::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(UMaterialFunctionMaterialLayer, 2345572292);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialFunctionMaterialLayer(Z_Construct_UClass_UMaterialFunctionMaterialLayer, &UMaterialFunctionMaterialLayer::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialFunctionMaterialLayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionMaterialLayer);
	void UMaterialFunctionMaterialLayerInstance::StaticRegisterNativesUMaterialFunctionMaterialLayerInstance()
	{
	}
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance_NoRegister()
	{
		return UMaterialFunctionMaterialLayerInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialFunctionInstance,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "object object object" },
				{ "IncludePath", "Materials/MaterialFunctionMaterialLayer.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionMaterialLayer.h" },
				{ "ToolTip", "Specialized Material Function Instance that instances a layer" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialFunctionMaterialLayerInstance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialFunctionMaterialLayerInstance::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(UMaterialFunctionMaterialLayerInstance, 2411951693);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialFunctionMaterialLayerInstance(Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance, &UMaterialFunctionMaterialLayerInstance::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialFunctionMaterialLayerInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionMaterialLayerInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
