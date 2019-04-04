// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Boof_Actors.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoof_Actors() {}
// Cross Module References
	BOOF_CORE_API UEnum* Z_Construct_UEnum_Boof_Core_EPositionPref();
	UPackage* Z_Construct_UPackage__Script_Boof_Core();
	BOOF_CORE_API UClass* Z_Construct_UClass_ABoof_Actors_NoRegister();
	BOOF_CORE_API UClass* Z_Construct_UClass_ABoof_Actors();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* EPositionPref_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Boof_Core_EPositionPref, Z_Construct_UPackage__Script_Boof_Core(), TEXT("EPositionPref"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPositionPref(EPositionPref_StaticEnum, TEXT("/Script/Boof_Core"), TEXT("EPositionPref"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Boof_Core_EPositionPref_CRC() { return 3203152874U; }
	UEnum* Z_Construct_UEnum_Boof_Core_EPositionPref()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Boof_Core();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPositionPref"), 0, Get_Z_Construct_UEnum_Boof_Core_EPositionPref_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPositionPref::Top", (int64)EPositionPref::Top },
				{ "EPositionPref::Bottom", (int64)EPositionPref::Bottom },
				{ "EPositionPref::Switch", (int64)EPositionPref::Switch },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Bottom.DisplayName", "Bottom" },
				{ "ModuleRelativePath", "Boof_Actors.h" },
				{ "Switch.DisplayName", "Switch" },
				{ "ToolTip", "\"BlueprintType\" is essential to include\nSexual position preferences" },
				{ "Top.DisplayName", "Top" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Boof_Core,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPositionPref",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EPositionPref",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ABoof_Actors::StaticRegisterNativesABoof_Actors()
	{
	}
	UClass* Z_Construct_UClass_ABoof_Actors_NoRegister()
	{
		return ABoof_Actors::StaticClass();
	}
	UClass* Z_Construct_UClass_ABoof_Actors()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Boof_Core,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Boof_Actors.h" },
				{ "ModuleRelativePath", "Boof_Actors.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterMesh_MetaData[] = {
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Boof_Actors.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_characterMesh = { UE4CodeGen_Private::EPropertyClass::Object, "characterMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(ABoof_Actors, characterMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_characterMesh_MetaData, ARRAY_COUNT(NewProp_characterMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorName_MetaData[] = {
				{ "Category", "Name" },
				{ "ModuleRelativePath", "Boof_Actors.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_actorName = { UE4CodeGen_Private::EPropertyClass::Name, "actorName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABoof_Actors, actorName), METADATA_PARAMS(NewProp_actorName_MetaData, ARRAY_COUNT(NewProp_actorName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionPreference_MetaData[] = {
				{ "Category", "Enum" },
				{ "ModuleRelativePath", "Boof_Actors.h" },
				{ "ToolTip", "Public Vars" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PositionPreference = { UE4CodeGen_Private::EPropertyClass::Enum, "PositionPreference", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABoof_Actors, PositionPreference), Z_Construct_UEnum_Boof_Core_EPositionPref, METADATA_PARAMS(NewProp_PositionPreference_MetaData, ARRAY_COUNT(NewProp_PositionPreference_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PositionPreference_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_characterMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_actorName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PositionPreference,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PositionPreference_Underlying,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABoof_Actors>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABoof_Actors::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(ABoof_Actors, 461309085);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoof_Actors(Z_Construct_UClass_ABoof_Actors, &ABoof_Actors::StaticClass, TEXT("/Script/Boof_Core"), TEXT("ABoof_Actors"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoof_Actors);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
