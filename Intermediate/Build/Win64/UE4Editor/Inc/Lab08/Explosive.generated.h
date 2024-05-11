// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LAB08_Explosive_generated_h
#error "Explosive.generated.h already included, missing '#pragma once' in Explosive.h"
#endif
#define LAB08_Explosive_generated_h

#define Lab08_Source_Lab08_Explosive_h_13_SPARSE_DATA
#define Lab08_Source_Lab08_Explosive_h_13_RPC_WRAPPERS
#define Lab08_Source_Lab08_Explosive_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Lab08_Source_Lab08_Explosive_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LAB08_API UExplosive(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExplosive) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LAB08_API, UExplosive); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExplosive); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LAB08_API UExplosive(UExplosive&&); \
	LAB08_API UExplosive(const UExplosive&); \
public:


#define Lab08_Source_Lab08_Explosive_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LAB08_API UExplosive(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LAB08_API UExplosive(UExplosive&&); \
	LAB08_API UExplosive(const UExplosive&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LAB08_API, UExplosive); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExplosive); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExplosive)


#define Lab08_Source_Lab08_Explosive_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUExplosive(); \
	friend struct Z_Construct_UClass_UExplosive_Statics; \
public: \
	DECLARE_CLASS(UExplosive, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Lab08"), LAB08_API) \
	DECLARE_SERIALIZER(UExplosive)


#define Lab08_Source_Lab08_Explosive_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Lab08_Source_Lab08_Explosive_h_13_GENERATED_UINTERFACE_BODY() \
	Lab08_Source_Lab08_Explosive_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Lab08_Source_Lab08_Explosive_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Lab08_Source_Lab08_Explosive_h_13_GENERATED_UINTERFACE_BODY() \
	Lab08_Source_Lab08_Explosive_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Lab08_Source_Lab08_Explosive_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IExplosive() {} \
public: \
	typedef UExplosive UClassType; \
	typedef IExplosive ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Lab08_Source_Lab08_Explosive_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IExplosive() {} \
public: \
	typedef UExplosive UClassType; \
	typedef IExplosive ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Lab08_Source_Lab08_Explosive_h_10_PROLOG
#define Lab08_Source_Lab08_Explosive_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Lab08_Source_Lab08_Explosive_h_13_SPARSE_DATA \
	Lab08_Source_Lab08_Explosive_h_13_RPC_WRAPPERS \
	Lab08_Source_Lab08_Explosive_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Lab08_Source_Lab08_Explosive_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Lab08_Source_Lab08_Explosive_h_13_SPARSE_DATA \
	Lab08_Source_Lab08_Explosive_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Lab08_Source_Lab08_Explosive_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LAB08_API UClass* StaticClass<class UExplosive>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Lab08_Source_Lab08_Explosive_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
