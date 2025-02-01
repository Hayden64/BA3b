// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FMPGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FMP_FMPGameMode_generated_h
#error "FMPGameMode.generated.h already included, missing '#pragma once' in FMPGameMode.h"
#endif
#define FMP_FMPGameMode_generated_h

#define FID_Game_Projects_BA3b_FMP_FMP_Source_FMP_FMPGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFMPGameMode(); \
	friend struct Z_Construct_UClass_AFMPGameMode_Statics; \
public: \
	DECLARE_CLASS(AFMPGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FMP"), FMP_API) \
	DECLARE_SERIALIZER(AFMPGameMode)


#define FID_Game_Projects_BA3b_FMP_FMP_Source_FMP_FMPGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFMPGameMode(AFMPGameMode&&); \
	AFMPGameMode(const AFMPGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FMP_API, AFMPGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFMPGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFMPGameMode) \
	FMP_API virtual ~AFMPGameMode();


#define FID_Game_Projects_BA3b_FMP_FMP_Source_FMP_FMPGameMode_h_9_PROLOG
#define FID_Game_Projects_BA3b_FMP_FMP_Source_FMP_FMPGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Projects_BA3b_FMP_FMP_Source_FMP_FMPGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Game_Projects_BA3b_FMP_FMP_Source_FMP_FMPGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FMP_API UClass* StaticClass<class AFMPGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Projects_BA3b_FMP_FMP_Source_FMP_FMPGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
