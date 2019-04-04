// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionChannelMaskParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionChannelMaskParameter() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EChannelMaskParameterColor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionChannelMaskParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVectorParameter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	static UEnum* EChannelMaskParameterColor_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EChannelMaskParameterColor, Z_Construct_UPackage__Script_Engine(), TEXT("EChannelMaskParameterColor"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EChannelMaskParameterColor(EChannelMaskParameterColor_StaticEnum, TEXT("/Script/Engine"), TEXT("EChannelMaskParameterColor"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EChannelMaskParameterColor_CRC() { return 3713233755U; }
	UEnum* Z_Construct_UEnum_Engine_EChannelMaskParameterColor()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EChannelMaskParameterColor"), 0, Get_Z_Construct_UEnum_Engine_EChannelMaskParameterColor_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EChannelMaskParameterColor::Red", (int64)EChannelMaskParameterColor::Red },
				{ "EChannelMaskParameterColor::Green", (int64)EChannelMaskParameterColor::Green },
				{ "EChannelMaskParameterColor::Blue", (int64)EChannelMaskParameterColor::Blue },
				{ "EChannelMaskParameterColor::Alpha", (int64)EChannelMaskParameterColor::Alpha },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionChannelMaskParameter.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EChannelMaskParameterColor",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EChannelMaskParameterColor::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMaterialExpressionChannelMaskParameter::StaticRegisterNativesUMaterialExpressionChannelMaskParameter()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_NoRegister()
	{
		return UMaterialExpressionChannelMaskParameter::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionChannelMaskParameter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpressionVectorParameter,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object MaterialExpressionVectorParameter Object Object Object" },
				{ "IncludePath", "Materials/MaterialExpressionChannelMaskParameter.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionChannelMaskParameter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionChannelMaskParameter.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionChannelMaskParameter, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskChannel_MetaData[] = {
				{ "Category", "MaterialExpressionChannelMaskParameter" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionChannelMaskParameter.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaskChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "MaskChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionChannelMaskParameter, MaskChannel), Z_Construct_UEnum_Engine_EChannelMaskParameterColor, METADATA_PARAMS(NewProp_MaskChannel_MetaData, ARRAY_COUNT(NewProp_MaskChannel_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaskChannel,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionChannelMaskParameter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionChannelMaskParameter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00082080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionChannelMaskParameter, 1604957374);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionChannelMaskParameter(Z_Construct_UClass_UMaterialExpressionChannelMaskParameter, &UMaterialExpressionChannelMaskParameter::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionChannelMaskParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionChannelMaskParameter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
