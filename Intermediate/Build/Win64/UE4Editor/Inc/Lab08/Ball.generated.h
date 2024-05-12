// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
struct FVector;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef LAB08_Ball_generated_h
#error "Ball.generated.h already included, missing '#pragma once' in Ball.h"
#endif
#define LAB08_Ball_generated_h

#define Lab08_Source_Lab08_Ball_h_13_SPARSE_DATA
#define Lab08_Source_Lab08_Ball_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBall); \
	DECLARE_FUNCTION(execEnableCollision); \
	DECLARE_FUNCTION(execSetVelocity); \
	DECLARE_FUNCTION(execCalculateReflectionVelocity); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Lab08_Source_Lab08_Ball_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBall); \
	DECLARE_FUNCTION(execEnableCollision); \
	DECLARE_FUNCTION(execSetVelocity); \
	DECLARE_FUNCTION(execCalculateReflectionVelocity); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Lab08_Source_Lab08_Ball_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lab08"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define Lab08_Source_Lab08_Ball_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lab08"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define Lab08_Source_Lab08_Ball_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public:


#define Lab08_Source_Lab08_Ball_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABall)


#define Lab08_Source_Lab08_Ball_h_13_PRIVATE_PROPERTY_OFFSET
#define Lab08_Source_Lab08_Ball_h_10_PROLOG
#define Lab08_Source_Lab08_Ball_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Lab08_Source_Lab08_Ball_h_13_PRIVATE_PROPERTY_OFFSET \
	Lab08_Source_Lab08_Ball_h_13_SPARSE_DATA \
	Lab08_Source_Lab08_Ball_h_13_RPC_WRAPPERS \
	Lab08_Source_Lab08_Ball_h_13_INCLASS \
	Lab08_Source_Lab08_Ball_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Lab08_Source_Lab08_Ball_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Lab08_Source_Lab08_Ball_h_13_PRIVATE_PROPERTY_OFFSET \
	Lab08_Source_Lab08_Ball_h_13_SPARSE_DATA \
	Lab08_Source_Lab08_Ball_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Lab08_Source_Lab08_Ball_h_13_INCLASS_NO_PURE_DECLS \
	Lab08_Source_Lab08_Ball_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LAB08_API UClass* StaticClass<class ABall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Lab08_Source_Lab08_Ball_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
