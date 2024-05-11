// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lab08/Explosive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExplosive() {}
// Cross Module References
	LAB08_API UClass* Z_Construct_UClass_UExplosive_NoRegister();
	LAB08_API UClass* Z_Construct_UClass_UExplosive();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Lab08();
// End Cross Module References
	void UExplosive::StaticRegisterNativesUExplosive()
	{
	}
	UClass* Z_Construct_UClass_UExplosive_NoRegister()
	{
		return UExplosive::StaticClass();
	}
	struct Z_Construct_UClass_UExplosive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExplosive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Lab08,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExplosive_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Explosive.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExplosive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IExplosive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExplosive_Statics::ClassParams = {
		&UExplosive::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UExplosive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExplosive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExplosive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExplosive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExplosive, 352208947);
	template<> LAB08_API UClass* StaticClass<UExplosive>()
	{
		return UExplosive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExplosive(Z_Construct_UClass_UExplosive, &UExplosive::StaticClass, TEXT("/Script/Lab08"), TEXT("UExplosive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExplosive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
