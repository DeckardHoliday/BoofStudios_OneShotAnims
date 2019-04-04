// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialInstanceConstant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInstanceConstant() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UMaterialInstanceConstant::StaticRegisterNativesUMaterialInstanceConstant()
	{
		UClass* Class = UMaterialInstanceConstant::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_GetScalarParameterValue", &UMaterialInstanceConstant::execK2_GetScalarParameterValue },
			{ "K2_GetTextureParameterValue", &UMaterialInstanceConstant::execK2_GetTextureParameterValue },
			{ "K2_GetVectorParameterValue", &UMaterialInstanceConstant::execK2_GetVectorParameterValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue()
	{
		struct MaterialInstanceConstant_eventK2_GetScalarParameterValue_Parms
		{
			FName ParameterName;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MaterialInstanceConstant_eventK2_GetScalarParameterValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MaterialInstanceConstant_eventK2_GetScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Material" },
				{ "DisplayName", "GetScalarParameterValue" },
				{ "Keywords", "GetFloatParameterValue" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceConstant.h" },
				{ "ToolTip", "Get the scalar (float) parameter value from an MIC" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceConstant, "K2_GetScalarParameterValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MaterialInstanceConstant_eventK2_GetScalarParameterValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue()
	{
		struct MaterialInstanceConstant_eventK2_GetTextureParameterValue_Parms
		{
			FName ParameterName;
			UTexture* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MaterialInstanceConstant_eventK2_GetTextureParameterValue_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MaterialInstanceConstant_eventK2_GetTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Material" },
				{ "DisplayName", "GetTextureParameterValue" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceConstant.h" },
				{ "ToolTip", "Get the MIC texture parameter value" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceConstant, "K2_GetTextureParameterValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MaterialInstanceConstant_eventK2_GetTextureParameterValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue()
	{
		struct MaterialInstanceConstant_eventK2_GetVectorParameterValue_Parms
		{
			FName ParameterName;
			FLinearColor ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MaterialInstanceConstant_eventK2_GetVectorParameterValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MaterialInstanceConstant_eventK2_GetVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Material" },
				{ "DisplayName", "GetVectorParameterValue" },
				{ "Keywords", "GetColorParameterValue" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceConstant.h" },
				{ "ToolTip", "Get the MIC vector parameter value" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceConstant, "K2_GetVectorParameterValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(MaterialInstanceConstant_eventK2_GetVectorParameterValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister()
	{
		return UMaterialInstanceConstant::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialInstanceConstant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialInstance,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue, "K2_GetScalarParameterValue" }, // 3005717455
				{ &Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue, "K2_GetTextureParameterValue" }, // 4259842414
				{ &Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue, "K2_GetVectorParameterValue" }, // 1316846202
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Materials/MaterialInstanceConstant.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceConstant.h" },
				{ "ToolTip", "Material Instances may be used to change the appearance of a material without incurring an expensive recompilation of the material.\nGeneral modification of the material cannot be supported without recompilation, so the instances are limited to changing the values of\npredefined material parameters. The parameters are statically defined in the compiled material by a unique name, type and default value." },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterStateId_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceConstant.h" },
				{ "ToolTip", "Unique ID for this material instance's parameter set\nUpdated on changes in the editor to allow those changes to be detected" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterStateId = { UE4CodeGen_Private::EPropertyClass::Struct, "ParameterStateId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UMaterialInstanceConstant, ParameterStateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ParameterStateId_MetaData, ARRAY_COUNT(NewProp_ParameterStateId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterStateId,
			};
#endif // WITH_EDITORONLY_DATA
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialInstanceConstant>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialInstanceConstant::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00882080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				IF_WITH_EDITORONLY_DATA(PropPointers, nullptr), IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(PropPointers), 0),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialInstanceConstant, 1975939877);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialInstanceConstant(Z_Construct_UClass_UMaterialInstanceConstant, &UMaterialInstanceConstant::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialInstanceConstant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialInstanceConstant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
