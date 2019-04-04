// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionFlexFluidSurfaceColor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionFlexFluidSurfaceColor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFlexFluidSurfaceColor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFlexFluidSurfaceColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode();
// End Cross Module References
	void UMaterialExpressionFlexFluidSurfaceColor::StaticRegisterNativesUMaterialExpressionFlexFluidSurfaceColor()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionFlexFluidSurfaceColor_NoRegister()
	{
		return UMaterialExpressionFlexFluidSurfaceColor::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionFlexFluidSurfaceColor()
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
				{ "IncludePath", "Materials/MaterialExpressionFlexFluidSurfaceColor.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFlexFluidSurfaceColor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstInput_MetaData[] = {
				{ "Category", "MaterialExpressionFlexFluidSurfaceColor" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFlexFluidSurfaceColor.h" },
				{ "ToolTip", "only used if Input is not hooked up" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstInput = { UE4CodeGen_Private::EPropertyClass::Struct, "ConstInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionFlexFluidSurfaceColor, ConstInput), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_ConstInput_MetaData, ARRAY_COUNT(NewProp_ConstInput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFlexFluidSurfaceColor.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'ConstInput' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionFlexFluidSurfaceColor, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputMode_MetaData[] = {
				{ "Category", "MaterialExpressionFlexFluidSurfaceColor" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFlexFluidSurfaceColor.h" },
				{ "ToolTip", "Coordinates - UV coordinates to apply to the scene color lookup.\nOffsetFraction -      An offset to apply to the scene color lookup in a 2d fraction of the screen." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputMode = { UE4CodeGen_Private::EPropertyClass::Byte, "InputMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionFlexFluidSurfaceColor, InputMode), Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode, METADATA_PARAMS(NewProp_InputMode_MetaData, ARRAY_COUNT(NewProp_InputMode_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputMode,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionFlexFluidSurfaceColor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionFlexFluidSurfaceColor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00002080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionFlexFluidSurfaceColor, 722292533);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionFlexFluidSurfaceColor(Z_Construct_UClass_UMaterialExpressionFlexFluidSurfaceColor, &UMaterialExpressionFlexFluidSurfaceColor::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionFlexFluidSurfaceColor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionFlexFluidSurfaceColor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
