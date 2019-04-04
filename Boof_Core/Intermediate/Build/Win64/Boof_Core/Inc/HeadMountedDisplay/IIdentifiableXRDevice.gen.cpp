// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/IIdentifiableXRDevice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIIdentifiableXRDevice() {}
// Cross Module References
	HEADMOUNTEDDISPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FXRDeviceId();
	UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
// End Cross Module References
class UScriptStruct* FXRDeviceId::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HEADMOUNTEDDISPLAY_API uint32 Get_Z_Construct_UScriptStruct_FXRDeviceId_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FXRDeviceId, Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("XRDeviceId"), sizeof(FXRDeviceId), Get_Z_Construct_UScriptStruct_FXRDeviceId_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FXRDeviceId(FXRDeviceId::StaticStruct, TEXT("/Script/HeadMountedDisplay"), TEXT("XRDeviceId"), false, nullptr, nullptr);
static struct FScriptStruct_HeadMountedDisplay_StaticRegisterNativesFXRDeviceId
{
	FScriptStruct_HeadMountedDisplay_StaticRegisterNativesFXRDeviceId()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("XRDeviceId")),new UScriptStruct::TCppStructOps<FXRDeviceId>);
	}
} ScriptStruct_HeadMountedDisplay_StaticRegisterNativesFXRDeviceId;
	UScriptStruct* Z_Construct_UScriptStruct_FXRDeviceId()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FXRDeviceId_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_HeadMountedDisplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("XRDeviceId"), sizeof(FXRDeviceId), Get_Z_Construct_UScriptStruct_FXRDeviceId_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/IIdentifiableXRDevice.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FXRDeviceId>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[] = {
				{ "Category", "XRDevice" },
				{ "ModuleRelativePath", "Public/IIdentifiableXRDevice.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceId = { UE4CodeGen_Private::EPropertyClass::Int, "DeviceId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FXRDeviceId, DeviceId), METADATA_PARAMS(NewProp_DeviceId_MetaData, ARRAY_COUNT(NewProp_DeviceId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemName_MetaData[] = {
				{ "Category", "XRDevice" },
				{ "ModuleRelativePath", "Public/IIdentifiableXRDevice.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SystemName = { UE4CodeGen_Private::EPropertyClass::Name, "SystemName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FXRDeviceId, SystemName), METADATA_PARAMS(NewProp_SystemName_MetaData, ARRAY_COUNT(NewProp_SystemName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeviceId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SystemName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"XRDeviceId",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FXRDeviceId),
				alignof(FXRDeviceId),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FXRDeviceId_CRC() { return 2753258707U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
