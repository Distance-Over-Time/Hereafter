// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/MainCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OCTJAM_MainCharacter_generated_h
#error "MainCharacter.generated.h already included, missing '#pragma once' in MainCharacter.h"
#endif
#define OCTJAM_MainCharacter_generated_h

#define FID_ryandavis_Documents_GitHub_Hereafter_OctJam_5_3_Source_OctJam_Public_Character_MainCharacter_h_41_SPARSE_DATA
#define FID_ryandavis_Documents_GitHub_Hereafter_OctJam_5_3_Source_OctJam_Public_Character_MainCharacter_h_41_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ryandavis_Documents_GitHub_Hereafter_OctJam_5_3_Source_OctJam_Public_Character_MainCharacter_h_41_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ryandavis_Documents_GitHub_Hereafter_OctJam_5_3_Source_OctJam_Public_Character_MainCharacter_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayFootstepSound); \
	DECLARE_FUNCTION(execUpdateIdlePose); \
	DECLARE_FUNCTION(execAdjustLightBasedOnMapLevel);


#define FID_ryandavis_Documents_GitHub_Hereafter_OctJam_5_3_Source_OctJam_Public_Character_MainCharacter_h_41_ACCESSORS
#define FID_ryandavis_Documents_GitHub_Hereafter_OctJam_5_3_Source_OctJam_Public_Character_MainCharacter_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OctJam"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define FID_ryandavis_Documents_GitHub_Hereafter_OctJam_5_3_Source_OctJam_Public_Character_MainCharacter_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter) \
	NO_API virtual ~AMainCharacter();


#define FID_ryandavis_Documents_GitHub_Hereafter_OctJam_5_3_Source_OctJam_Public_Character_MainCharacter_h_38_PROLOG
#define FID_ryandavis_Documents_GitHub_Hereafter_OctJam_5_3_Source_OctJam_Public_Character_MainCharacter_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ryandavis_Documents_GitHub_Hereafter_OctJam_5_3_Source_OctJam_Public_Character_MainCharacter_h_41_SPARSE_DATA \
	FID_ryandavis_Documents_GitHub_Hereafter_OctJam_5_3_Source_OctJam_Public_Character_MainCharacter_h_41_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ryandavis_Documents_GitHub_Hereafter_OctJam_5_3_Source_OctJam_Public_Character_MainCharacter_h_41_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ryandavis_Documents_GitHub_Hereafter_OctJam_5_3_Source_OctJam_Public_Character_MainCharacter_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ryandavis_Documents_GitHub_Hereafter_OctJam_5_3_Source_OctJam_Public_Character_MainCharacter_h_41_ACCESSORS \
	FID_ryandavis_Documents_GitHub_Hereafter_OctJam_5_3_Source_OctJam_Public_Character_MainCharacter_h_41_INCLASS_NO_PURE_DECLS \
	FID_ryandavis_Documents_GitHub_Hereafter_OctJam_5_3_Source_OctJam_Public_Character_MainCharacter_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCTJAM_API UClass* StaticClass<class AMainCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ryandavis_Documents_GitHub_Hereafter_OctJam_5_3_Source_OctJam_Public_Character_MainCharacter_h


#define FOREACH_ENUM_ELASTMOVEDIRECTION(op) \
	op(ELastMoveDirection::LMD_Forward) \
	op(ELastMoveDirection::LMD_Backward) \
	op(ELastMoveDirection::LMD_Left) \
	op(ELastMoveDirection::LMD_Right) \
	op(ELastMoveDirection::LMD_None) 

enum class ELastMoveDirection : uint8;
template<> struct TIsUEnumClass<ELastMoveDirection> { enum { Value = true }; };
template<> OCTJAM_API UEnum* StaticEnum<ELastMoveDirection>();

#define FOREACH_ENUM_EMATERIALTYPE(op) \
	op(EMaterialType::MT_SURFACE_DEFAULT) \
	op(EMaterialType::MT_SURFACE_DIRT) \
	op(EMaterialType::MT_SURFACE_GRAVEL) \
	op(EMaterialType::MT_SURFACE_GLASS) \
	op(EMaterialType::MT_SURFACE_MUD) \
	op(EMaterialType::MT_SURFACE_PUDDLE) \
	op(EMaterialType::MT_SURFACE_STONE) 

enum class EMaterialType : uint8;
template<> struct TIsUEnumClass<EMaterialType> { enum { Value = true }; };
template<> OCTJAM_API UEnum* StaticEnum<EMaterialType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
