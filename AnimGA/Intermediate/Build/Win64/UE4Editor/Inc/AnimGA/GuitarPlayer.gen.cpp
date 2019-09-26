// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGA/GuitarPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGuitarPlayer() {}
// Cross Module References
	ANIMGA_API UClass* Z_Construct_UClass_AGuitarPlayer_NoRegister();
	ANIMGA_API UClass* Z_Construct_UClass_AGuitarPlayer();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_AnimGA();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ANIMGA_API UClass* Z_Construct_UClass_ASpectralVisualizer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AGuitarPlayer::StaticRegisterNativesAGuitarPlayer()
	{
	}
	UClass* Z_Construct_UClass_AGuitarPlayer_NoRegister()
	{
		return AGuitarPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AGuitarPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spec_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Spec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrequencyMagnitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrequencyMagnitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuitarPlayerMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GuitarPlayerMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGuitarPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGuitarPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GuitarPlayer.h" },
		{ "ModuleRelativePath", "GuitarPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGuitarPlayer_Statics::NewProp_Spec_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "GuitarPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGuitarPlayer_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGuitarPlayer, Spec), Z_Construct_UClass_ASpectralVisualizer_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGuitarPlayer_Statics::NewProp_Spec_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGuitarPlayer_Statics::NewProp_Spec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGuitarPlayer_Statics::NewProp_FrequencyMagnitude_MetaData[] = {
		{ "Category", "test" },
		{ "ModuleRelativePath", "GuitarPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGuitarPlayer_Statics::NewProp_FrequencyMagnitude = { "FrequencyMagnitude", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGuitarPlayer, FrequencyMagnitude), METADATA_PARAMS(Z_Construct_UClass_AGuitarPlayer_Statics::NewProp_FrequencyMagnitude_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGuitarPlayer_Statics::NewProp_FrequencyMagnitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGuitarPlayer_Statics::NewProp_CollisionVolume_MetaData[] = {
		{ "Category", "GuitarPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GuitarPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGuitarPlayer_Statics::NewProp_CollisionVolume = { "CollisionVolume", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGuitarPlayer, CollisionVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGuitarPlayer_Statics::NewProp_CollisionVolume_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGuitarPlayer_Statics::NewProp_CollisionVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGuitarPlayer_Statics::NewProp_GuitarPlayerMesh_MetaData[] = {
		{ "Category", "GuitarPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GuitarPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGuitarPlayer_Statics::NewProp_GuitarPlayerMesh = { "GuitarPlayerMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGuitarPlayer, GuitarPlayerMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGuitarPlayer_Statics::NewProp_GuitarPlayerMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGuitarPlayer_Statics::NewProp_GuitarPlayerMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGuitarPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGuitarPlayer_Statics::NewProp_Spec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGuitarPlayer_Statics::NewProp_FrequencyMagnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGuitarPlayer_Statics::NewProp_CollisionVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGuitarPlayer_Statics::NewProp_GuitarPlayerMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGuitarPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGuitarPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGuitarPlayer_Statics::ClassParams = {
		&AGuitarPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGuitarPlayer_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AGuitarPlayer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGuitarPlayer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGuitarPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGuitarPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGuitarPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGuitarPlayer, 2308420714);
	template<> ANIMGA_API UClass* StaticClass<AGuitarPlayer>()
	{
		return AGuitarPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGuitarPlayer(Z_Construct_UClass_AGuitarPlayer, &AGuitarPlayer::StaticClass, TEXT("/Script/AnimGA"), TEXT("AGuitarPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGuitarPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
