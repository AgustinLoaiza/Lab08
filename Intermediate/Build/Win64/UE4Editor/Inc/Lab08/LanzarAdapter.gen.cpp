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
	LAB08_API UClass* Z_Construct_UClass_ABall_NoRegister();
	LAB08_API UClass* Z_Construct_UClass_ULanzar_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ball_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ball;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALanzarAdapter_Statics::NewProp_ball_MetaData[] = {
		{ "Category", "Ball Adapter" },
		{ "ModuleRelativePath", "LanzarAdapter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALanzarAdapter_Statics::NewProp_ball = { "ball", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALanzarAdapter, ball), Z_Construct_UClass_ABall_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALanzarAdapter_Statics::NewProp_ball_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALanzarAdapter_Statics::NewProp_ball_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALanzarAdapter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALanzarAdapter_Statics::NewProp_ball,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALanzarAdapter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULanzar_NoRegister, (int32)VTABLE_OFFSET(ALanzarAdapter, ILanzar), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALanzarAdapter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALanzarAdapter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALanzarAdapter_Statics::ClassParams = {
		&ALanzarAdapter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALanzarAdapter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALanzarAdapter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
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
	IMPLEMENT_CLASS(ALanzarAdapter, 1543536740);
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
