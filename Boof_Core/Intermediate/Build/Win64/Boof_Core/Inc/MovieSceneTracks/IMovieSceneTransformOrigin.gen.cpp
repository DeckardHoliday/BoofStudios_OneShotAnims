// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Tracks/IMovieSceneTransformOrigin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovieSceneTransformOrigin() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTransformOrigin_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTransformOrigin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UFunction* Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	FTransform IMovieSceneTransformOrigin::BP_GetTransformOrigin() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BP_GetTransformOrigin instead.");
		MovieSceneTransformOrigin_eventBP_GetTransformOrigin_Parms Parms;
		return Parms.ReturnValue;
	}
	void UMovieSceneTransformOrigin::StaticRegisterNativesUMovieSceneTransformOrigin()
	{
	}
	UFunction* Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MovieSceneTransformOrigin_eventBP_GetTransformOrigin_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CallInEditor", "true" },
				{ "Category", "Sequencer" },
				{ "DisplayName", "GetTransformOrigin" },
				{ "ModuleRelativePath", "Public/Tracks/IMovieSceneTransformOrigin.h" },
				{ "ToolTip", "Get the transform from which all absolute component transform sections should be relative. Scale is ignored." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneTransformOrigin, "BP_GetTransformOrigin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x5C880800, sizeof(MovieSceneTransformOrigin_eventBP_GetTransformOrigin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovieSceneTransformOrigin_NoRegister()
	{
		return UMovieSceneTransformOrigin::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneTransformOrigin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterface,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin, "BP_GetTransformOrigin" }, // 3706816296
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "Sequencer" },
				{ "DisplayName", "Transform Origin" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Tracks/IMovieSceneTransformOrigin.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<IMovieSceneTransformOrigin>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneTransformOrigin::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00104081u,
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
	IMPLEMENT_CLASS(UMovieSceneTransformOrigin, 1218141251);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneTransformOrigin(Z_Construct_UClass_UMovieSceneTransformOrigin, &UMovieSceneTransformOrigin::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneTransformOrigin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTransformOrigin);
	static FName NAME_UMovieSceneTransformOrigin_BP_GetTransformOrigin = FName(TEXT("BP_GetTransformOrigin"));
	FTransform IMovieSceneTransformOrigin::Execute_BP_GetTransformOrigin(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMovieSceneTransformOrigin::StaticClass()));
		MovieSceneTransformOrigin_eventBP_GetTransformOrigin_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMovieSceneTransformOrigin_BP_GetTransformOrigin);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
