// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lab08/Lanzar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLanzar() {}
// Cross Module References
	LAB08_API UClass* Z_Construct_UClass_ULanzar_NoRegister();
	LAB08_API UClass* Z_Construct_UClass_ULanzar();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Lab08();
// End Cross Module References
	void ULanzar::StaticRegisterNativesULanzar()
	{
	}
	UClass* Z_Construct_UClass_ULanzar_NoRegister()
	{
		return ULanzar::StaticClass();
	}
	struct Z_Construct_UClass_ULanzar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULanzar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Lab08,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULanzar_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lanzar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULanzar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILanzar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULanzar_Statics::ClassParams = {
		&ULanzar::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULanzar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULanzar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULanzar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULanzar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULanzar, 1441892578);
	template<> LAB08_API UClass* StaticClass<ULanzar>()
	{
		return ULanzar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULanzar(Z_Construct_UClass_ULanzar, &ULanzar::StaticClass, TEXT("/Script/Lab08"), TEXT("ULanzar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULanzar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
