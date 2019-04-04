// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ClothingSimulationInteractorNv.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingSimulationInteractorNv() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UClothingSimulationInteractorNv_NoRegister();
	CLOTHINGSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UClothingSimulationInteractorNv();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationInteractor();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntime();
	CLOTHINGSYSTEMRUNTIME_API UFunction* Z_Construct_UFunction_UClothingSimulationInteractorNv_DisableGravityOverride();
	CLOTHINGSYSTEMRUNTIME_API UFunction* Z_Construct_UFunction_UClothingSimulationInteractorNv_EnableGravityOverride();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CLOTHINGSYSTEMRUNTIME_API UFunction* Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness();
	CLOTHINGSYSTEMRUNTIME_API UFunction* Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness();
// End Cross Module References
	void UClothingSimulationInteractorNv::StaticRegisterNativesUClothingSimulationInteractorNv()
	{
		UClass* Class = UClothingSimulationInteractorNv::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableGravityOverride", &UClothingSimulationInteractorNv::execDisableGravityOverride },
			{ "EnableGravityOverride", &UClothingSimulationInteractorNv::execEnableGravityOverride },
			{ "SetAnimDriveDamperStiffness", &UClothingSimulationInteractorNv::execSetAnimDriveDamperStiffness },
			{ "SetAnimDriveSpringStiffness", &UClothingSimulationInteractorNv::execSetAnimDriveSpringStiffness },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractorNv_DisableGravityOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ClothingSimulation" },
				{ "ModuleRelativePath", "Public/ClothingSimulationInteractorNv.h" },
				{ "ToolTip", "Disable any currently set gravity override" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractorNv, "DisableGravityOverride", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractorNv_EnableGravityOverride()
	{
		struct ClothingSimulationInteractorNv_eventEnableGravityOverride_Parms
		{
			FVector InVector;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVector_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVector = { UE4CodeGen_Private::EPropertyClass::Struct, "InVector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(ClothingSimulationInteractorNv_eventEnableGravityOverride_Parms, InVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_InVector_MetaData, ARRAY_COUNT(NewProp_InVector_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InVector,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ClothingSimulation" },
				{ "ModuleRelativePath", "Public/ClothingSimulationInteractorNv.h" },
				{ "ToolTip", "Set a new gravity override and enable the override" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractorNv, "EnableGravityOverride", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(ClothingSimulationInteractorNv_eventEnableGravityOverride_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness()
	{
		struct ClothingSimulationInteractorNv_eventSetAnimDriveDamperStiffness_Parms
		{
			float InStiffness;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "InStiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ClothingSimulationInteractorNv_eventSetAnimDriveDamperStiffness_Parms, InStiffness), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InStiffness,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ClothingSimulation" },
				{ "ModuleRelativePath", "Public/ClothingSimulationInteractorNv.h" },
				{ "ToolTip", "Set the stiffness of the resistive damping force for anim drive" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractorNv, "SetAnimDriveDamperStiffness", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ClothingSimulationInteractorNv_eventSetAnimDriveDamperStiffness_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness()
	{
		struct ClothingSimulationInteractorNv_eventSetAnimDriveSpringStiffness_Parms
		{
			float InStiffness;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "InStiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ClothingSimulationInteractorNv_eventSetAnimDriveSpringStiffness_Parms, InStiffness), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InStiffness,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ClothingSimulation" },
				{ "ModuleRelativePath", "Public/ClothingSimulationInteractorNv.h" },
				{ "ToolTip", "Set the stiffness of the spring force for anim drive" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractorNv, "SetAnimDriveSpringStiffness", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ClothingSimulationInteractorNv_eventSetAnimDriveSpringStiffness_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UClothingSimulationInteractorNv_NoRegister()
	{
		return UClothingSimulationInteractorNv::StaticClass();
	}
	UClass* Z_Construct_UClass_UClothingSimulationInteractorNv()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UClothingSimulationInteractor,
				(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntime,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UClothingSimulationInteractorNv_DisableGravityOverride, "DisableGravityOverride" }, // 3132822354
				{ &Z_Construct_UFunction_UClothingSimulationInteractorNv_EnableGravityOverride, "EnableGravityOverride" }, // 2043101139
				{ &Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness, "SetAnimDriveDamperStiffness" }, // 1083520760
				{ &Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness, "SetAnimDriveSpringStiffness" }, // 3143761228
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "ClothingSimulationInteractorNv.h" },
				{ "ModuleRelativePath", "Public/ClothingSimulationInteractorNv.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UClothingSimulationInteractorNv>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UClothingSimulationInteractorNv::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UClothingSimulationInteractorNv, 829059939);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothingSimulationInteractorNv(Z_Construct_UClass_UClothingSimulationInteractorNv, &UClothingSimulationInteractorNv::StaticClass, TEXT("/Script/ClothingSystemRuntime"), TEXT("UClothingSimulationInteractorNv"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingSimulationInteractorNv);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
