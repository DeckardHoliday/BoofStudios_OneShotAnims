// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ARLightEstimate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARLightEstimate() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARLightEstimate_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARLightEstimate();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARBasicLightEstimate_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARBasicLightEstimate();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens();
// End Cross Module References
	void UARLightEstimate::StaticRegisterNativesUARLightEstimate()
	{
	}
	UClass* Z_Construct_UClass_UARLightEstimate_NoRegister()
	{
		return UARLightEstimate::StaticClass();
	}
	UClass* Z_Construct_UClass_UARLightEstimate()
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
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality|Light Estimation" },
				{ "DevelopmentStatus", "Experimental" },
				{ "IncludePath", "ARLightEstimate.h" },
				{ "ModuleRelativePath", "Public/ARLightEstimate.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UARLightEstimate>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UARLightEstimate::StaticClass,
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
	IMPLEMENT_CLASS(UARLightEstimate, 1313223075);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARLightEstimate(Z_Construct_UClass_UARLightEstimate, &UARLightEstimate::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARLightEstimate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARLightEstimate);
	void UARBasicLightEstimate::StaticRegisterNativesUARBasicLightEstimate()
	{
		UClass* Class = UARBasicLightEstimate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAmbientColor", &UARBasicLightEstimate::execGetAmbientColor },
			{ "GetAmbientColorTemperatureKelvin", &UARBasicLightEstimate::execGetAmbientColorTemperatureKelvin },
			{ "GetAmbientIntensityLumens", &UARBasicLightEstimate::execGetAmbientIntensityLumens },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor()
	{
		struct ARBasicLightEstimate_eventGetAmbientColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARBasicLightEstimate_eventGetAmbientColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Light Estimation" },
				{ "ModuleRelativePath", "Public/ARLightEstimate.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBasicLightEstimate, "GetAmbientColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(ARBasicLightEstimate_eventGetAmbientColor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin()
	{
		struct ARBasicLightEstimate_eventGetAmbientColorTemperatureKelvin_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARBasicLightEstimate_eventGetAmbientColorTemperatureKelvin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Light Estimation" },
				{ "ModuleRelativePath", "Public/ARLightEstimate.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBasicLightEstimate, "GetAmbientColorTemperatureKelvin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ARBasicLightEstimate_eventGetAmbientColorTemperatureKelvin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens()
	{
		struct ARBasicLightEstimate_eventGetAmbientIntensityLumens_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ARBasicLightEstimate_eventGetAmbientIntensityLumens_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AR AugmentedReality|Light Estimation" },
				{ "ModuleRelativePath", "Public/ARLightEstimate.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBasicLightEstimate, "GetAmbientIntensityLumens", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ARBasicLightEstimate_eventGetAmbientIntensityLumens_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARBasicLightEstimate_NoRegister()
	{
		return UARBasicLightEstimate::StaticClass();
	}
	UClass* Z_Construct_UClass_UARBasicLightEstimate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UARLightEstimate,
				(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor, "GetAmbientColor" }, // 1037001187
				{ &Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin, "GetAmbientColorTemperatureKelvin" }, // 1553833224
				{ &Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens, "GetAmbientIntensityLumens" }, // 3157383299
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality|Light Estimation" },
				{ "IncludePath", "ARLightEstimate.h" },
				{ "ModuleRelativePath", "Public/ARLightEstimate.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientColorTemperatureKelvin_MetaData[] = {
				{ "ModuleRelativePath", "Public/ARLightEstimate.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientColorTemperatureKelvin = { UE4CodeGen_Private::EPropertyClass::Float, "AmbientColorTemperatureKelvin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UARBasicLightEstimate, AmbientColorTemperatureKelvin), METADATA_PARAMS(NewProp_AmbientColorTemperatureKelvin_MetaData, ARRAY_COUNT(NewProp_AmbientColorTemperatureKelvin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientIntensityLumens_MetaData[] = {
				{ "ModuleRelativePath", "Public/ARLightEstimate.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientIntensityLumens = { UE4CodeGen_Private::EPropertyClass::Float, "AmbientIntensityLumens", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UARBasicLightEstimate, AmbientIntensityLumens), METADATA_PARAMS(NewProp_AmbientIntensityLumens_MetaData, ARRAY_COUNT(NewProp_AmbientIntensityLumens_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AmbientColorTemperatureKelvin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AmbientIntensityLumens,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UARBasicLightEstimate>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UARBasicLightEstimate::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UARBasicLightEstimate, 155576159);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARBasicLightEstimate(Z_Construct_UClass_UARBasicLightEstimate, &UARBasicLightEstimate::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARBasicLightEstimate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARBasicLightEstimate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
