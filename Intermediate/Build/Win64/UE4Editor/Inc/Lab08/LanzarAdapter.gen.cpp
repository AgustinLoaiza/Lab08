// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lab08/LanzarAdapter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLanzarAdapter() {}
// Cross Module References
	LAB08_API UClass* Z_Construct_UClass_ALanzarAdapter_NoRegister();
	LAB08_API UClass* Z_Construct_UClass_ALanzarAdapter();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Lab08();
// End Cross Module References
	void ALanzarAdapter::StaticRegisterNativesALanzarAdapter()
	{
	}
	UClass* Z_Construct_UClass_ALanzarAdapter_NoRegister()
	{
		return ALanzarAdapter::StaticClass();
	}
	struct Z_Construct_UClass_ALanzarAdapter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALanzarAdapter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Lab08,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALanzarAdapter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LanzarAdapter.h" },
		{ "ModuleRelativePath", "LanzarAdapter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALanzarAdapter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALanzarAdapter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALanzarAdapter_Statics::ClassParams = {
		&ALanzarAdapter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALanzarAdapter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALanzarAdapter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALanzarAdapter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALanzarAdapter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALanzarAdapter, 4100650423);
	template<> LAB08_API UClass* StaticClass<ALanzarAdapter>()
	{
		return ALanzarAdapter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALanzarAdapter(Z_Construct_UClass_ALanzarAdapter, &ALanzarAdapter::StaticClass, TEXT("/Script/Lab08"), TEXT("ALanzarAdapter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALanzarAdapter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
