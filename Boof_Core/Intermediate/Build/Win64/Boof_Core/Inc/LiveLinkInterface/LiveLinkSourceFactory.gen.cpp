// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LiveLinkSourceFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkSourceFactory() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References
	void ULiveLinkSourceFactory::StaticRegisterNativesULiveLinkSourceFactory()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkSourceFactory_NoRegister()
	{
		return ULiveLinkSourceFactory::StaticClass();
	}
	UClass* Z_Construct_UClass_ULiveLinkSourceFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "LiveLinkSourceFactory.h" },
				{ "ModuleRelativePath", "Public/LiveLinkSourceFactory.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULiveLinkSourceFactory>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULiveLinkSourceFactory::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(ULiveLinkSourceFactory, 343888942);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkSourceFactory(Z_Construct_UClass_ULiveLinkSourceFactory, &ULiveLinkSourceFactory::StaticClass, TEXT("/Script/LiveLinkInterface"), TEXT("ULiveLinkSourceFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkSourceFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
