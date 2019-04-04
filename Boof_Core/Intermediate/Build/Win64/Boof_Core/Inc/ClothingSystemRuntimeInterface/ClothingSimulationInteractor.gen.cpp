// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ClothingSimulationInteractor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingSimulationInteractor() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationInteractor_NoRegister();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationInteractor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated();
// End Cross Module References
	void UClothingSimulationInteractor::StaticRegisterNativesUClothingSimulationInteractor()
	{
		UClass* Class = UClothingSimulationInteractor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClothConfigUpdated", &UClothingSimulationInteractor::execClothConfigUpdated },
			{ "PhysicsAssetUpdated", &UClothingSimulationInteractor::execPhysicsAssetUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ClothingSimulation" },
				{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
				{ "ToolTip", "Called to update the cloth config without restarting the simulation" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, "ClothConfigUpdated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ClothingSimulation" },
				{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
				{ "ToolTip", "Called to update collision status without restarting the simulation" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, "PhysicsAssetUpdated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UClothingSimulationInteractor_NoRegister()
	{
		return UClothingSimulationInteractor::StaticClass();
	}
	UClass* Z_Construct_UClass_UClothingSimulationInteractor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated, "ClothConfigUpdated" }, // 3628802764
				{ &Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated, "PhysicsAssetUpdated" }, // 2129223238
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ClothingSimulationInteractor.h" },
				{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
				{ "ToolTip", "If a clothing simulation is able to be interacted with at runtime then a derived\ninteractor should be created, and at least the basic API implemented for that\nsimulation.\nOnly write to the simulation and context during the call to Sync, as that is\nguaranteed to be a safe place to access this data." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UClothingSimulationInteractor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UClothingSimulationInteractor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100081u,
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
	IMPLEMENT_CLASS(UClothingSimulationInteractor, 3365754277);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothingSimulationInteractor(Z_Construct_UClass_UClothingSimulationInteractor, &UClothingSimulationInteractor::StaticClass, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("UClothingSimulationInteractor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingSimulationInteractor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
