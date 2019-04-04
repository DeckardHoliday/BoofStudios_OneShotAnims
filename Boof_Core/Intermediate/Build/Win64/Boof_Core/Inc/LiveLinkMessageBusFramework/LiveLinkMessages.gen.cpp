// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LiveLinkMessages.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkMessages() {}
// Cross Module References
	LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkClearSubject();
	UPackage* Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
	LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage();
	LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkConnectMessage();
	LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPongMessage();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPingMessage();
	LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkMetaData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCurveElement();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkRefSkeleton();
// End Cross Module References
class UScriptStruct* FLiveLinkClearSubject::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKMESSAGEBUSFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkClearSubject_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkClearSubject, Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkClearSubject"), sizeof(FLiveLinkClearSubject), Get_Z_Construct_UScriptStruct_FLiveLinkClearSubject_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkClearSubject(FLiveLinkClearSubject::StaticStruct, TEXT("/Script/LiveLinkMessageBusFramework"), TEXT("LiveLinkClearSubject"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkClearSubject
{
	FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkClearSubject()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkClearSubject")),new UScriptStruct::TCppStructOps<FLiveLinkClearSubject>);
	}
} ScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkClearSubject;
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkClearSubject()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkClearSubject_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkClearSubject"), sizeof(FLiveLinkClearSubject), Get_Z_Construct_UScriptStruct_FLiveLinkClearSubject_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkClearSubject>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
				{ "ToolTip", "Name of the subject to clear" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SubjectName = { UE4CodeGen_Private::EPropertyClass::Name, "SubjectName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkClearSubject, SubjectName), METADATA_PARAMS(NewProp_SubjectName_MetaData, ARRAY_COUNT(NewProp_SubjectName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubjectName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LiveLinkClearSubject",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLiveLinkClearSubject),
				alignof(FLiveLinkClearSubject),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkClearSubject_CRC() { return 3812579170U; }
class UScriptStruct* FLiveLinkHeartbeatMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKMESSAGEBUSFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage, Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkHeartbeatMessage"), sizeof(FLiveLinkHeartbeatMessage), Get_Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkHeartbeatMessage(FLiveLinkHeartbeatMessage::StaticStruct, TEXT("/Script/LiveLinkMessageBusFramework"), TEXT("LiveLinkHeartbeatMessage"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkHeartbeatMessage
{
	FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkHeartbeatMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkHeartbeatMessage")),new UScriptStruct::TCppStructOps<FLiveLinkHeartbeatMessage>);
	}
} ScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkHeartbeatMessage;
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkHeartbeatMessage"), sizeof(FLiveLinkHeartbeatMessage), Get_Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkHeartbeatMessage>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LiveLinkHeartbeatMessage",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLiveLinkHeartbeatMessage),
				alignof(FLiveLinkHeartbeatMessage),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_CRC() { return 3495344294U; }
class UScriptStruct* FLiveLinkConnectMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKMESSAGEBUSFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkConnectMessage_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkConnectMessage, Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkConnectMessage"), sizeof(FLiveLinkConnectMessage), Get_Z_Construct_UScriptStruct_FLiveLinkConnectMessage_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkConnectMessage(FLiveLinkConnectMessage::StaticStruct, TEXT("/Script/LiveLinkMessageBusFramework"), TEXT("LiveLinkConnectMessage"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkConnectMessage
{
	FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkConnectMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkConnectMessage")),new UScriptStruct::TCppStructOps<FLiveLinkConnectMessage>);
	}
} ScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkConnectMessage;
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkConnectMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkConnectMessage_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkConnectMessage"), sizeof(FLiveLinkConnectMessage), Get_Z_Construct_UScriptStruct_FLiveLinkConnectMessage_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkConnectMessage>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LiveLinkConnectMessage",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLiveLinkConnectMessage),
				alignof(FLiveLinkConnectMessage),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkConnectMessage_CRC() { return 823700585U; }
class UScriptStruct* FLiveLinkPongMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKMESSAGEBUSFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkPongMessage_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkPongMessage, Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkPongMessage"), sizeof(FLiveLinkPongMessage), Get_Z_Construct_UScriptStruct_FLiveLinkPongMessage_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkPongMessage(FLiveLinkPongMessage::StaticStruct, TEXT("/Script/LiveLinkMessageBusFramework"), TEXT("LiveLinkPongMessage"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkPongMessage
{
	FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkPongMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkPongMessage")),new UScriptStruct::TCppStructOps<FLiveLinkPongMessage>);
	}
} ScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkPongMessage;
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPongMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkPongMessage_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkPongMessage"), sizeof(FLiveLinkPongMessage), Get_Z_Construct_UScriptStruct_FLiveLinkPongMessage_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkPongMessage>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PollRequest_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PollRequest = { UE4CodeGen_Private::EPropertyClass::Struct, "PollRequest", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkPongMessage, PollRequest), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_PollRequest_MetaData, ARRAY_COUNT(NewProp_PollRequest_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MachineName_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_MachineName = { UE4CodeGen_Private::EPropertyClass::Str, "MachineName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkPongMessage, MachineName), METADATA_PARAMS(NewProp_MachineName_MetaData, ARRAY_COUNT(NewProp_MachineName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProviderName_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProviderName = { UE4CodeGen_Private::EPropertyClass::Str, "ProviderName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkPongMessage, ProviderName), METADATA_PARAMS(NewProp_ProviderName_MetaData, ARRAY_COUNT(NewProp_ProviderName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PollRequest,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MachineName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProviderName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LiveLinkPongMessage",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLiveLinkPongMessage),
				alignof(FLiveLinkPongMessage),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkPongMessage_CRC() { return 1781938449U; }
class UScriptStruct* FLiveLinkPingMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKMESSAGEBUSFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkPingMessage_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkPingMessage, Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkPingMessage"), sizeof(FLiveLinkPingMessage), Get_Z_Construct_UScriptStruct_FLiveLinkPingMessage_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkPingMessage(FLiveLinkPingMessage::StaticStruct, TEXT("/Script/LiveLinkMessageBusFramework"), TEXT("LiveLinkPingMessage"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkPingMessage
{
	FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkPingMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkPingMessage")),new UScriptStruct::TCppStructOps<FLiveLinkPingMessage>);
	}
} ScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkPingMessage;
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPingMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkPingMessage_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkPingMessage"), sizeof(FLiveLinkPingMessage), Get_Z_Construct_UScriptStruct_FLiveLinkPingMessage_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkPingMessage>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PollRequest_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PollRequest = { UE4CodeGen_Private::EPropertyClass::Struct, "PollRequest", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkPingMessage, PollRequest), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_PollRequest_MetaData, ARRAY_COUNT(NewProp_PollRequest_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PollRequest,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LiveLinkPingMessage",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLiveLinkPingMessage),
				alignof(FLiveLinkPingMessage),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkPingMessage_CRC() { return 3074869101U; }
class UScriptStruct* FLiveLinkSubjectFrameMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKMESSAGEBUSFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage, Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkSubjectFrameMessage"), sizeof(FLiveLinkSubjectFrameMessage), Get_Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkSubjectFrameMessage(FLiveLinkSubjectFrameMessage::StaticStruct, TEXT("/Script/LiveLinkMessageBusFramework"), TEXT("LiveLinkSubjectFrameMessage"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkSubjectFrameMessage
{
	FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkSubjectFrameMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkSubjectFrameMessage")),new UScriptStruct::TCppStructOps<FLiveLinkSubjectFrameMessage>);
	}
} ScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkSubjectFrameMessage;
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkSubjectFrameMessage"), sizeof(FLiveLinkSubjectFrameMessage), Get_Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSubjectFrameMessage>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
				{ "ToolTip", "Incrementing time for interpolation" },
			};
#endif
			static const UE4CodeGen_Private::FDoublePropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Double, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkSubjectFrameMessage, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
				{ "ToolTip", "Subject MetaData for this frame" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaData = { UE4CodeGen_Private::EPropertyClass::Struct, "MetaData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkSubjectFrameMessage, MetaData), Z_Construct_UScriptStruct_FLiveLinkMetaData, METADATA_PARAMS(NewProp_MetaData_MetaData, ARRAY_COUNT(NewProp_MetaData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
				{ "ToolTip", "Curve data for this frame" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Curves = { UE4CodeGen_Private::EPropertyClass::Array, "Curves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkSubjectFrameMessage, Curves), METADATA_PARAMS(NewProp_Curves_MetaData, ARRAY_COUNT(NewProp_Curves_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Curves_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Curves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLiveLinkCurveElement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
				{ "ToolTip", "Bone Transform data for this frame" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Transforms = { UE4CodeGen_Private::EPropertyClass::Array, "Transforms", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkSubjectFrameMessage, Transforms), METADATA_PARAMS(NewProp_Transforms_MetaData, ARRAY_COUNT(NewProp_Transforms_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Transforms", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SubjectName = { UE4CodeGen_Private::EPropertyClass::Name, "SubjectName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkSubjectFrameMessage, SubjectName), METADATA_PARAMS(NewProp_SubjectName_MetaData, ARRAY_COUNT(NewProp_SubjectName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MetaData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Curves,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Curves_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Transforms,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Transforms_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubjectName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LiveLinkSubjectFrameMessage",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLiveLinkSubjectFrameMessage),
				alignof(FLiveLinkSubjectFrameMessage),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_CRC() { return 1304775199U; }
class UScriptStruct* FLiveLinkSubjectDataMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKMESSAGEBUSFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage, Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkSubjectDataMessage"), sizeof(FLiveLinkSubjectDataMessage), Get_Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkSubjectDataMessage(FLiveLinkSubjectDataMessage::StaticStruct, TEXT("/Script/LiveLinkMessageBusFramework"), TEXT("LiveLinkSubjectDataMessage"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkSubjectDataMessage
{
	FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkSubjectDataMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkSubjectDataMessage")),new UScriptStruct::TCppStructOps<FLiveLinkSubjectDataMessage>);
	}
} ScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkSubjectDataMessage;
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkSubjectDataMessage"), sizeof(FLiveLinkSubjectDataMessage), Get_Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSubjectDataMessage>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SubjectName = { UE4CodeGen_Private::EPropertyClass::Name, "SubjectName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkSubjectDataMessage, SubjectName), METADATA_PARAMS(NewProp_SubjectName_MetaData, ARRAY_COUNT(NewProp_SubjectName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefSkeleton_MetaData[] = {
				{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RefSkeleton = { UE4CodeGen_Private::EPropertyClass::Struct, "RefSkeleton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLiveLinkSubjectDataMessage, RefSkeleton), Z_Construct_UScriptStruct_FLiveLinkRefSkeleton, METADATA_PARAMS(NewProp_RefSkeleton_MetaData, ARRAY_COUNT(NewProp_RefSkeleton_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubjectName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RefSkeleton,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LiveLinkSubjectDataMessage",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLiveLinkSubjectDataMessage),
				alignof(FLiveLinkSubjectDataMessage),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_CRC() { return 4203962635U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
