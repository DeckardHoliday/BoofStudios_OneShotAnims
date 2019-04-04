// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Net/VoiceConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceConfig() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVoiceSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVOIPTalker_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVOIPTalker();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UVOIPTalker_BPOnTalkingEnd();
	ENGINE_API UFunction* Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel();
	ENGINE_API UFunction* Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_UVOIPStatics_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVOIPStatics();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UFunction* Z_Construct_UFunction_UVOIPStatics_SetMicThreshold();
// End Cross Module References
class UScriptStruct* FVoiceSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FVoiceSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoiceSettings, Z_Construct_UPackage__Script_Engine(), TEXT("VoiceSettings"), sizeof(FVoiceSettings), Get_Z_Construct_UScriptStruct_FVoiceSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoiceSettings(FVoiceSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("VoiceSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFVoiceSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFVoiceSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoiceSettings")),new UScriptStruct::TCppStructOps<FVoiceSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFVoiceSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FVoiceSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoiceSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoiceSettings"), sizeof(FVoiceSettings), Get_Z_Construct_UScriptStruct_FVoiceSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoiceSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceEffectChain_MetaData[] = {
				{ "Category", "Audio|Voice|Effects" },
				{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
				{ "ToolTip", "Optional audio effects to apply to this player's voice." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceEffectChain = { UE4CodeGen_Private::EPropertyClass::Object, "SourceEffectChain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FVoiceSettings, SourceEffectChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(NewProp_SourceEffectChain_MetaData, ARRAY_COUNT(NewProp_SourceEffectChain_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[] = {
				{ "Category", "Audio|Voice|Spatialization" },
				{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
				{ "ToolTip", "Optional attenuation settings to attach to this player's voice.\nThis should only be used when ComponentToAttachTo is set." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings = { UE4CodeGen_Private::EPropertyClass::Object, "AttenuationSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FVoiceSettings, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(NewProp_AttenuationSettings_MetaData, ARRAY_COUNT(NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentToAttachTo_MetaData[] = {
				{ "Category", "Audio|Voice|Spatialization" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
				{ "ToolTip", "Optionally attach the voice source to a Scene Component to give the appearance\nthat the voice is coming from that scene component.\nIf this is not set, the voice will not be spatialized." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentToAttachTo = { UE4CodeGen_Private::EPropertyClass::Object, "ComponentToAttachTo", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(FVoiceSettings, ComponentToAttachTo), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_ComponentToAttachTo_MetaData, ARRAY_COUNT(NewProp_ComponentToAttachTo_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceEffectChain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttenuationSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentToAttachTo,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"VoiceSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FVoiceSettings),
				alignof(FVoiceSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoiceSettings_CRC() { return 1922482816U; }
	static FName NAME_UVOIPTalker_BPOnTalkingBegin = FName(TEXT("BPOnTalkingBegin"));
	void UVOIPTalker::BPOnTalkingBegin(UAudioComponent* AudioComponent)
	{
		VOIPTalker_eventBPOnTalkingBegin_Parms Parms;
		Parms.AudioComponent=AudioComponent;
		ProcessEvent(FindFunctionChecked(NAME_UVOIPTalker_BPOnTalkingBegin),&Parms);
	}
	static FName NAME_UVOIPTalker_BPOnTalkingEnd = FName(TEXT("BPOnTalkingEnd"));
	void UVOIPTalker::BPOnTalkingEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVOIPTalker_BPOnTalkingEnd),NULL);
	}
	void UVOIPTalker::StaticRegisterNativesUVOIPTalker()
	{
		UClass* Class = UVOIPTalker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BPOnTalkingBegin", &UVOIPTalker::execBPOnTalkingBegin },
			{ "BPOnTalkingEnd", &UVOIPTalker::execBPOnTalkingEnd },
			{ "CreateTalkerForPlayer", &UVOIPTalker::execCreateTalkerForPlayer },
			{ "GetVoiceLevel", &UVOIPTalker::execGetVoiceLevel },
			{ "RegisterWithPlayerState", &UVOIPTalker::execRegisterWithPlayerState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent = { UE4CodeGen_Private::EPropertyClass::Object, "AudioComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VOIPTalker_eventBPOnTalkingBegin_Parms, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(NewProp_AudioComponent_MetaData, ARRAY_COUNT(NewProp_AudioComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AudioComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Voice|Notification" },
				{ "DisplayName", "Begin Talking" },
				{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
				{ "ToolTip", "Blueprint native event for when this player starts speaking." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVOIPTalker, "BPOnTalkingBegin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080C00, sizeof(VOIPTalker_eventBPOnTalkingBegin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVOIPTalker_BPOnTalkingEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Voice|Notification" },
				{ "DisplayName", "End Talking" },
				{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
				{ "ToolTip", "Blueprint native event for when this player stops speaking." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVOIPTalker, "BPOnTalkingEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer()
	{
		struct VOIPTalker_eventCreateTalkerForPlayer_Parms
		{
			APlayerState* OwningState;
			UVOIPTalker* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(VOIPTalker_eventCreateTalkerForPlayer_Parms, ReturnValue), Z_Construct_UClass_UVOIPTalker_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningState = { UE4CodeGen_Private::EPropertyClass::Object, "OwningState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VOIPTalker_eventCreateTalkerForPlayer_Parms, OwningState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwningState,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Voice|Notification" },
				{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
				{ "ToolTip", "function for creating and registering a UVOIPTalker." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVOIPTalker, "CreateTalkerForPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VOIPTalker_eventCreateTalkerForPlayer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel()
	{
		struct VOIPTalker_eventGetVoiceLevel_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VOIPTalker_eventGetVoiceLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Voice|Notification" },
				{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
				{ "ToolTip", "Get the current level of how loud this player is speaking. Will return 0.0\nif player is not talking." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVOIPTalker, "GetVoiceLevel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VOIPTalker_eventGetVoiceLevel_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState()
	{
		struct VOIPTalker_eventRegisterWithPlayerState_Parms
		{
			APlayerState* OwningState;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningState = { UE4CodeGen_Private::EPropertyClass::Object, "OwningState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VOIPTalker_eventRegisterWithPlayerState_Parms, OwningState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwningState,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Voice|Notification" },
				{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
				{ "ToolTip", "This function sets up this talker with a specific player.\nIt is necessary to use this to properly control a specific player's voice\nand receive events." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVOIPTalker, "RegisterWithPlayerState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VOIPTalker_eventRegisterWithPlayerState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVOIPTalker_NoRegister()
	{
		return UVOIPTalker::StaticClass();
	}
	UClass* Z_Construct_UClass_UVOIPTalker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin, "BPOnTalkingBegin" }, // 1840405423
				{ &Z_Construct_UFunction_UVOIPTalker_BPOnTalkingEnd, "BPOnTalkingEnd" }, // 2110635926
				{ &Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer, "CreateTalkerForPlayer" }, // 2137114323
				{ &Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel, "GetVoiceLevel" }, // 4202461864
				{ &Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState, "RegisterWithPlayerState" }, // 386756078
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "VOIP" },
				{ "IncludePath", "Net/VoiceConfig.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ShortTooltip", "A VOIPTalker is a component that can be used to control the audio characteristics of a player's voice." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
				{ "Category", "Voice" },
				{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
				{ "ToolTip", "Configurable settings for this player's voice. When set, this will update the next time the player speaks." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings = { UE4CodeGen_Private::EPropertyClass::Struct, "Settings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000005, 1, nullptr, STRUCT_OFFSET(UVOIPTalker, Settings), Z_Construct_UScriptStruct_FVoiceSettings, METADATA_PARAMS(NewProp_Settings_MetaData, ARRAY_COUNT(NewProp_Settings_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Settings,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVOIPTalker>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVOIPTalker::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UVOIPTalker, 3369332169);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVOIPTalker(Z_Construct_UClass_UVOIPTalker, &UVOIPTalker::StaticClass, TEXT("/Script/Engine"), TEXT("UVOIPTalker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVOIPTalker);
	void UVOIPStatics::StaticRegisterNativesUVOIPStatics()
	{
		UClass* Class = UVOIPStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMicThreshold", &UVOIPStatics::execSetMicThreshold },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UVOIPStatics_SetMicThreshold()
	{
		struct VOIPStatics_eventSetMicThreshold_Parms
		{
			float InThreshold;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "InThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VOIPStatics_eventSetMicThreshold_Parms, InThreshold), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InThreshold,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Voice|Mic" },
				{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
				{ "ToolTip", "This function sets the Mic threshold for VOIP chat." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVOIPStatics, "SetMicThreshold", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VOIPStatics_eventSetMicThreshold_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVOIPStatics_NoRegister()
	{
		return UVOIPStatics::StaticClass();
	}
	UClass* Z_Construct_UClass_UVOIPStatics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UVOIPStatics_SetMicThreshold, "SetMicThreshold" }, // 2017264008
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Net/VoiceConfig.h" },
				{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVOIPStatics>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVOIPStatics::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UVOIPStatics, 753519050);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVOIPStatics(Z_Construct_UClass_UVOIPStatics, &UVOIPStatics::StaticClass, TEXT("/Script/Engine"), TEXT("UVOIPStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVOIPStatics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
