// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EARTrackingState : uint8;
struct FTransform;
class UARPlaneGeometry;
struct FVector;
enum class EARFaceBlendShape : uint8; 
enum class EARFaceBlendShape : uint8;
#ifdef AUGMENTEDREALITY_ARTrackable_generated_h
#error "ARTrackable.generated.h already included, missing '#pragma once' in ARTrackable.h"
#endif
#define AUGMENTEDREALITY_ARTrackable_generated_h

#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLastUpdateTimestamp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLastUpdateTimestamp(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastUpdateFrameNumber) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetLastUpdateFrameNumber(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDebugName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetDebugName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackingState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARTrackingState*)Z_Param__Result=P_THIS->GetTrackingState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalToTrackingTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalToTrackingTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalToWorldTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalToWorldTransform(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLastUpdateTimestamp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLastUpdateTimestamp(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastUpdateFrameNumber) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetLastUpdateFrameNumber(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDebugName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetDebugName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackingState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARTrackingState*)Z_Param__Result=P_THIS->GetTrackingState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalToTrackingTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalToTrackingTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalToWorldTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalToWorldTransform(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTrackedGeometry(); \
	friend AUGMENTEDREALITY_API class UClass* Z_Construct_UClass_UARTrackedGeometry(); \
public: \
	DECLARE_CLASS(UARTrackedGeometry, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedGeometry) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUARTrackedGeometry(); \
	friend AUGMENTEDREALITY_API class UClass* Z_Construct_UClass_UARTrackedGeometry(); \
public: \
	DECLARE_CLASS(UARTrackedGeometry, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedGeometry) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedGeometry(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTrackedGeometry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedGeometry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedGeometry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackedGeometry(UARTrackedGeometry&&); \
	NO_API UARTrackedGeometry(const UARTrackedGeometry&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackedGeometry(UARTrackedGeometry&&); \
	NO_API UARTrackedGeometry(const UARTrackedGeometry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedGeometry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedGeometry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARTrackedGeometry)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LocalToTrackingTransform() { return STRUCT_OFFSET(UARTrackedGeometry, LocalToTrackingTransform); } \
	FORCEINLINE static uint32 __PPO__LocalToAlignedTrackingTransform() { return STRUCT_OFFSET(UARTrackedGeometry, LocalToAlignedTrackingTransform); } \
	FORCEINLINE static uint32 __PPO__TrackingState() { return STRUCT_OFFSET(UARTrackedGeometry, TrackingState); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_10_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_13_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_13_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_83_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSubsumedBy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARPlaneGeometry**)Z_Param__Result=P_THIS->GetSubsumedBy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoundaryPolygonInLocalSpace) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetBoundaryPolygonInLocalSpace(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExtent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetExtent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCenter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCenter(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSubsumedBy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARPlaneGeometry**)Z_Param__Result=P_THIS->GetSubsumedBy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoundaryPolygonInLocalSpace) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetBoundaryPolygonInLocalSpace(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExtent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetExtent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCenter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCenter(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARPlaneGeometry(); \
	friend AUGMENTEDREALITY_API class UClass* Z_Construct_UClass_UARPlaneGeometry(); \
public: \
	DECLARE_CLASS(UARPlaneGeometry, UARTrackedGeometry, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARPlaneGeometry) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_83_INCLASS \
private: \
	static void StaticRegisterNativesUARPlaneGeometry(); \
	friend AUGMENTEDREALITY_API class UClass* Z_Construct_UClass_UARPlaneGeometry(); \
public: \
	DECLARE_CLASS(UARPlaneGeometry, UARTrackedGeometry, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARPlaneGeometry) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_83_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARPlaneGeometry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARPlaneGeometry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPlaneGeometry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPlaneGeometry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARPlaneGeometry(UARPlaneGeometry&&); \
	NO_API UARPlaneGeometry(const UARPlaneGeometry&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_83_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARPlaneGeometry() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARPlaneGeometry(UARPlaneGeometry&&); \
	NO_API UARPlaneGeometry(const UARPlaneGeometry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPlaneGeometry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPlaneGeometry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARPlaneGeometry)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_83_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Center() { return STRUCT_OFFSET(UARPlaneGeometry, Center); } \
	FORCEINLINE static uint32 __PPO__Extent() { return STRUCT_OFFSET(UARPlaneGeometry, Extent); } \
	FORCEINLINE static uint32 __PPO__BoundaryPolygon() { return STRUCT_OFFSET(UARPlaneGeometry, BoundaryPolygon); } \
	FORCEINLINE static uint32 __PPO__SubsumedBy() { return STRUCT_OFFSET(UARPlaneGeometry, SubsumedBy); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_80_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_83_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_83_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_83_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_83_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_83_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_83_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_83_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_83_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_124_RPC_WRAPPERS
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_124_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_124_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTrackedPoint(); \
	friend AUGMENTEDREALITY_API class UClass* Z_Construct_UClass_UARTrackedPoint(); \
public: \
	DECLARE_CLASS(UARTrackedPoint, UARTrackedGeometry, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedPoint) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_124_INCLASS \
private: \
	static void StaticRegisterNativesUARTrackedPoint(); \
	friend AUGMENTEDREALITY_API class UClass* Z_Construct_UClass_UARTrackedPoint(); \
public: \
	DECLARE_CLASS(UARTrackedPoint, UARTrackedGeometry, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedPoint) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_124_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTrackedPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackedPoint(UARTrackedPoint&&); \
	NO_API UARTrackedPoint(const UARTrackedPoint&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_124_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedPoint() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackedPoint(UARTrackedPoint&&); \
	NO_API UARTrackedPoint(const UARTrackedPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARTrackedPoint)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_124_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_121_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_124_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_124_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_124_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_124_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_124_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_124_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_124_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_124_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_210_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBlendShapes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<EARFaceBlendShape,float>*)Z_Param__Result=P_THIS->GetBlendShapes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlendShapeValue) \
	{ \
		P_GET_ENUM(EARFaceBlendShape,Z_Param_BlendShape); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBlendShapeValue(EARFaceBlendShape(Z_Param_BlendShape)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_210_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBlendShapes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<EARFaceBlendShape,float>*)Z_Param__Result=P_THIS->GetBlendShapes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlendShapeValue) \
	{ \
		P_GET_ENUM(EARFaceBlendShape,Z_Param_BlendShape); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBlendShapeValue(EARFaceBlendShape(Z_Param_BlendShape)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_210_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARFaceGeometry(); \
	friend AUGMENTEDREALITY_API class UClass* Z_Construct_UClass_UARFaceGeometry(); \
public: \
	DECLARE_CLASS(UARFaceGeometry, UARTrackedGeometry, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARFaceGeometry) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_210_INCLASS \
private: \
	static void StaticRegisterNativesUARFaceGeometry(); \
	friend AUGMENTEDREALITY_API class UClass* Z_Construct_UClass_UARFaceGeometry(); \
public: \
	DECLARE_CLASS(UARFaceGeometry, UARTrackedGeometry, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARFaceGeometry) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_210_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARFaceGeometry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARFaceGeometry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARFaceGeometry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARFaceGeometry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARFaceGeometry(UARFaceGeometry&&); \
	NO_API UARFaceGeometry(const UARFaceGeometry&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_210_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARFaceGeometry() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARFaceGeometry(UARFaceGeometry&&); \
	NO_API UARFaceGeometry(const UARFaceGeometry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARFaceGeometry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARFaceGeometry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARFaceGeometry)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_210_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BlendShapes() { return STRUCT_OFFSET(UARFaceGeometry, BlendShapes); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_207_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_210_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_210_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_210_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_210_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_210_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_210_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_210_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_210_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_210_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_210_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h


#define FOREACH_ENUM_EARFACEBLENDSHAPE(op) \
	op(EARFaceBlendShape::EyeBlinkLeft) \
	op(EARFaceBlendShape::EyeLookDownLeft) \
	op(EARFaceBlendShape::EyeLookInLeft) \
	op(EARFaceBlendShape::EyeLookOutLeft) \
	op(EARFaceBlendShape::EyeLookUpLeft) \
	op(EARFaceBlendShape::EyeSquintLeft) \
	op(EARFaceBlendShape::EyeWideLeft) \
	op(EARFaceBlendShape::EyeBlinkRight) \
	op(EARFaceBlendShape::EyeLookDownRight) \
	op(EARFaceBlendShape::EyeLookInRight) \
	op(EARFaceBlendShape::EyeLookOutRight) \
	op(EARFaceBlendShape::EyeLookUpRight) \
	op(EARFaceBlendShape::EyeSquintRight) \
	op(EARFaceBlendShape::EyeWideRight) \
	op(EARFaceBlendShape::JawForward) \
	op(EARFaceBlendShape::JawLeft) \
	op(EARFaceBlendShape::JawRight) \
	op(EARFaceBlendShape::JawOpen) \
	op(EARFaceBlendShape::MouthClose) \
	op(EARFaceBlendShape::MouthFunnel) \
	op(EARFaceBlendShape::MouthPucker) \
	op(EARFaceBlendShape::MouthLeft) \
	op(EARFaceBlendShape::MouthRight) \
	op(EARFaceBlendShape::MouthSmileLeft) \
	op(EARFaceBlendShape::MouthSmileRight) \
	op(EARFaceBlendShape::MouthFrownLeft) \
	op(EARFaceBlendShape::MouthFrownRight) \
	op(EARFaceBlendShape::MouthDimpleLeft) \
	op(EARFaceBlendShape::MouthDimpleRight) \
	op(EARFaceBlendShape::MouthStretchLeft) \
	op(EARFaceBlendShape::MouthStretchRight) \
	op(EARFaceBlendShape::MouthRollLower) \
	op(EARFaceBlendShape::MouthRollUpper) \
	op(EARFaceBlendShape::MouthShrugLower) \
	op(EARFaceBlendShape::MouthShrugUpper) \
	op(EARFaceBlendShape::MouthPressLeft) \
	op(EARFaceBlendShape::MouthPressRight) \
	op(EARFaceBlendShape::MouthLowerDownLeft) \
	op(EARFaceBlendShape::MouthLowerDownRight) \
	op(EARFaceBlendShape::MouthUpperUpLeft) \
	op(EARFaceBlendShape::MouthUpperUpRight) \
	op(EARFaceBlendShape::BrowDownLeft) \
	op(EARFaceBlendShape::BrowDownRight) \
	op(EARFaceBlendShape::BrowInnerUp) \
	op(EARFaceBlendShape::BrowOuterUpLeft) \
	op(EARFaceBlendShape::BrowOuterUpRight) \
	op(EARFaceBlendShape::CheekPuff) \
	op(EARFaceBlendShape::CheekSquintLeft) \
	op(EARFaceBlendShape::CheekSquintRight) \
	op(EARFaceBlendShape::NoseSneerLeft) \
	op(EARFaceBlendShape::NoseSneerRight) 
#define FOREACH_ENUM_EARFACETRACKINGDIRECTION(op) \
	op(EARFaceTrackingDirection::FaceRelative) \
	op(EARFaceTrackingDirection::FaceMirrored) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
