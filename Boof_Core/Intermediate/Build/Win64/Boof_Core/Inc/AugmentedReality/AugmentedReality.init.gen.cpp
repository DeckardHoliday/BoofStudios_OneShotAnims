// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAugmentedReality_init() {}
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/AugmentedReality",
				PKG_CompiledIn | 0x00000000,
				0xAB31904E,
				0x38E13FEB,
				SingletonFuncArray, ARRAY_COUNT(SingletonFuncArray),
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
