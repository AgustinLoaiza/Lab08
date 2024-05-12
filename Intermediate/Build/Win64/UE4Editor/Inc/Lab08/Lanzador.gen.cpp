// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lab08/Lanzador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLanzador() {}
// Cross Module References
	LAB08_API UClass* Z_Construct_UClass_ALanzador_NoRegister();
	LAB08_API UClass* Z_Construct_UClass_ALanzador();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Lab08();
// End Cross Module References
	void ALanzador::StaticRegisterNativesALanzador()
	{
	}
	UClass* Z_Construct_UClass_ALanzador_NoRegister()
	{
		return ALanzador::StaticClass();
	}
	struct Z_Construct_UClass_ALanzador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALanzador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Lab08,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALanzador_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Lanzador.h" },
		{ "ModuleRelativePath", "Lanzador.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALanzador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALanzador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALanzador_Statics::ClassParams = {
		&ALanzador::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALanzador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALanzador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALanzador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALanzador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALanzador, 1227024504);
	template<> LAB08_API UClass* StaticClass<ALanzador>()
	{
		return ALanzador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALanzador(Z_Construct_UClass_ALanzador, &ALanzador::StaticClass, TEXT("/Script/Lab08"), TEXT("ALanzador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALanzador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
