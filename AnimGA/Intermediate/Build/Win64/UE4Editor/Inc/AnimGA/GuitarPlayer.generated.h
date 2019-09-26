// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGA_GuitarPlayer_generated_h
#error "GuitarPlayer.generated.h already included, missing '#pragma once' in GuitarPlayer.h"
#endif
#define ANIMGA_GuitarPlayer_generated_h

#define AnimGA_Source_AnimGA_GuitarPlayer_h_12_RPC_WRAPPERS
#define AnimGA_Source_AnimGA_GuitarPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define AnimGA_Source_AnimGA_GuitarPlayer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGuitarPlayer(); \
	friend struct Z_Construct_UClass_AGuitarPlayer_Statics; \
public: \
	DECLARE_CLASS(AGuitarPlayer, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGA"), NO_API) \
	DECLARE_SERIALIZER(AGuitarPlayer)


#define AnimGA_Source_AnimGA_GuitarPlayer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGuitarPlayer(); \
	friend struct Z_Construct_UClass_AGuitarPlayer_Statics; \
public: \
	DECLARE_CLASS(AGuitarPlayer, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGA"), NO_API) \
	DECLARE_SERIALIZER(AGuitarPlayer)


#define AnimGA_Source_AnimGA_GuitarPlayer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGuitarPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGuitarPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGuitarPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGuitarPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGuitarPlayer(AGuitarPlayer&&); \
	NO_API AGuitarPlayer(const AGuitarPlayer&); \
public:


#define AnimGA_Source_AnimGA_GuitarPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGuitarPlayer(AGuitarPlayer&&); \
	NO_API AGuitarPlayer(const AGuitarPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGuitarPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGuitarPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGuitarPlayer)


#define AnimGA_Source_AnimGA_GuitarPlayer_h_12_PRIVATE_PROPERTY_OFFSET
#define AnimGA_Source_AnimGA_GuitarPlayer_h_9_PROLOG
#define AnimGA_Source_AnimGA_GuitarPlayer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimGA_Source_AnimGA_GuitarPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	AnimGA_Source_AnimGA_GuitarPlayer_h_12_RPC_WRAPPERS \
	AnimGA_Source_AnimGA_GuitarPlayer_h_12_INCLASS \
	AnimGA_Source_AnimGA_GuitarPlayer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AnimGA_Source_AnimGA_GuitarPlayer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimGA_Source_AnimGA_GuitarPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	AnimGA_Source_AnimGA_GuitarPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AnimGA_Source_AnimGA_GuitarPlayer_h_12_INCLASS_NO_PURE_DECLS \
	AnimGA_Source_AnimGA_GuitarPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGA_API UClass* StaticClass<class AGuitarPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AnimGA_Source_AnimGA_GuitarPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
