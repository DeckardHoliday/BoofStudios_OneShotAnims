// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LiveLinkSourceSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkSourceSettings() {}
// Cross Module References
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FLiveLinkInterpolationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkInterpolationSettings"), sizeof(FLiveLinkInterpolationSettings), Get_Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkInterpolationSettings(FLiveLinkInterpolationSettings::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkInterpolationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkInterpolationSettings
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkInterpolationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkInterpolationSettings")),new UScriptStruct::TCppStructOps<FLiveLinkInterpolationSettings>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkInterpolationSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkInterpolationSettings"), sizeof(FLiveLinkInterpolationSettings), Get_Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkInterpolationSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationOffset_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
				{ "ToolTip", "When interpolating: how far back from current time should we read the buffer (in seconds)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolationOffset = { UE4CodeGen_Private::EPropertyClass::Float, "InterpolationOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLiveLinkInterpolationSettings, InterpolationOffset), METADATA_PARAMS(NewProp_InterpolationOffset_MetaData, ARRAY_COUNT(NewProp_InterpolationOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseInterpolation_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
				{ "ToolTip", "Should this connection use interpolation" },
			};
#endif
			auto NewProp_bUseInterpolation_SetBit = [](void* Obj){ ((FLiveLinkInterpolationSettings*)Obj)->bUseInterpolation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseInterpolation = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseInterpolation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FLiveLinkInterpolationSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseInterpolation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseInterpolation_MetaData, ARRAY_COUNT(NewProp_bUseInterpolation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpolationOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseInterpolation,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LiveLinkInterpolationSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLiveLinkInterpolationSettings),
				alignof(FLiveLinkInterpolationSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_CRC() { return 2686297905U; }
	void ULiveLinkSourceSettings::StaticRegisterNativesULiveLinkSourceSettings()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister()
	{
		return ULiveLinkSourceSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_ULiveLinkSourceSettings()
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
				{ "IncludePath", "LiveLinkSourceSettings.h" },
				{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
				{ "ToolTip", "Base class for live link source settings (can be replaced by sources themselves)" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationSettings_MetaData[] = {
				{ "Category", "Interpolation Settings" },
				{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InterpolationSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "InterpolationSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULiveLinkSourceSettings, InterpolationSettings), Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings, METADATA_PARAMS(NewProp_InterpolationSettings_MetaData, ARRAY_COUNT(NewProp_InterpolationSettings_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpolationSettings,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULiveLinkSourceSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULiveLinkSourceSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(ULiveLinkSourceSettings, 805882753);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkSourceSettings(Z_Construct_UClass_ULiveLinkSourceSettings, &ULiveLinkSourceSettings::StaticClass, TEXT("/Script/LiveLinkInterface"), TEXT("ULiveLinkSourceSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkSourceSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
