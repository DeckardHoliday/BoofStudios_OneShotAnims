// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionMaterialAttributeLayers() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialLayersFunctions();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UMaterialExpressionMaterialAttributeLayers::StaticRegisterNativesUMaterialExpressionMaterialAttributeLayers()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_NoRegister()
	{
		return UMaterialExpressionMaterialAttributeLayers::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Materials/MaterialExpressionMaterialAttributeLayers.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLayerGraphBuilt_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
			};
#endif
			auto NewProp_bIsLayerGraphBuilt_SetBit = [](void* Obj){ ((UMaterialExpressionMaterialAttributeLayers*)Obj)->bIsLayerGraphBuilt = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLayerGraphBuilt = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsLayerGraphBuilt", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMaterialExpressionMaterialAttributeLayers), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsLayerGraphBuilt_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsLayerGraphBuilt_MetaData, ARRAY_COUNT(NewProp_bIsLayerGraphBuilt_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendCallers_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlendCallers = { UE4CodeGen_Private::EPropertyClass::Array, "BlendCallers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMaterialAttributeLayers, BlendCallers), METADATA_PARAMS(NewProp_BlendCallers_MetaData, ARRAY_COUNT(NewProp_BlendCallers_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlendCallers_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "BlendCallers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerCallers_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LayerCallers = { UE4CodeGen_Private::EPropertyClass::Array, "LayerCallers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMaterialAttributeLayers, LayerCallers), METADATA_PARAMS(NewProp_LayerCallers_MetaData, ARRAY_COUNT(NewProp_LayerCallers_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayerCallers_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "LayerCallers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLayers_MetaData[] = {
				{ "Category", "Layers" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultLayers = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultLayers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMaterialAttributeLayers, DefaultLayers), Z_Construct_UScriptStruct_FMaterialLayersFunctions, METADATA_PARAMS(NewProp_DefaultLayers_MetaData, ARRAY_COUNT(NewProp_DefaultLayers_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMaterialAttributeLayers, Input), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
				{ "ToolTip", "GUID that should be unique within the material, this is used for parameter renaming." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID = { UE4CodeGen_Private::EPropertyClass::Struct, "ExpressionGUID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMaterialAttributeLayers, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ExpressionGUID_MetaData, ARRAY_COUNT(NewProp_ExpressionGUID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
				{ "Category", "LayersParameter" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
				{ "ToolTip", "name to be referenced when we want to find and set this parameter" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMaterialAttributeLayers, ParameterName), METADATA_PARAMS(NewProp_ParameterName_MetaData, ARRAY_COUNT(NewProp_ParameterName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsLayerGraphBuilt,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendCallers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendCallers_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LayerCallers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LayerCallers_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultLayers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExpressionGUID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionMaterialAttributeLayers>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionMaterialAttributeLayers::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionMaterialAttributeLayers, 2563201444);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionMaterialAttributeLayers(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers, &UMaterialExpressionMaterialAttributeLayers::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionMaterialAttributeLayers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionMaterialAttributeLayers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
