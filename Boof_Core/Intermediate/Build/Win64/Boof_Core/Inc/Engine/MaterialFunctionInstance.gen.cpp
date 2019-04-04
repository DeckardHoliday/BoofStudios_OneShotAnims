// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialFunctionInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialFunctionInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInstance();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticComponentMaskParameter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticSwitchParameter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFontParameterValue();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureParameterValue();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorParameterValue();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterValue();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister();
// End Cross Module References
	void UMaterialFunctionInstance::StaticRegisterNativesUMaterialFunctionInstance()
	{
	}
	UClass* Z_Construct_UClass_UMaterialFunctionInstance_NoRegister()
	{
		return UMaterialFunctionInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialFunctionInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialFunctionInterface,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "object object" },
				{ "IncludePath", "Materials/MaterialFunctionInstance.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
				{ "ToolTip", "A material function instance defines parameter overrides for a parent material function." },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterial_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "PreviewMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080800002000, 1, nullptr, STRUCT_OFFSET(UMaterialFunctionInstance, PreviewMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(NewProp_PreviewMaterial_MetaData, ARRAY_COUNT(NewProp_PreviewMaterial_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticComponentMaskParameterValues_MetaData[] = {
				{ "Category", "MaterialFunctionInstance" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
				{ "ToolTip", "Static component mask parameters." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StaticComponentMaskParameterValues = { UE4CodeGen_Private::EPropertyClass::Array, "StaticComponentMaskParameterValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialFunctionInstance, StaticComponentMaskParameterValues), METADATA_PARAMS(NewProp_StaticComponentMaskParameterValues_MetaData, ARRAY_COUNT(NewProp_StaticComponentMaskParameterValues_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticComponentMaskParameterValues_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "StaticComponentMaskParameterValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStaticComponentMaskParameter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticSwitchParameterValues_MetaData[] = {
				{ "Category", "MaterialFunctionInstance" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
				{ "ToolTip", "Static switch parameters." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StaticSwitchParameterValues = { UE4CodeGen_Private::EPropertyClass::Array, "StaticSwitchParameterValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialFunctionInstance, StaticSwitchParameterValues), METADATA_PARAMS(NewProp_StaticSwitchParameterValues_MetaData, ARRAY_COUNT(NewProp_StaticSwitchParameterValues_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticSwitchParameterValues_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "StaticSwitchParameterValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStaticSwitchParameter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontParameterValues_MetaData[] = {
				{ "Category", "MaterialFunctionInstance" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
				{ "ToolTip", "Font parameters." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FontParameterValues = { UE4CodeGen_Private::EPropertyClass::Array, "FontParameterValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialFunctionInstance, FontParameterValues), METADATA_PARAMS(NewProp_FontParameterValues_MetaData, ARRAY_COUNT(NewProp_FontParameterValues_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FontParameterValues_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FontParameterValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFontParameterValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureParameterValues_MetaData[] = {
				{ "Category", "MaterialFunctionInstance" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
				{ "ToolTip", "Texture parameters." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TextureParameterValues = { UE4CodeGen_Private::EPropertyClass::Array, "TextureParameterValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialFunctionInstance, TextureParameterValues), METADATA_PARAMS(NewProp_TextureParameterValues_MetaData, ARRAY_COUNT(NewProp_TextureParameterValues_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureParameterValues_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TextureParameterValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTextureParameterValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorParameterValues_MetaData[] = {
				{ "Category", "MaterialFunctionInstance" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
				{ "ToolTip", "Vector parameters." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VectorParameterValues = { UE4CodeGen_Private::EPropertyClass::Array, "VectorParameterValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialFunctionInstance, VectorParameterValues), METADATA_PARAMS(NewProp_VectorParameterValues_MetaData, ARRAY_COUNT(NewProp_VectorParameterValues_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorParameterValues_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorParameterValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVectorParameterValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalarParameterValues_MetaData[] = {
				{ "Category", "MaterialFunctionInstance" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
				{ "ToolTip", "Scalar parameters." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScalarParameterValues = { UE4CodeGen_Private::EPropertyClass::Array, "ScalarParameterValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialFunctionInstance, ScalarParameterValues), METADATA_PARAMS(NewProp_ScalarParameterValues_MetaData, ARRAY_COUNT(NewProp_ScalarParameterValues_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScalarParameterValues_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ScalarParameterValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FScalarParameterValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
				{ "ToolTip", "Base function." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Base = { UE4CodeGen_Private::EPropertyClass::Object, "Base", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000000, 1, nullptr, STRUCT_OFFSET(UMaterialFunctionInstance, Base), Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(NewProp_Base_MetaData, ARRAY_COUNT(NewProp_Base_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
				{ "Category", "MaterialFunctionInstance" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
				{ "ToolTip", "Parent function." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent = { UE4CodeGen_Private::EPropertyClass::Object, "Parent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000015, 1, nullptr, STRUCT_OFFSET(UMaterialFunctionInstance, Parent), Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(NewProp_Parent_MetaData, ARRAY_COUNT(NewProp_Parent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewMaterial,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticComponentMaskParameterValues,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticComponentMaskParameterValues_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticSwitchParameterValues,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticSwitchParameterValues_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FontParameterValues,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FontParameterValues_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureParameterValues,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureParameterValues_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorParameterValues,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorParameterValues_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScalarParameterValues,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScalarParameterValues_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Base,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Parent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialFunctionInstance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialFunctionInstance::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialFunctionInstance, 1849490090);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialFunctionInstance(Z_Construct_UClass_UMaterialFunctionInstance, &UMaterialFunctionInstance::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialFunctionInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
