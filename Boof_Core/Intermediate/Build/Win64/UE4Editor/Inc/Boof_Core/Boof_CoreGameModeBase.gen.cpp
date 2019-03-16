// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Boof_CoreGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoof_CoreGameModeBase() {}
// Cross Module References
	BOOF_CORE_API UClass* Z_Construct_UClass_ABoof_CoreGameModeBase_NoRegister();
	BOOF_CORE_API UClass* Z_Construct_UClass_ABoof_CoreGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Boof_Core();
// End Cross Module References
	void ABoof_CoreGameModeBase::StaticRegisterNativesABoof_CoreGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABoof_CoreGameModeBase_NoRegister()
	{
		return ABoof_CoreGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ABoof_CoreGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Boof_Core,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Boof_CoreGameModeBase.h" },
				{ "ModuleRelativePath", "Boof_CoreGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABoof_CoreGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABoof_CoreGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
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
	IMPLEMENT_CLASS(ABoof_CoreGameModeBase, 2212383157);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoof_CoreGameModeBase(Z_Construct_UClass_ABoof_CoreGameModeBase, &ABoof_CoreGameModeBase::StaticClass, TEXT("/Script/Boof_Core"), TEXT("ABoof_CoreGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoof_CoreGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
