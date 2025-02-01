// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FMPCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FMP_FMPCharacter_generated_h
#error "FMPCharacter.generated.h already included, missing '#pragma once' in FMPCharacter.h"
#endif
#define FMP_FMPCharacter_generated_h

#define FID_Game_Projects_BA3b_FMP_FMP_Source_FMP_FMPCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFMPCharacter(); \
	friend struct Z_Construct_UClass_AFMPCharacter_Statics; \
public: \
	DECLARE_CLASS(AFMPCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FMP"), NO_API) \
	DECLARE_SERIALIZER(AFMPCharacter)


#define FID_Game_Projects_BA3b_FMP_FMP_Source_FMP_FMPCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFMPCharacter(AFMPCharacter&&); \
	AFMPCharacter(const AFMPCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFMPCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFMPCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFMPCharacter) \
	NO_API virtual ~AFMPCharacter();


#define FID_Game_Projects_BA3b_FMP_FMP_Source_FMP_FMPCharacter_h_18_PROLOG
#define FID_Game_Projects_BA3b_FMP_FMP_Source_FMP_FMPCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Projects_BA3b_FMP_FMP_Source_FMP_FMPCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_Game_Projects_BA3b_FMP_FMP_Source_FMP_FMPCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FMP_API UClass* StaticClass<class AFMPCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Projects_BA3b_FMP_FMP_Source_FMP_FMPCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
