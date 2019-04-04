// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialFunctionInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialFunctionInterface() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialFunctionUsage();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	static UEnum* EMaterialFunctionUsage_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialFunctionUsage, Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialFunctionUsage"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMaterialFunctionUsage(EMaterialFunctionUsage_StaticEnum, TEXT("/Script/Engine"), TEXT("EMaterialFunctionUsage"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMaterialFunctionUsage_CRC() { return 803758765U; }
	UEnum* Z_Construct_UEnum_Engine_EMaterialFunctionUsage()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMaterialFunctionUsage"), 0, Get_Z_Construct_UEnum_Engine_EMaterialFunctionUsage_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Default", (int64)Default },
				{ "MaterialLayer", (int64)MaterialLayer },
				{ "MaterialLayerBlend", (int64)MaterialLayerBlend },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
				{ "ToolTip", "Usage set on a material function determines feature compatibility and validation." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMaterialFunctionUsage",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EMaterialFunctionUsage",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMaterialFunctionInterface::StaticRegisterNativesUMaterialFunctionInterface()
	{
	}
	UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister()
	{
		return UMaterialFunctionInterface::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialFunctionInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "object" },
				{ "IncludePath", "Materials/MaterialFunctionInterface.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
				{ "ToolTip", "A Material Function is a collection of material expressions that can be reused in different materials" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[] = {
				{ "Category", "Thumbnail" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
				{ "ToolTip", "Information for thumbnail rendering" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailInfo = { UE4CodeGen_Private::EPropertyClass::Object, "ThumbnailInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x00120008000a0009, 1, nullptr, STRUCT_OFFSET(UMaterialFunctionInterface, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(NewProp_ThumbnailInfo_MetaData, ARRAY_COUNT(NewProp_ThumbnailInfo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombinedOutputTypes_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_CombinedOutputTypes = { UE4CodeGen_Private::EPropertyClass::UInt32, "CombinedOutputTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010800000000, 1, nullptr, STRUCT_OFFSET(UMaterialFunctionInterface, CombinedOutputTypes), METADATA_PARAMS(NewProp_CombinedOutputTypes_MetaData, ARRAY_COUNT(NewProp_CombinedOutputTypes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombinedInputTypes_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_CombinedInputTypes = { UE4CodeGen_Private::EPropertyClass::UInt32, "CombinedInputTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010800000000, 1, nullptr, STRUCT_OFFSET(UMaterialFunctionInterface, CombinedInputTypes), METADATA_PARAMS(NewProp_CombinedInputTypes_MetaData, ARRAY_COUNT(NewProp_CombinedInputTypes_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialFunctionUsage_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
				{ "ToolTip", "The intended usage of this function, required for material layers." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaterialFunctionUsage = { UE4CodeGen_Private::EPropertyClass::Byte, "MaterialFunctionUsage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020090000000000, 1, nullptr, STRUCT_OFFSET(UMaterialFunctionInterface, MaterialFunctionUsage), Z_Construct_UEnum_Engine_EMaterialFunctionUsage, METADATA_PARAMS(NewProp_MaterialFunctionUsage_MetaData, ARRAY_COUNT(NewProp_MaterialFunctionUsage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
				{ "ToolTip", "Used by materials using this function to know when to recompile." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateId = { UE4CodeGen_Private::EPropertyClass::Struct, "StateId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000200000, 1, nullptr, STRUCT_OFFSET(UMaterialFunctionInterface, StateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_StateId_MetaData, ARRAY_COUNT(NewProp_StateId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThumbnailInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CombinedOutputTypes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CombinedInputTypes,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialFunctionUsage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StateId,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialFunctionInterface>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialFunctionInterface::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialFunctionInterface, 4099204379);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialFunctionInterface(Z_Construct_UClass_UMaterialFunctionInterface, &UMaterialFunctionInterface::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialFunctionInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
