// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/IAmbisonicsMixer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAmbisonicsMixer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAmbisonicsSubmixSettingsBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAmbisonicsSubmixSettingsBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAmbisonicsSubmixSettingsBase::StaticRegisterNativesUAmbisonicsSubmixSettingsBase()
	{
	}
	UClass* Z_Construct_UClass_UAmbisonicsSubmixSettingsBase_NoRegister()
	{
		return UAmbisonicsSubmixSettingsBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UAmbisonicsSubmixSettingsBase()
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
				{ "BlueprintType", "true" },
				{ "IncludePath", "IAmbisonicsMixer.h" },
				{ "ModuleRelativePath", "Public/IAmbisonicsMixer.h" },
				{ "ToolTip", "This is a class which should be overridden to provide users with settings to use for individual sounds" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAmbisonicsSubmixSettingsBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAmbisonicsSubmixSettingsBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101081u,
				nullptr, 0,
				nullptr, 0,
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAmbisonicsSubmixSettingsBase, 2956864976);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAmbisonicsSubmixSettingsBase(Z_Construct_UClass_UAmbisonicsSubmixSettingsBase, &UAmbisonicsSubmixSettingsBase::StaticClass, TEXT("/Script/Engine"), TEXT("UAmbisonicsSubmixSettingsBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAmbisonicsSubmixSettingsBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
