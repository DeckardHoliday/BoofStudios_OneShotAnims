// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Boof_Player.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoof_Player() {}
// Cross Module References
	BOOF_CORE_API UClass* Z_Construct_UClass_ABoof_Player_NoRegister();
	BOOF_CORE_API UClass* Z_Construct_UClass_ABoof_Player();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Boof_Core();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	BOOF_CORE_API UClass* Z_Construct_UClass_AInteractableObject_NoRegister();
// End Cross Module References
	void ABoof_Player::StaticRegisterNativesABoof_Player()
	{
	}
	UClass* Z_Construct_UClass_ABoof_Player_NoRegister()
	{
		return ABoof_Player::StaticClass();
	}
	UClass* Z_Construct_UClass_ABoof_Player()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_Boof_Core,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Boof_Player.h" },
				{ "ModuleRelativePath", "Boof_Player.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defaultMesh_MetaData[] = {
				{ "Category", "Boof_Player" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Boof_Player.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_defaultMesh = { UE4CodeGen_Private::EPropertyClass::Object, "defaultMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(ABoof_Player, defaultMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(NewProp_defaultMesh_MetaData, ARRAY_COUNT(NewProp_defaultMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defaultCollissionComponent_MetaData[] = {
				{ "Category", "Boof_Player" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Boof_Player.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_defaultCollissionComponent = { UE4CodeGen_Private::EPropertyClass::Object, "defaultCollissionComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(ABoof_Player, defaultCollissionComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(NewProp_defaultCollissionComponent_MetaData, ARRAY_COUNT(NewProp_defaultCollissionComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
				{ "Category", "Boof_Player" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Boof_Player.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "FirstPersonCameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(ABoof_Player, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_FirstPersonCameraComponent_MetaData, ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canMove_MetaData[] = {
				{ "Category", "Boof_Player" },
				{ "ModuleRelativePath", "Boof_Player.h" },
			};
#endif
			auto NewProp_canMove_SetBit = [](void* Obj){ ((ABoof_Player*)Obj)->canMove = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canMove = { UE4CodeGen_Private::EPropertyClass::Bool, "canMove", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABoof_Player), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_canMove_SetBit)>::SetBit, METADATA_PARAMS(NewProp_canMove_MetaData, ARRAY_COUNT(NewProp_canMove_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_viewports_MetaData[] = {
				{ "Category", "Boof_Player" },
				{ "ModuleRelativePath", "Boof_Player.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_viewports = { UE4CodeGen_Private::EPropertyClass::Array, "viewports", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(ABoof_Player, viewports), METADATA_PARAMS(NewProp_viewports_MetaData, ARRAY_COUNT(NewProp_viewports_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_viewports_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "viewports", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, Z_Construct_UClass_AInteractableObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactables_MetaData[] = {
				{ "Category", "Boof_Player" },
				{ "ModuleRelativePath", "Boof_Player.h" },
				{ "ToolTip", "Interactable Vars" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_interactables = { UE4CodeGen_Private::EPropertyClass::Array, "interactables", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(ABoof_Player, interactables), METADATA_PARAMS(NewProp_interactables_MetaData, ARRAY_COUNT(NewProp_interactables_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactables_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "interactables", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, Z_Construct_UClass_AInteractableObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_defaultMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_defaultCollissionComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FirstPersonCameraComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_canMove,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_viewports,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_viewports_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_interactables,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_interactables_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABoof_Player>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABoof_Player::StaticClass,
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
	IMPLEMENT_CLASS(ABoof_Player, 135423786);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoof_Player(Z_Construct_UClass_ABoof_Player, &ABoof_Player::StaticClass, TEXT("/Script/Boof_Core"), TEXT("ABoof_Player"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoof_Player);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
