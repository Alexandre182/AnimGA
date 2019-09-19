// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGA_CharAnimInstance_generated_h
#error "CharAnimInstance.generated.h already included, missing '#pragma once' in CharAnimInstance.h"
#endif
#define ANIMGA_CharAnimInstance_generated_h

#define AnimGA_Source_AnimGA_CharAnimInstance_h_15_RPC_WRAPPERS
#define AnimGA_Source_AnimGA_CharAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define AnimGA_Source_AnimGA_CharAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharAnimInstance(); \
	friend struct Z_Construct_UClass_UCharAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UCharAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AnimGA"), NO_API) \
	DECLARE_SERIALIZER(UCharAnimInstance)


#define AnimGA_Source_AnimGA_CharAnimInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCharAnimInstance(); \
	friend struct Z_Construct_UClass_UCharAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UCharAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AnimGA"), NO_API) \
	DECLARE_SERIALIZER(UCharAnimInstance)


#define AnimGA_Source_AnimGA_CharAnimInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharAnimInstance(UCharAnimInstance&&); \
	NO_API UCharAnimInstance(const UCharAnimInstance&); \
public:


#define AnimGA_Source_AnimGA_CharAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharAnimInstance(UCharAnimInstance&&); \
	NO_API UCharAnimInstance(const UCharAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharAnimInstance)


#define AnimGA_Source_AnimGA_CharAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET
#define AnimGA_Source_AnimGA_CharAnimInstance_h_12_PROLOG
#define AnimGA_Source_AnimGA_CharAnimInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimGA_Source_AnimGA_CharAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	AnimGA_Source_AnimGA_CharAnimInstance_h_15_RPC_WRAPPERS \
	AnimGA_Source_AnimGA_CharAnimInstance_h_15_INCLASS \
	AnimGA_Source_AnimGA_CharAnimInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AnimGA_Source_AnimGA_CharAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimGA_Source_AnimGA_CharAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	AnimGA_Source_AnimGA_CharAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AnimGA_Source_AnimGA_CharAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	AnimGA_Source_AnimGA_CharAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGA_API UClass* StaticClass<class UCharAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AnimGA_Source_AnimGA_CharAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
