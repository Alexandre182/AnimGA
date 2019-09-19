// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGA_AnimGAGameModeBase_generated_h
#error "AnimGAGameModeBase.generated.h already included, missing '#pragma once' in AnimGAGameModeBase.h"
#endif
#define ANIMGA_AnimGAGameModeBase_generated_h

#define AnimGA_Source_AnimGA_AnimGAGameModeBase_h_15_RPC_WRAPPERS
#define AnimGA_Source_AnimGA_AnimGAGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define AnimGA_Source_AnimGA_AnimGAGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAnimGAGameModeBase(); \
	friend struct Z_Construct_UClass_AAnimGAGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AAnimGAGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AnimGA"), NO_API) \
	DECLARE_SERIALIZER(AAnimGAGameModeBase)


#define AnimGA_Source_AnimGA_AnimGAGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAnimGAGameModeBase(); \
	friend struct Z_Construct_UClass_AAnimGAGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AAnimGAGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AnimGA"), NO_API) \
	DECLARE_SERIALIZER(AAnimGAGameModeBase)


#define AnimGA_Source_AnimGA_AnimGAGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAnimGAGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAnimGAGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAnimGAGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAnimGAGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAnimGAGameModeBase(AAnimGAGameModeBase&&); \
	NO_API AAnimGAGameModeBase(const AAnimGAGameModeBase&); \
public:


#define AnimGA_Source_AnimGA_AnimGAGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAnimGAGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAnimGAGameModeBase(AAnimGAGameModeBase&&); \
	NO_API AAnimGAGameModeBase(const AAnimGAGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAnimGAGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAnimGAGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAnimGAGameModeBase)


#define AnimGA_Source_AnimGA_AnimGAGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define AnimGA_Source_AnimGA_AnimGAGameModeBase_h_12_PROLOG
#define AnimGA_Source_AnimGA_AnimGAGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimGA_Source_AnimGA_AnimGAGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	AnimGA_Source_AnimGA_AnimGAGameModeBase_h_15_RPC_WRAPPERS \
	AnimGA_Source_AnimGA_AnimGAGameModeBase_h_15_INCLASS \
	AnimGA_Source_AnimGA_AnimGAGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AnimGA_Source_AnimGA_AnimGAGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimGA_Source_AnimGA_AnimGAGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	AnimGA_Source_AnimGA_AnimGAGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AnimGA_Source_AnimGA_AnimGAGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	AnimGA_Source_AnimGA_AnimGAGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGA_API UClass* StaticClass<class AAnimGAGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AnimGA_Source_AnimGA_AnimGAGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
