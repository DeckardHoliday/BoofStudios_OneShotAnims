// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/ProxyLODMeshSimplificationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProxyLODMeshSimplificationSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UProxyLODMeshSimplificationSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProxyLODMeshSimplificationSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UProxyLODMeshSimplificationSettings::StaticRegisterNativesUProxyLODMeshSimplificationSettings()
	{
	}
	UClass* Z_Construct_UClass_UProxyLODMeshSimplificationSettings_NoRegister()
	{
		return UProxyLODMeshSimplificationSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UProxyLODMeshSimplificationSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Hierarchical LOD Mesh Simplification" },
				{ "IncludePath", "Engine/ProxyLODMeshSimplificationSettings.h" },
				{ "ModuleRelativePath", "Classes/Engine/ProxyLODMeshSimplificationSettings.h" },
				{ "ToolTip", "Controls the system used to generate proxy LODs with merged meshes (i.e. the HLOD system)." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxyLODMeshReductionModuleName_MetaData[] = {
				{ "Category", "General" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.ProxyLODMeshReductionModule" },
				{ "DisplayName", "Hierarchical LOD Mesh Reduction Plugin" },
				{ "ModuleRelativePath", "Classes/Engine/ProxyLODMeshSimplificationSettings.h" },
				{ "ToolTip", "Mesh reduction plugin to use when simplifying mesh geometry for Hierarchical LOD" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ProxyLODMeshReductionModuleName = { UE4CodeGen_Private::EPropertyClass::Name, "ProxyLODMeshReductionModuleName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UProxyLODMeshSimplificationSettings, ProxyLODMeshReductionModuleName), METADATA_PARAMS(NewProp_ProxyLODMeshReductionModuleName_MetaData, ARRAY_COUNT(NewProp_ProxyLODMeshReductionModuleName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProxyLODMeshReductionModuleName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UProxyLODMeshSimplificationSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UProxyLODMeshSimplificationSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000086u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProxyLODMeshSimplificationSettings, 1963752469);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProxyLODMeshSimplificationSettings(Z_Construct_UClass_UProxyLODMeshSimplificationSettings, &UProxyLODMeshSimplificationSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UProxyLODMeshSimplificationSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProxyLODMeshSimplificationSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
