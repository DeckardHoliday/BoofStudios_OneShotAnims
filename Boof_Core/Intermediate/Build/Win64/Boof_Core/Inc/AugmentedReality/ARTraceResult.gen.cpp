// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ARTraceResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARTraceResult() {}
// Cross Module References
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARTraceResult();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedGeometry_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTraceResultDummy_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTraceResultDummy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FARTraceResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUGMENTEDREALITY_API uint32 Get_Z_Construct_UScriptStruct_FARTraceResult_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FARTraceResult, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARTraceResult"), sizeof(FARTraceResult), Get_Z_Construct_UScriptStruct_FARTraceResult_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FARTraceResult(FARTraceResult::StaticStruct, TEXT("/Script/AugmentedReality"), TEXT("ARTraceResult"), false, nullptr, nullptr);
static struct FScriptStruct_AugmentedReality_StaticRegisterNativesFARTraceResult
{
	FScriptStruct_AugmentedReality_StaticRegisterNativesFARTraceResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ARTraceResult")),new UScriptStruct::TCppStructOps<FARTraceResult>);
	}
} ScriptStruct_AugmentedReality_StaticRegisterNativesFARTraceResult;
	UScriptStruct* Z_Construct_UScriptStruct_FARTraceResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FARTraceResult_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ARTraceResult"), sizeof(FARTraceResult), Get_Z_Construct_UScriptStruct_FARTraceResult_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality" },
				{ "Experimental", "" },
				{ "ModuleRelativePath", "Public/ARTraceResult.h" },
				{ "ToolTip", "A result of an intersection found during a hit-test." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARTraceResult>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedGeometry_MetaData[] = {
				{ "ModuleRelativePath", "Public/ARTraceResult.h" },
				{ "ToolTip", "A pointer to the geometry data that was intersected by this trace, if any." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackedGeometry = { UE4CodeGen_Private::EPropertyClass::Object, "TrackedGeometry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FARTraceResult, TrackedGeometry), Z_Construct_UClass_UARTrackedGeometry_NoRegister, METADATA_PARAMS(NewProp_TrackedGeometry_MetaData, ARRAY_COUNT(NewProp_TrackedGeometry_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalToTrackingTransform_MetaData[] = {
				{ "ModuleRelativePath", "Public/ARTraceResult.h" },
				{ "ToolTip", "The transformation matrix that defines the intersection's rotation, translation and scale\nrelative to the world." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalToTrackingTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "LocalToTrackingTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FARTraceResult, LocalToTrackingTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_LocalToTrackingTransform_MetaData, ARRAY_COUNT(NewProp_LocalToTrackingTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
				{ "ModuleRelativePath", "Public/ARTraceResult.h" },
				{ "ToolTip", "The trace channel that generated this trace result. (used for filtering)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TraceChannel = { UE4CodeGen_Private::EPropertyClass::Enum, "TraceChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FARTraceResult, TraceChannel), Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels, METADATA_PARAMS(NewProp_TraceChannel_MetaData, ARRAY_COUNT(NewProp_TraceChannel_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFromCamera_MetaData[] = {
				{ "ModuleRelativePath", "Public/ARTraceResult.h" },
				{ "ToolTip", "Distance (in Unreal Units) between the camera and the point where the line trace contacted tracked geometry." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFromCamera = { UE4CodeGen_Private::EPropertyClass::Float, "DistanceFromCamera", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FARTraceResult, DistanceFromCamera), METADATA_PARAMS(NewProp_DistanceFromCamera_MetaData, ARRAY_COUNT(NewProp_DistanceFromCamera_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackedGeometry,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalToTrackingTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TraceChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TraceChannel_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceFromCamera,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ARTraceResult",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FARTraceResult),
				alignof(FARTraceResult),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FARTraceResult_CRC() { return 2175504747U; }
	void UARTraceResultDummy::StaticRegisterNativesUARTraceResultDummy()
	{
	}
	UClass* Z_Construct_UClass_UARTraceResultDummy_NoRegister()
	{
		return UARTraceResultDummy::StaticClass();
	}
	UClass* Z_Construct_UClass_UARTraceResultDummy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ARTraceResult.h" },
				{ "ModuleRelativePath", "Public/ARTraceResult.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UARTraceResultDummy>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UARTraceResultDummy::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UARTraceResultDummy, 3712358167);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARTraceResultDummy(Z_Construct_UClass_UARTraceResultDummy, &UARTraceResultDummy::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARTraceResultDummy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTraceResultDummy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
