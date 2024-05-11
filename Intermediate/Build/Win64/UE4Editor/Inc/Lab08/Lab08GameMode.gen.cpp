// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lab08/Lab08GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLab08GameMode() {}
// Cross Module References
	LAB08_API UClass* Z_Construct_UClass_ALab08GameMode_NoRegister();
	LAB08_API UClass* Z_Construct_UClass_ALab08GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Lab08();
// End Cross Module References
	void ALab08GameMode::StaticRegisterNativesALab08GameMode()
	{
	}
	UClass* Z_Construct_UClass_ALab08GameMode_NoRegister()
	{
		return ALab08GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALab08GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALab08GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Lab08,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALab08GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Lab08GameMode.h" },
		{ "ModuleRelativePath", "Lab08GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALab08GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALab08GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALab08GameMode_Statics::ClassParams = {
		&ALab08GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALab08GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALab08GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALab08GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALab08GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALab08GameMode, 360099813);
	template<> LAB08_API UClass* StaticClass<ALab08GameMode>()
	{
		return ALab08GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALab08GameMode(Z_Construct_UClass_ALab08GameMode, &ALab08GameMode::StaticClass, TEXT("/Script/Lab08"), TEXT("ALab08GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALab08GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
