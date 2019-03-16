// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "InteractableObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableObject() {}
// Cross Module References
	BOOF_CORE_API UEnum* Z_Construct_UEnum_Boof_Core_EObjectType();
	UPackage* Z_Construct_UPackage__Script_Boof_Core();
	BOOF_CORE_API UClass* Z_Construct_UClass_AInteractableObject_NoRegister();
	BOOF_CORE_API UClass* Z_Construct_UClass_AInteractableObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static UEnum* EObjectType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Boof_Core_EObjectType, Z_Construct_UPackage__Script_Boof_Core(), TEXT("EObjectType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EObjectType(EObjectType_StaticEnum, TEXT("/Script/Boof_Core"), TEXT("EObjectType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Boof_Core_EObjectType_CRC() { return 731899655U; }
	UEnum* Z_Construct_UEnum_Boof_Core_EObjectType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Boof_Core();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EObjectType"), 0, Get_Z_Construct_UEnum_Boof_Core_EObjectType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EObjectType::Dildo", (int64)EObjectType::Dildo },
				{ "EObjectType::Fleshlight", (int64)EObjectType::Fleshlight },
				{ "EObjectType::Viewport", (int64)EObjectType::Viewport },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Dildo.DisplayName", "Dildo" },
				{ "Fleshlight.DisplayName", "Fleshlight" },
				{ "ModuleRelativePath", "InteractableObject.h" },
				{ "ToolTip", "\"BlueprintType\" is essential to include\nList of object types" },
				{ "Viewport.DisplayName", "Viewport" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Boof_Core,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EObjectType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EObjectType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AInteractableObject::StaticRegisterNativesAInteractableObject()
	{
	}
	UClass* Z_Construct_UClass_AInteractableObject_NoRegister()
	{
		return AInteractableObject::StaticClass();
	}
	UClass* Z_Construct_UClass_AInteractableObject()
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
				{ "IncludePath", "InteractableObject.h" },
				{ "ModuleRelativePath", "InteractableObject.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_objectType_MetaData[] = {
				{ "Category", "InteractableObject" },
				{ "ModuleRelativePath", "InteractableObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_objectType = { UE4CodeGen_Private::EPropertyClass::Enum, "objectType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(AInteractableObject, objectType), Z_Construct_UEnum_Boof_Core_EObjectType, METADATA_PARAMS(NewProp_objectType_MetaData, ARRAY_COUNT(NewProp_objectType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_objectType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_objectType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_objectType_Underlying,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AInteractableObject>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AInteractableObject::StaticClass,
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
	IMPLEMENT_CLASS(AInteractableObject, 3251720563);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractableObject(Z_Construct_UClass_AInteractableObject, &AInteractableObject::StaticClass, TEXT("/Script/Boof_Core"), TEXT("AInteractableObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
