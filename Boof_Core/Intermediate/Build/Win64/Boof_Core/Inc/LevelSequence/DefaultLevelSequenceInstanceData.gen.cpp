// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/DefaultLevelSequenceInstanceData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultLevelSequenceInstanceData() {}
// Cross Module References
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_UDefaultLevelSequenceInstanceData_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_UDefaultLevelSequenceInstanceData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTransformOrigin_NoRegister();
// End Cross Module References
	void UDefaultLevelSequenceInstanceData::StaticRegisterNativesUDefaultLevelSequenceInstanceData()
	{
	}
	UClass* Z_Construct_UClass_UDefaultLevelSequenceInstanceData_NoRegister()
	{
		return UDefaultLevelSequenceInstanceData::StaticClass();
	}
	UClass* Z_Construct_UClass_UDefaultLevelSequenceInstanceData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "DefaultLevelSequenceInstanceData.h" },
				{ "ModuleRelativePath", "Public/DefaultLevelSequenceInstanceData.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "Default instance data class that level sequences understand. Implements IMovieSceneTransformOrigin." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformOrigin_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/DefaultLevelSequenceInstanceData.h" },
				{ "ToolTip", "Specifies a transform from which all absolute transform sections inside the sequence should be added to. Scale is ignored." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformOrigin = { UE4CodeGen_Private::EPropertyClass::Struct, "TransformOrigin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UDefaultLevelSequenceInstanceData, TransformOrigin), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_TransformOrigin_MetaData, ARRAY_COUNT(NewProp_TransformOrigin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformOriginActor_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/DefaultLevelSequenceInstanceData.h" },
				{ "ToolTip", "When set, this actor's world position will be used as the transform origin for all absolute transform sections" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TransformOriginActor = { UE4CodeGen_Private::EPropertyClass::Object, "TransformOriginActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UDefaultLevelSequenceInstanceData, TransformOriginActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_TransformOriginActor_MetaData, ARRAY_COUNT(NewProp_TransformOriginActor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransformOrigin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransformOriginActor,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UMovieSceneTransformOrigin_NoRegister, (int32)VTABLE_OFFSET(UDefaultLevelSequenceInstanceData, IMovieSceneTransformOrigin), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDefaultLevelSequenceInstanceData>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDefaultLevelSequenceInstanceData::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDefaultLevelSequenceInstanceData, 3565782509);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDefaultLevelSequenceInstanceData(Z_Construct_UClass_UDefaultLevelSequenceInstanceData, &UDefaultLevelSequenceInstanceData::StaticClass, TEXT("/Script/LevelSequence"), TEXT("UDefaultLevelSequenceInstanceData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDefaultLevelSequenceInstanceData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
