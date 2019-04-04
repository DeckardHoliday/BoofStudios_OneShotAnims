// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LiveLinkTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkTypes() {}
// Cross Module References
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkFrameData();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkMetaData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkWorldTime();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCurveElement();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTimeCode();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkFrameRate();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
// End Cross Module References
class UScriptStruct* FLiveLinkFrameData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkFrameData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkFrameData, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkFrameData"), sizeof(FLiveLinkFrameData), Get_Z_Construct_UScriptStruct_FLiveLinkFrameData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkFrameData(FLiveLinkFrameData::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkFrameData"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkFrameData
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkFrameData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkFrameData")),new UScriptStruct::TCppStructOps<FLiveLinkFrameData>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkFrameData;
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkFrameData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkFrameData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkFrameData"), sizeof(FLiveLinkFrameData), Get_Z_Construct_UScriptStruct_FLiveLinkFrameData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkFrameData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaData = { UE4CodeGen_Private::EPropertyClass::Struct, "MetaData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkFrameData, MetaData), Z_Construct_UScriptStruct_FLiveLinkMetaData, METADATA_PARAMS(NewProp_MetaData_MetaData, ARRAY_COUNT(NewProp_MetaData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTime_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldTime = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkFrameData, WorldTime), Z_Construct_UScriptStruct_FLiveLinkWorldTime, METADATA_PARAMS(NewProp_WorldTime_MetaData, ARRAY_COUNT(NewProp_WorldTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveElements_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurveElements = { UE4CodeGen_Private::EPropertyClass::Array, "CurveElements", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkFrameData, CurveElements), METADATA_PARAMS(NewProp_CurveElements_MetaData, ARRAY_COUNT(NewProp_CurveElements_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurveElements_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CurveElements", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLiveLinkCurveElement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Transforms = { UE4CodeGen_Private::EPropertyClass::Array, "Transforms", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkFrameData, Transforms), METADATA_PARAMS(NewProp_Transforms_MetaData, ARRAY_COUNT(NewProp_Transforms_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Transforms", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MetaData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveElements,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveElements_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Transforms,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Transforms_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LiveLinkFrameData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLiveLinkFrameData),
				alignof(FLiveLinkFrameData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkFrameData_CRC() { return 1275508274U; }
class UScriptStruct* FLiveLinkMetaData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkMetaData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkMetaData, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkMetaData"), sizeof(FLiveLinkMetaData), Get_Z_Construct_UScriptStruct_FLiveLinkMetaData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkMetaData(FLiveLinkMetaData::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkMetaData"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkMetaData
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkMetaData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkMetaData")),new UScriptStruct::TCppStructOps<FLiveLinkMetaData>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkMetaData;
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkMetaData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkMetaData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkMetaData"), sizeof(FLiveLinkMetaData), Get_Z_Construct_UScriptStruct_FLiveLinkMetaData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkMetaData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneTime_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SceneTime = { UE4CodeGen_Private::EPropertyClass::Struct, "SceneTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkMetaData, SceneTime), Z_Construct_UScriptStruct_FLiveLinkTimeCode, METADATA_PARAMS(NewProp_SceneTime_MetaData, ARRAY_COUNT(NewProp_SceneTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringMetaData_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_StringMetaData = { UE4CodeGen_Private::EPropertyClass::Map, "StringMetaData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkMetaData, StringMetaData), METADATA_PARAMS(NewProp_StringMetaData_MetaData, ARRAY_COUNT(NewProp_StringMetaData_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_StringMetaData_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "StringMetaData_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringMetaData_ValueProp = { UE4CodeGen_Private::EPropertyClass::Str, "StringMetaData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SceneTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StringMetaData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StringMetaData_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StringMetaData_ValueProp,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LiveLinkMetaData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLiveLinkMetaData),
				alignof(FLiveLinkMetaData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkMetaData_CRC() { return 40634722U; }
class UScriptStruct* FLiveLinkTimeCode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTimeCode_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTimeCode, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkTimeCode"), sizeof(FLiveLinkTimeCode), Get_Z_Construct_UScriptStruct_FLiveLinkTimeCode_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkTimeCode(FLiveLinkTimeCode::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkTimeCode"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTimeCode
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTimeCode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkTimeCode")),new UScriptStruct::TCppStructOps<FLiveLinkTimeCode>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTimeCode;
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTimeCode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTimeCode_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkTimeCode"), sizeof(FLiveLinkTimeCode), Get_Z_Construct_UScriptStruct_FLiveLinkTimeCode_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
				{ "ToolTip", "A Qualified TimeCode associated with" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkTimeCode>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
				{ "ToolTip", "Value calculated on create to represent the different between the source time and client time" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameRate = { UE4CodeGen_Private::EPropertyClass::Struct, "FrameRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkTimeCode, FrameRate), Z_Construct_UScriptStruct_FLiveLinkFrameRate, METADATA_PARAMS(NewProp_FrameRate_MetaData, ARRAY_COUNT(NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
				{ "ToolTip", "Integer Frames since last second" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Frames = { UE4CodeGen_Private::EPropertyClass::Int, "Frames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkTimeCode, Frames), METADATA_PARAMS(NewProp_Frames_MetaData, ARRAY_COUNT(NewProp_Frames_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
				{ "ToolTip", "Integer Seconds since Epoch" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seconds = { UE4CodeGen_Private::EPropertyClass::Int, "Seconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkTimeCode, Seconds), METADATA_PARAMS(NewProp_Seconds_MetaData, ARRAY_COUNT(NewProp_Seconds_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrameRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Frames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Seconds,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LiveLinkTimeCode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLiveLinkTimeCode),
				alignof(FLiveLinkTimeCode),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTimeCode_CRC() { return 2928974640U; }
class UScriptStruct* FLiveLinkFrameRate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkFrameRate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkFrameRate, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkFrameRate"), sizeof(FLiveLinkFrameRate), Get_Z_Construct_UScriptStruct_FLiveLinkFrameRate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkFrameRate(FLiveLinkFrameRate::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkFrameRate"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkFrameRate
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkFrameRate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkFrameRate")),new UScriptStruct::TCppStructOps<FLiveLinkFrameRate>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkFrameRate;
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkFrameRate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkFrameRate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkFrameRate"), sizeof(FLiveLinkFrameRate), Get_Z_Construct_UScriptStruct_FLiveLinkFrameRate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkFrameRate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Denominator_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Denominator = { UE4CodeGen_Private::EPropertyClass::UInt32, "Denominator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkFrameRate, Denominator), METADATA_PARAMS(NewProp_Denominator_MetaData, ARRAY_COUNT(NewProp_Denominator_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Numerator_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Numerator = { UE4CodeGen_Private::EPropertyClass::UInt32, "Numerator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkFrameRate, Numerator), METADATA_PARAMS(NewProp_Numerator_MetaData, ARRAY_COUNT(NewProp_Numerator_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Denominator,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Numerator,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LiveLinkFrameRate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLiveLinkFrameRate),
				alignof(FLiveLinkFrameRate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkFrameRate_CRC() { return 2832932413U; }
class UScriptStruct* FLiveLinkWorldTime::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkWorldTime_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkWorldTime, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkWorldTime"), sizeof(FLiveLinkWorldTime), Get_Z_Construct_UScriptStruct_FLiveLinkWorldTime_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkWorldTime(FLiveLinkWorldTime::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkWorldTime"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkWorldTime
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkWorldTime()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkWorldTime")),new UScriptStruct::TCppStructOps<FLiveLinkWorldTime>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkWorldTime;
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkWorldTime()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkWorldTime_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkWorldTime"), sizeof(FLiveLinkWorldTime), Get_Z_Construct_UScriptStruct_FLiveLinkWorldTime_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkWorldTime>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
				{ "ToolTip", "Value calculated on create to represent the different between the source time and client time" },
			};
#endif
			static const UE4CodeGen_Private::FDoublePropertyParams NewProp_Offset = { UE4CodeGen_Private::EPropertyClass::Double, "Offset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkWorldTime, Offset), METADATA_PARAMS(NewProp_Offset_MetaData, ARRAY_COUNT(NewProp_Offset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
				{ "ToolTip", "Time for this frame. Used during interpolation. If this goes backwards we will dump already stored frames." },
			};
#endif
			static const UE4CodeGen_Private::FDoublePropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Double, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkWorldTime, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Offset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LiveLinkWorldTime",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLiveLinkWorldTime),
				alignof(FLiveLinkWorldTime),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkWorldTime_CRC() { return 410793263U; }
class UScriptStruct* FLiveLinkCurveElement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkCurveElement_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkCurveElement, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkCurveElement"), sizeof(FLiveLinkCurveElement), Get_Z_Construct_UScriptStruct_FLiveLinkCurveElement_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkCurveElement(FLiveLinkCurveElement::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkCurveElement"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkCurveElement
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkCurveElement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkCurveElement")),new UScriptStruct::TCppStructOps<FLiveLinkCurveElement>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkCurveElement;
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCurveElement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkCurveElement_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkCurveElement"), sizeof(FLiveLinkCurveElement), Get_Z_Construct_UScriptStruct_FLiveLinkCurveElement_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkCurveElement>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveValue_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurveValue = { UE4CodeGen_Private::EPropertyClass::Float, "CurveValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkCurveElement, CurveValue), METADATA_PARAMS(NewProp_CurveValue_MetaData, ARRAY_COUNT(NewProp_CurveValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurveName = { UE4CodeGen_Private::EPropertyClass::Name, "CurveName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkCurveElement, CurveName), METADATA_PARAMS(NewProp_CurveName_MetaData, ARRAY_COUNT(NewProp_CurveName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LiveLinkCurveElement",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLiveLinkCurveElement),
				alignof(FLiveLinkCurveElement),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkCurveElement_CRC() { return 2284357613U; }
class UScriptStruct* FLiveLinkSubjectName::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSubjectName_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSubjectName, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkSubjectName"), sizeof(FLiveLinkSubjectName), Get_Z_Construct_UScriptStruct_FLiveLinkSubjectName_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkSubjectName(FLiveLinkSubjectName::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkSubjectName"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkSubjectName
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkSubjectName()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkSubjectName")),new UScriptStruct::TCppStructOps<FLiveLinkSubjectName>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkSubjectName;
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSubjectName_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkSubjectName"), sizeof(FLiveLinkSubjectName), Get_Z_Construct_UScriptStruct_FLiveLinkSubjectName_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSubjectName>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "Category", "Live Link" },
				{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
				{ "ToolTip", "Name of the subject" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLiveLinkSubjectName, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LiveLinkSubjectName",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLiveLinkSubjectName),
				alignof(FLiveLinkSubjectName),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSubjectName_CRC() { return 1700070137U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
