// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGA/CharAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharAnimInstance() {}
// Cross Module References
	ANIMGA_API UClass* Z_Construct_UClass_UCharAnimInstance_NoRegister();
	ANIMGA_API UClass* Z_Construct_UClass_UCharAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_AnimGA();
	ANIMGA_API UFunction* Z_Construct_UFunction_UCharAnimInstance_UpdateAnimationProperties();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ANIMGA_API UClass* Z_Construct_UClass_ASpectralVisualizer_NoRegister();
// End Cross Module References
	void UCharAnimInstance::StaticRegisterNativesUCharAnimInstance()
	{
		UClass* Class = UCharAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAnimationProperties", &UCharAnimInstance::execUpdateAnimationProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharAnimInstance_UpdateAnimationProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationProperties" },
		{ "ModuleRelativePath", "CharAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharAnimInstance_UpdateAnimationProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharAnimInstance, nullptr, "UpdateAnimationProperties", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharAnimInstance_UpdateAnimationProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharAnimInstance_UpdateAnimationProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharAnimInstance_NoRegister()
	{
		return UCharAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UCharAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spec_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Spec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FreqMagnitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FreqMagnitude;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGA,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharAnimInstance_UpdateAnimationProperties, "UpdateAnimationProperties" }, // 2711235351
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "CharAnimInstance.h" },
		{ "ModuleRelativePath", "CharAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharAnimInstance_Statics::NewProp_Spec_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CharAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharAnimInstance_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharAnimInstance, Spec), Z_Construct_UClass_ASpectralVisualizer_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCharAnimInstance_Statics::NewProp_Spec_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCharAnimInstance_Statics::NewProp_Spec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharAnimInstance_Statics::NewProp_FreqMagnitude_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CharAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharAnimInstance_Statics::NewProp_FreqMagnitude = { "FreqMagnitude", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharAnimInstance, FreqMagnitude), METADATA_PARAMS(Z_Construct_UClass_UCharAnimInstance_Statics::NewProp_FreqMagnitude_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCharAnimInstance_Statics::NewProp_FreqMagnitude_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharAnimInstance_Statics::NewProp_Spec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharAnimInstance_Statics::NewProp_FreqMagnitude,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharAnimInstance_Statics::ClassParams = {
		&UCharAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharAnimInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UCharAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCharAnimInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCharAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharAnimInstance, 4140504479);
	template<> ANIMGA_API UClass* StaticClass<UCharAnimInstance>()
	{
		return UCharAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharAnimInstance(Z_Construct_UClass_UCharAnimInstance, &UCharAnimInstance::StaticClass, TEXT("/Script/AnimGA"), TEXT("UCharAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
