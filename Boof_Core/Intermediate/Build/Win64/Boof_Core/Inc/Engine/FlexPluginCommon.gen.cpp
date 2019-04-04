// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/GameWorks/FlexPluginCommon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlexPluginCommon() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFlexPhase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFlexInertialScale();
// End Cross Module References
class UScriptStruct* FFlexPhase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FFlexPhase_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlexPhase, Z_Construct_UPackage__Script_Engine(), TEXT("FlexPhase"), sizeof(FFlexPhase), Get_Z_Construct_UScriptStruct_FFlexPhase_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFlexPhase(FFlexPhase::StaticStruct, TEXT("/Script/Engine"), TEXT("FlexPhase"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFFlexPhase
{
	FScriptStruct_Engine_StaticRegisterNativesFFlexPhase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FlexPhase")),new UScriptStruct::TCppStructOps<FFlexPhase>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFFlexPhase;
	UScriptStruct* Z_Construct_UScriptStruct_FFlexPhase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFlexPhase_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FlexPhase"), sizeof(FFlexPhase), Get_Z_Construct_UScriptStruct_FFlexPhase_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GameWorks/FlexPluginCommon.h" },
				{ "ToolTip", "Defines flags that control how the particle behaves" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlexPhase>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fluid_MetaData[] = {
				{ "Category", "Phase" },
				{ "ModuleRelativePath", "Public/GameWorks/FlexPluginCommon.h" },
				{ "ToolTip", "Control whether the particles will generate fluid density constraints when interacting with other fluid particles, note that fluids must also be enabled on the container" },
			};
#endif
			auto NewProp_Fluid_SetBit = [](void* Obj){ ((FFlexPhase*)Obj)->Fluid = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Fluid = { UE4CodeGen_Private::EPropertyClass::Bool, "Fluid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFlexPhase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Fluid_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Fluid_MetaData, ARRAY_COUNT(NewProp_Fluid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreRestCollisions_MetaData[] = {
				{ "Category", "Phase" },
				{ "ModuleRelativePath", "Public/GameWorks/FlexPluginCommon.h" },
				{ "ToolTip", "If true then particles will not collide or interact with any particles they overlap in the rest pose" },
			};
#endif
			auto NewProp_IgnoreRestCollisions_SetBit = [](void* Obj){ ((FFlexPhase*)Obj)->IgnoreRestCollisions = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IgnoreRestCollisions = { UE4CodeGen_Private::EPropertyClass::Bool, "IgnoreRestCollisions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFlexPhase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IgnoreRestCollisions_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IgnoreRestCollisions_MetaData, ARRAY_COUNT(NewProp_IgnoreRestCollisions_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfCollide_MetaData[] = {
				{ "Category", "Phase" },
				{ "ModuleRelativePath", "Public/GameWorks/FlexPluginCommon.h" },
				{ "ToolTip", "Control whether particles interact with other particles in the same group" },
			};
#endif
			auto NewProp_SelfCollide_SetBit = [](void* Obj){ ((FFlexPhase*)Obj)->SelfCollide = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SelfCollide = { UE4CodeGen_Private::EPropertyClass::Bool, "SelfCollide", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFlexPhase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_SelfCollide_SetBit)>::SetBit, METADATA_PARAMS(NewProp_SelfCollide_MetaData, ARRAY_COUNT(NewProp_SelfCollide_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[] = {
				{ "Category", "Phase" },
				{ "editcondition", "!AutoAssignGroup" },
				{ "ModuleRelativePath", "Public/GameWorks/FlexPluginCommon.h" },
				{ "ToolTip", "Manually set the group that the particles will be placed in" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Group = { UE4CodeGen_Private::EPropertyClass::Int, "Group", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFlexPhase, Group), METADATA_PARAMS(NewProp_Group_MetaData, ARRAY_COUNT(NewProp_Group_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAssignGroup_MetaData[] = {
				{ "Category", "Phase" },
				{ "ModuleRelativePath", "Public/GameWorks/FlexPluginCommon.h" },
				{ "ToolTip", "If true, then particles will be auto-assigned a new group, by default particles will only collide with particles in different groups" },
			};
#endif
			auto NewProp_AutoAssignGroup_SetBit = [](void* Obj){ ((FFlexPhase*)Obj)->AutoAssignGroup = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoAssignGroup = { UE4CodeGen_Private::EPropertyClass::Bool, "AutoAssignGroup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFlexPhase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_AutoAssignGroup_SetBit)>::SetBit, METADATA_PARAMS(NewProp_AutoAssignGroup_MetaData, ARRAY_COUNT(NewProp_AutoAssignGroup_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Fluid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IgnoreRestCollisions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelfCollide,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Group,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoAssignGroup,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"FlexPhase",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FFlexPhase),
				alignof(FFlexPhase),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFlexPhase_CRC() { return 3123228630U; }
class UScriptStruct* FFlexInertialScale::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FFlexInertialScale_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlexInertialScale, Z_Construct_UPackage__Script_Engine(), TEXT("FlexInertialScale"), sizeof(FFlexInertialScale), Get_Z_Construct_UScriptStruct_FFlexInertialScale_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFlexInertialScale(FFlexInertialScale::StaticStruct, TEXT("/Script/Engine"), TEXT("FlexInertialScale"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFFlexInertialScale
{
	FScriptStruct_Engine_StaticRegisterNativesFFlexInertialScale()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FlexInertialScale")),new UScriptStruct::TCppStructOps<FFlexInertialScale>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFFlexInertialScale;
	UScriptStruct* Z_Construct_UScriptStruct_FFlexInertialScale()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFlexInertialScale_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FlexInertialScale"), sizeof(FFlexInertialScale), Get_Z_Construct_UScriptStruct_FFlexInertialScale_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GameWorks/FlexPluginCommon.h" },
				{ "ToolTip", "Defines values that control how the localized inertia is applied" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlexInertialScale>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularInertialScale_MetaData[] = {
				{ "Category", "LocalInertia" },
				{ "ModuleRelativePath", "Public/GameWorks/FlexPluginCommon.h" },
				{ "ToolTip", "Scale how much of local angular velocity to transmit" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularInertialScale = { UE4CodeGen_Private::EPropertyClass::Float, "AngularInertialScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFlexInertialScale, AngularInertialScale), METADATA_PARAMS(NewProp_AngularInertialScale_MetaData, ARRAY_COUNT(NewProp_AngularInertialScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearInertialScale_MetaData[] = {
				{ "Category", "LocalInertia" },
				{ "ModuleRelativePath", "Public/GameWorks/FlexPluginCommon.h" },
				{ "ToolTip", "Scale how much of local linear velocity to transmit" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearInertialScale = { UE4CodeGen_Private::EPropertyClass::Float, "LinearInertialScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFlexInertialScale, LinearInertialScale), METADATA_PARAMS(NewProp_LinearInertialScale_MetaData, ARRAY_COUNT(NewProp_LinearInertialScale_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngularInertialScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearInertialScale,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"FlexInertialScale",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FFlexInertialScale),
				alignof(FFlexInertialScale),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFlexInertialScale_CRC() { return 1082348982U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
