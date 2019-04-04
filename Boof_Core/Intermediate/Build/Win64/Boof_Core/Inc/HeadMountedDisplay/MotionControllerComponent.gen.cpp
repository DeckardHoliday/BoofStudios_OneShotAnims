// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MotionControllerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionControllerComponent() {}
// Cross Module References
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionControllerComponent_IsTracked();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus();
// End Cross Module References
	static FName NAME_UMotionControllerComponent_OnMotionControllerUpdated = FName(TEXT("OnMotionControllerUpdated"));
	void UMotionControllerComponent::OnMotionControllerUpdated()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMotionControllerComponent_OnMotionControllerUpdated),NULL);
	}
	void UMotionControllerComponent::StaticRegisterNativesUMotionControllerComponent()
	{
		UClass* Class = UMotionControllerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetParameterValue", &UMotionControllerComponent::execGetParameterValue },
			{ "GetTrackingSource", &UMotionControllerComponent::execGetTrackingSource },
			{ "IsTracked", &UMotionControllerComponent::execIsTracked },
			{ "SetAssociatedPlayerIndex", &UMotionControllerComponent::execSetAssociatedPlayerIndex },
			{ "SetCustomDisplayMesh", &UMotionControllerComponent::execSetCustomDisplayMesh },
			{ "SetDisplayModelSource", &UMotionControllerComponent::execSetDisplayModelSource },
			{ "SetShowDeviceModel", &UMotionControllerComponent::execSetShowDeviceModel },
			{ "SetTrackingMotionSource", &UMotionControllerComponent::execSetTrackingMotionSource },
			{ "SetTrackingSource", &UMotionControllerComponent::execSetTrackingSource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue()
	{
		struct MotionControllerComponent_eventGetParameterValue_Parms
		{
			FName InName;
			bool bValueFound;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MotionControllerComponent_eventGetParameterValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bValueFound_SetBit = [](void* Obj){ ((MotionControllerComponent_eventGetParameterValue_Parms*)Obj)->bValueFound = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValueFound = { UE4CodeGen_Private::EPropertyClass::Bool, "bValueFound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MotionControllerComponent_eventGetParameterValue_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bValueFound_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InName = { UE4CodeGen_Private::EPropertyClass::Name, "InName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MotionControllerComponent_eventGetParameterValue_Parms, InName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bValueFound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Motion Controller Update" },
				{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
				{ "ToolTip", "Returns the value of a custom parameter on the current in use Motion Controller (see member InUseMotionController). Only valid for the duration of OnMotionControllerUpdated" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, "GetParameterValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04480401, sizeof(MotionControllerComponent_eventGetParameterValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource()
	{
		struct MotionControllerComponent_eventGetTrackingSource_Parms
		{
			EControllerHand ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MotionControllerComponent_eventGetTrackingSource_Parms, ReturnValue), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintGetter", "" },
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "Please use the Motion Source property instead of Hand" },
				{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, "GetTrackingSource", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MotionControllerComponent_eventGetTrackingSource_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_IsTracked()
	{
		struct MotionControllerComponent_eventIsTracked_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MotionControllerComponent_eventIsTracked_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MotionControllerComponent_eventIsTracked_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MotionController" },
				{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
				{ "ToolTip", "Whether or not this component had a valid tracked device this frame" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, "IsTracked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MotionControllerComponent_eventIsTracked_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Motion Controller Update" },
				{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
				{ "ToolTip", "Blueprint Implementable function for reponding to updated data from a motion controller (so we can use custom paramater values from it)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, "OnMotionControllerUpdated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex()
	{
		struct MotionControllerComponent_eventSetAssociatedPlayerIndex_Parms
		{
			int32 NewPlayer;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPlayer_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewPlayer = { UE4CodeGen_Private::EPropertyClass::Int, "NewPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MotionControllerComponent_eventSetAssociatedPlayerIndex_Parms, NewPlayer), METADATA_PARAMS(NewProp_NewPlayer_MetaData, ARRAY_COUNT(NewProp_NewPlayer_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewPlayer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintSetter", "" },
				{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, "SetAssociatedPlayerIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MotionControllerComponent_eventSetAssociatedPlayerIndex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh()
	{
		struct MotionControllerComponent_eventSetCustomDisplayMesh_Parms
		{
			UStaticMesh* NewDisplayMesh;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewDisplayMesh = { UE4CodeGen_Private::EPropertyClass::Object, "NewDisplayMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MotionControllerComponent_eventSetCustomDisplayMesh_Parms, NewDisplayMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewDisplayMesh,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintSetter", "" },
				{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, "SetCustomDisplayMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MotionControllerComponent_eventSetCustomDisplayMesh_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource()
	{
		struct MotionControllerComponent_eventSetDisplayModelSource_Parms
		{
			FName NewDisplayModelSource;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewDisplayModelSource_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewDisplayModelSource = { UE4CodeGen_Private::EPropertyClass::Name, "NewDisplayModelSource", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MotionControllerComponent_eventSetDisplayModelSource_Parms, NewDisplayModelSource), METADATA_PARAMS(NewProp_NewDisplayModelSource_MetaData, ARRAY_COUNT(NewProp_NewDisplayModelSource_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewDisplayModelSource,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintSetter", "" },
				{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, "SetDisplayModelSource", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MotionControllerComponent_eventSetDisplayModelSource_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel()
	{
		struct MotionControllerComponent_eventSetShowDeviceModel_Parms
		{
			bool bShowControllerModel;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowControllerModel_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			auto NewProp_bShowControllerModel_SetBit = [](void* Obj){ ((MotionControllerComponent_eventSetShowDeviceModel_Parms*)Obj)->bShowControllerModel = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowControllerModel = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowControllerModel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MotionControllerComponent_eventSetShowDeviceModel_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowControllerModel_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowControllerModel_MetaData, ARRAY_COUNT(NewProp_bShowControllerModel_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowControllerModel,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintSetter", "" },
				{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, "SetShowDeviceModel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MotionControllerComponent_eventSetShowDeviceModel_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource()
	{
		struct MotionControllerComponent_eventSetTrackingMotionSource_Parms
		{
			FName NewSource;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewSource_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewSource = { UE4CodeGen_Private::EPropertyClass::Name, "NewSource", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MotionControllerComponent_eventSetTrackingMotionSource_Parms, NewSource), METADATA_PARAMS(NewProp_NewSource_MetaData, ARRAY_COUNT(NewProp_NewSource_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewSource,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintSetter", "" },
				{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, "SetTrackingMotionSource", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MotionControllerComponent_eventSetTrackingMotionSource_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource()
	{
		struct MotionControllerComponent_eventSetTrackingSource_Parms
		{
			EControllerHand NewSource;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewSource_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewSource = { UE4CodeGen_Private::EPropertyClass::Enum, "NewSource", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MotionControllerComponent_eventSetTrackingSource_Parms, NewSource), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(NewProp_NewSource_MetaData, ARRAY_COUNT(NewProp_NewSource_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewSource_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewSource,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewSource_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintSetter", "" },
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "Please use the Motion Source property instead of Hand" },
				{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, "SetTrackingSource", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MotionControllerComponent_eventSetTrackingSource_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister()
	{
		return UMotionControllerComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UMotionControllerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue, "GetParameterValue" }, // 1620310360
				{ &Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource, "GetTrackingSource" }, // 1665159402
				{ &Z_Construct_UFunction_UMotionControllerComponent_IsTracked, "IsTracked" }, // 3661370636
				{ &Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated, "OnMotionControllerUpdated" }, // 1744317251
				{ &Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex, "SetAssociatedPlayerIndex" }, // 1966687905
				{ &Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh, "SetCustomDisplayMesh" }, // 2451053351
				{ &Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource, "SetDisplayModelSource" }, // 3799015356
				{ &Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel, "SetShowDeviceModel" }, // 1732270310
				{ &Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource, "SetTrackingMotionSource" }, // 4002267147
				{ &Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource, "SetTrackingSource" }, // 3614238116
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "MotionController" },
				{ "HideCategories", "Mobility Trigger" },
				{ "IncludePath", "MotionControllerComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Visualization" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DisplayComponent = { UE4CodeGen_Private::EPropertyClass::Object, "DisplayComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x004000000008201c, 1, nullptr, STRUCT_OFFSET(UMotionControllerComponent, DisplayComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_DisplayComponent_MetaData, ARRAY_COUNT(NewProp_DisplayComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayMeshMaterialOverrides_MetaData[] = {
				{ "Category", "Visualization" },
				{ "editcondition", "bDisplayDeviceModel" },
				{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
				{ "ToolTip", "Material overrides for the specified display mesh." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DisplayMeshMaterialOverrides = { UE4CodeGen_Private::EPropertyClass::Array, "DisplayMeshMaterialOverrides", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UMotionControllerComponent, DisplayMeshMaterialOverrides), METADATA_PARAMS(NewProp_DisplayMeshMaterialOverrides_MetaData, ARRAY_COUNT(NewProp_DisplayMeshMaterialOverrides_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DisplayMeshMaterialOverrides_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "DisplayMeshMaterialOverrides", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDisplayMesh_MetaData[] = {
				{ "BlueprintSetter", "SetCustomDisplayMesh" },
				{ "Category", "Visualization" },
				{ "editcondition", "bDisplayDeviceModel" },
				{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
				{ "ToolTip", "A mesh override that'll be displayed attached to this MotionController." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomDisplayMesh = { UE4CodeGen_Private::EPropertyClass::Object, "CustomDisplayMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMotionControllerComponent, CustomDisplayMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_CustomDisplayMesh_MetaData, ARRAY_COUNT(NewProp_CustomDisplayMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayModelSource_MetaData[] = {
				{ "BlueprintSetter", "SetDisplayModelSource" },
				{ "Category", "Visualization" },
				{ "editcondition", "bDisplayDeviceModel" },
				{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
				{ "ToolTip", "Determines the source of the desired model. By default, the active XR system(s) will be queried and (if available) will provide a model for the associated device. NOTE: this may fail if there's no default model; use 'Custom' to specify your own." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_DisplayModelSource = { UE4CodeGen_Private::EPropertyClass::Name, "DisplayModelSource", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMotionControllerComponent, DisplayModelSource), METADATA_PARAMS(NewProp_DisplayModelSource_MetaData, ARRAY_COUNT(NewProp_DisplayModelSource_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayDeviceModel_MetaData[] = {
				{ "BlueprintSetter", "SetShowDeviceModel" },
				{ "Category", "Visualization" },
				{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
				{ "ToolTip", "Used to automatically render a model associated with the set hand." },
			};
#endif
			auto NewProp_bDisplayDeviceModel_SetBit = [](void* Obj){ ((UMotionControllerComponent*)Obj)->bDisplayDeviceModel = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayDeviceModel = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisplayDeviceModel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMotionControllerComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisplayDeviceModel_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisplayDeviceModel_MetaData, ARRAY_COUNT(NewProp_bDisplayDeviceModel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTrackingStatus_MetaData[] = {
				{ "Category", "MotionController" },
				{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
				{ "ToolTip", "The tracking status for the device (e.g. full tracking, inertial tracking only, no tracking)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentTrackingStatus = { UE4CodeGen_Private::EPropertyClass::Enum, "CurrentTrackingStatus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UMotionControllerComponent, CurrentTrackingStatus), Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus, METADATA_PARAMS(NewProp_CurrentTrackingStatus_MetaData, ARRAY_COUNT(NewProp_CurrentTrackingStatus_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentTrackingStatus_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableLowLatencyUpdate_MetaData[] = {
				{ "Category", "MotionController" },
				{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
				{ "ToolTip", "If false, render transforms within the motion controller hierarchy will be updated a second time immediately before rendering." },
			};
#endif
			auto NewProp_bDisableLowLatencyUpdate_SetBit = [](void* Obj){ ((UMotionControllerComponent*)Obj)->bDisableLowLatencyUpdate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableLowLatencyUpdate = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableLowLatencyUpdate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMotionControllerComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisableLowLatencyUpdate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisableLowLatencyUpdate_MetaData, ARRAY_COUNT(NewProp_bDisableLowLatencyUpdate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionSource_MetaData[] = {
				{ "BlueprintSetter", "SetTrackingMotionSource" },
				{ "Category", "MotionController" },
				{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_MotionSource = { UE4CodeGen_Private::EPropertyClass::Name, "MotionSource", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMotionControllerComponent, MotionSource), METADATA_PARAMS(NewProp_MotionSource_MetaData, ARRAY_COUNT(NewProp_MotionSource_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[] = {
				{ "BlueprintGetter", "GetTrackingSource" },
				{ "BlueprintSetter", "SetTrackingSource" },
				{ "Category", "MotionController" },
				{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
				{ "ToolTip", "DEPRECATED (use MotionSource instead) Which hand this component should automatically follow" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand = { UE4CodeGen_Private::EPropertyClass::Enum, "Hand", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000004, 1, nullptr, STRUCT_OFFSET(UMotionControllerComponent, Hand_DEPRECATED), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(NewProp_Hand_MetaData, ARRAY_COUNT(NewProp_Hand_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[] = {
				{ "BlueprintSetter", "SetAssociatedPlayerIndex" },
				{ "Category", "MotionController" },
				{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
				{ "ToolTip", "Which player index this motion controller should automatically follow" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex = { UE4CodeGen_Private::EPropertyClass::Int, "PlayerIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMotionControllerComponent, PlayerIndex), METADATA_PARAMS(NewProp_PlayerIndex_MetaData, ARRAY_COUNT(NewProp_PlayerIndex_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisplayComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisplayMeshMaterialOverrides,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisplayMeshMaterialOverrides_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomDisplayMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisplayModelSource,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisplayDeviceModel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentTrackingStatus,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentTrackingStatus_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisableLowLatencyUpdate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MotionSource,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hand,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hand_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerIndex,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMotionControllerComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMotionControllerComponent::StaticClass,
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
	IMPLEMENT_CLASS(UMotionControllerComponent, 399744893);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMotionControllerComponent(Z_Construct_UClass_UMotionControllerComponent, &UMotionControllerComponent::StaticClass, TEXT("/Script/HeadMountedDisplay"), TEXT("UMotionControllerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionControllerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
