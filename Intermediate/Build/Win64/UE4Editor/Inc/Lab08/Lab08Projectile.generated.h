// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef LAB08_Lab08Projectile_generated_h
#error "Lab08Projectile.generated.h already included, missing '#pragma once' in Lab08Projectile.h"
#endif
#define LAB08_Lab08Projectile_generated_h

#define Lab08_Source_Lab08_Lab08Projectile_h_15_SPARSE_DATA
#define Lab08_Source_Lab08_Lab08Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Lab08_Source_Lab08_Lab08Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Lab08_Source_Lab08_Lab08Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALab08Projectile(); \
	friend struct Z_Construct_UClass_ALab08Projectile_Statics; \
public: \
	DECLARE_CLASS(ALab08Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lab08"), NO_API) \
	DECLARE_SERIALIZER(ALab08Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Lab08_Source_Lab08_Lab08Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALab08Projectile(); \
	friend struct Z_Construct_UClass_ALab08Projectile_Statics; \
public: \
	DECLARE_CLASS(ALab08Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lab08"), NO_API) \
	DECLARE_SERIALIZER(ALab08Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Lab08_Source_Lab08_Lab08Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALab08Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALab08Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALab08Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALab08Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALab08Projectile(ALab08Projectile&&); \
	NO_API ALab08Projectile(const ALab08Projectile&); \
public:


#define Lab08_Source_Lab08_Lab08Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALab08Projectile(ALab08Projectile&&); \
	NO_API ALab08Projectile(const ALab08Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALab08Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALab08Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALab08Projectile)


#define Lab08_Source_Lab08_Lab08Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(ALab08Projectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ALab08Projectile, ProjectileMovement); }


#define Lab08_Source_Lab08_Lab08Projectile_h_12_PROLOG
#define Lab08_Source_Lab08_Lab08Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Lab08_Source_Lab08_Lab08Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Lab08_Source_Lab08_Lab08Projectile_h_15_SPARSE_DATA \
	Lab08_Source_Lab08_Lab08Projectile_h_15_RPC_WRAPPERS \
	Lab08_Source_Lab08_Lab08Projectile_h_15_INCLASS \
	Lab08_Source_Lab08_Lab08Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Lab08_Source_Lab08_Lab08Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Lab08_Source_Lab08_Lab08Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Lab08_Source_Lab08_Lab08Projectile_h_15_SPARSE_DATA \
	Lab08_Source_Lab08_Lab08Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Lab08_Source_Lab08_Lab08Projectile_h_15_INCLASS_NO_PURE_DECLS \
	Lab08_Source_Lab08_Lab08Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LAB08_API UClass* StaticClass<class ALab08Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Lab08_Source_Lab08_Lab08Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
