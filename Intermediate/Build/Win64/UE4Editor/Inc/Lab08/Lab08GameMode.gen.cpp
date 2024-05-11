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
	LAB08_API UClass* Z_Construct_UClass_ALab08Pawn_NoRegister();
	LAB08_API UClass* Z_Construct_UClass_AExplosiveAdapter_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Jugador_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Jugador;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Adaptador_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Adaptador;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALab08GameMode_Statics::NewProp_Jugador_MetaData[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Lab08GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALab08GameMode_Statics::NewProp_Jugador = { "Jugador", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALab08GameMode, Jugador), Z_Construct_UClass_ALab08Pawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALab08GameMode_Statics::NewProp_Jugador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALab08GameMode_Statics::NewProp_Jugador_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALab08GameMode_Statics::NewProp_Adaptador_MetaData[] = {
		{ "Category", "GameMode" },
		{ "Comment", "// Pawn object\n" },
		{ "ModuleRelativePath", "Lab08GameMode.h" },
		{ "ToolTip", "Pawn object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALab08GameMode_Statics::NewProp_Adaptador = { "Adaptador", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALab08GameMode, Adaptador), Z_Construct_UClass_AExplosiveAdapter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALab08GameMode_Statics::NewProp_Adaptador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALab08GameMode_Statics::NewProp_Adaptador_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALab08GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALab08GameMode_Statics::NewProp_Jugador,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALab08GameMode_Statics::NewProp_Adaptador,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALab08GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALab08GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALab08GameMode_Statics::ClassParams = {
		&ALab08GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALab08GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALab08GameMode_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ALab08GameMode, 2001959772);
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
