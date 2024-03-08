// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OctJam/Public/Character/MainCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	OCTJAM_API UClass* Z_Construct_UClass_AMainCharacter();
	OCTJAM_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
	OCTJAM_API UEnum* Z_Construct_UEnum_OctJam_ELastMoveDirection();
	OCTJAM_API UEnum* Z_Construct_UEnum_OctJam_EMaterialType();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OctJam();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELastMoveDirection;
	static UEnum* ELastMoveDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELastMoveDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELastMoveDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OctJam_ELastMoveDirection, (UObject*)Z_Construct_UPackage__Script_OctJam(), TEXT("ELastMoveDirection"));
		}
		return Z_Registration_Info_UEnum_ELastMoveDirection.OuterSingleton;
	}
	template<> OCTJAM_API UEnum* StaticEnum<ELastMoveDirection>()
	{
		return ELastMoveDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_OctJam_ELastMoveDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OctJam_ELastMoveDirection_Statics::Enumerators[] = {
		{ "ELastMoveDirection::LMD_Forward", (int64)ELastMoveDirection::LMD_Forward },
		{ "ELastMoveDirection::LMD_Backward", (int64)ELastMoveDirection::LMD_Backward },
		{ "ELastMoveDirection::LMD_Left", (int64)ELastMoveDirection::LMD_Left },
		{ "ELastMoveDirection::LMD_Right", (int64)ELastMoveDirection::LMD_Right },
		{ "ELastMoveDirection::LMD_None", (int64)ELastMoveDirection::LMD_None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OctJam_ELastMoveDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LMD_Backward.DisplayName", "Backward" },
		{ "LMD_Backward.Name", "ELastMoveDirection::LMD_Backward" },
		{ "LMD_Forward.DisplayName", "Forward" },
		{ "LMD_Forward.Name", "ELastMoveDirection::LMD_Forward" },
		{ "LMD_Left.DisplayName", "Left" },
		{ "LMD_Left.Name", "ELastMoveDirection::LMD_Left" },
		{ "LMD_None.DisplayName", "None" },
		{ "LMD_None.Name", "ELastMoveDirection::LMD_None" },
		{ "LMD_Right.DisplayName", "Right" },
		{ "LMD_Right.Name", "ELastMoveDirection::LMD_Right" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OctJam_ELastMoveDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OctJam,
		nullptr,
		"ELastMoveDirection",
		"ELastMoveDirection",
		Z_Construct_UEnum_OctJam_ELastMoveDirection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OctJam_ELastMoveDirection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OctJam_ELastMoveDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OctJam_ELastMoveDirection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OctJam_ELastMoveDirection()
	{
		if (!Z_Registration_Info_UEnum_ELastMoveDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELastMoveDirection.InnerSingleton, Z_Construct_UEnum_OctJam_ELastMoveDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELastMoveDirection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialType;
	static UEnum* EMaterialType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMaterialType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMaterialType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OctJam_EMaterialType, (UObject*)Z_Construct_UPackage__Script_OctJam(), TEXT("EMaterialType"));
		}
		return Z_Registration_Info_UEnum_EMaterialType.OuterSingleton;
	}
	template<> OCTJAM_API UEnum* StaticEnum<EMaterialType>()
	{
		return EMaterialType_StaticEnum();
	}
	struct Z_Construct_UEnum_OctJam_EMaterialType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OctJam_EMaterialType_Statics::Enumerators[] = {
		{ "EMaterialType::MT_SURFACE_DEFAULT", (int64)EMaterialType::MT_SURFACE_DEFAULT },
		{ "EMaterialType::MT_SURFACE_DIRT", (int64)EMaterialType::MT_SURFACE_DIRT },
		{ "EMaterialType::MT_SURFACE_GRAVEL", (int64)EMaterialType::MT_SURFACE_GRAVEL },
		{ "EMaterialType::MT_SURFACE_GLASS", (int64)EMaterialType::MT_SURFACE_GLASS },
		{ "EMaterialType::MT_SURFACE_MUD", (int64)EMaterialType::MT_SURFACE_MUD },
		{ "EMaterialType::MT_SURFACE_PUDDLE", (int64)EMaterialType::MT_SURFACE_PUDDLE },
		{ "EMaterialType::MT_SURFACE_STONE", (int64)EMaterialType::MT_SURFACE_STONE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OctJam_EMaterialType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
		{ "MT_SURFACE_DEFAULT.DisplayName", "Default" },
		{ "MT_SURFACE_DEFAULT.Name", "EMaterialType::MT_SURFACE_DEFAULT" },
		{ "MT_SURFACE_DIRT.DisplayName", "Dirt" },
		{ "MT_SURFACE_DIRT.Name", "EMaterialType::MT_SURFACE_DIRT" },
		{ "MT_SURFACE_GLASS.DisplayName", "Glass" },
		{ "MT_SURFACE_GLASS.Name", "EMaterialType::MT_SURFACE_GLASS" },
		{ "MT_SURFACE_GRAVEL.DisplayName", "Gravel" },
		{ "MT_SURFACE_GRAVEL.Name", "EMaterialType::MT_SURFACE_GRAVEL" },
		{ "MT_SURFACE_MUD.DisplayName", "Mud" },
		{ "MT_SURFACE_MUD.Name", "EMaterialType::MT_SURFACE_MUD" },
		{ "MT_SURFACE_PUDDLE.DisplayName", "Puddle" },
		{ "MT_SURFACE_PUDDLE.Name", "EMaterialType::MT_SURFACE_PUDDLE" },
		{ "MT_SURFACE_STONE.DisplayName", "Stone" },
		{ "MT_SURFACE_STONE.Name", "EMaterialType::MT_SURFACE_STONE" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OctJam_EMaterialType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OctJam,
		nullptr,
		"EMaterialType",
		"EMaterialType",
		Z_Construct_UEnum_OctJam_EMaterialType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OctJam_EMaterialType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OctJam_EMaterialType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OctJam_EMaterialType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OctJam_EMaterialType()
	{
		if (!Z_Registration_Info_UEnum_EMaterialType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialType.InnerSingleton, Z_Construct_UEnum_OctJam_EMaterialType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMaterialType.InnerSingleton;
	}
	DEFINE_FUNCTION(AMainCharacter::execPlayFootstepSound)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayFootstepSound(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainCharacter::execUpdateIdlePose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateIdlePose();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainCharacter::execAdjustLightBasedOnMapLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustLightBasedOnMapLevel();
		P_NATIVE_END;
	}
	void AMainCharacter::StaticRegisterNativesAMainCharacter()
	{
		UClass* Class = AMainCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustLightBasedOnMapLevel", &AMainCharacter::execAdjustLightBasedOnMapLevel },
			{ "PlayFootstepSound", &AMainCharacter::execPlayFootstepSound },
			{ "UpdateIdlePose", &AMainCharacter::execUpdateIdlePose },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMainCharacter_AdjustLightBasedOnMapLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainCharacter_AdjustLightBasedOnMapLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_AdjustLightBasedOnMapLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "AdjustLightBasedOnMapLevel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_AdjustLightBasedOnMapLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_AdjustLightBasedOnMapLevel_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMainCharacter_AdjustLightBasedOnMapLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_AdjustLightBasedOnMapLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainCharacter_PlayFootstepSound_Statics
	{
		struct MainCharacter_eventPlayFootstepSound_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMainCharacter_PlayFootstepSound_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainCharacter_eventPlayFootstepSound_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainCharacter_PlayFootstepSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacter_PlayFootstepSound_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainCharacter_PlayFootstepSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_PlayFootstepSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "PlayFootstepSound", nullptr, nullptr, Z_Construct_UFunction_AMainCharacter_PlayFootstepSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_PlayFootstepSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainCharacter_PlayFootstepSound_Statics::MainCharacter_eventPlayFootstepSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_PlayFootstepSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_PlayFootstepSound_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_PlayFootstepSound_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMainCharacter_PlayFootstepSound_Statics::MainCharacter_eventPlayFootstepSound_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMainCharacter_PlayFootstepSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_PlayFootstepSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainCharacter_UpdateIdlePose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainCharacter_UpdateIdlePose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_UpdateIdlePose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "UpdateIdlePose", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_UpdateIdlePose_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_UpdateIdlePose_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMainCharacter_UpdateIdlePose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_UpdateIdlePose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainCharacter);
	UClass* Z_Construct_UClass_AMainCharacter_NoRegister()
	{
		return AMainCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMainCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointLight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PointLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterSprite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterSprite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdleFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IdleFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveForwardFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveForwardFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveBackwardFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveBackwardFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveLeftFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveLeftFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveRightFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveRightFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdleForwardFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IdleForwardFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdleBackwardFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IdleBackwardFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdleLeftFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IdleLeftFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdleRightFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IdleRightFlipbook;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FootstepDirtSounds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootstepDirtSounds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FootstepDirtSounds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FootstepGlassSounds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootstepGlassSounds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FootstepGlassSounds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FootstepGravelSounds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootstepGravelSounds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FootstepGravelSounds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FootstepMudSounds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootstepMudSounds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FootstepMudSounds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FootstepPuddleSounds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootstepPuddleSounds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FootstepPuddleSounds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FootstepStoneSounds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootstepStoneSounds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FootstepStoneSounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_OctJam,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMainCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainCharacter_AdjustLightBasedOnMapLevel, "AdjustLightBasedOnMapLevel" }, // 560158631
		{ &Z_Construct_UFunction_AMainCharacter_PlayFootstepSound, "PlayFootstepSound" }, // 309357768
		{ &Z_Construct_UFunction_AMainCharacter_UpdateIdlePose, "UpdateIdlePose" }, // 3663708213
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/MainCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_PointLight_MetaData[] = {
		{ "Category", "Light" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_PointLight = { "PointLight", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, PointLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_PointLight_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_PointLight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_CharacterSprite_MetaData[] = {
		{ "Category", "Sprite" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_CharacterSprite = { "CharacterSprite", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, CharacterSprite), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_CharacterSprite_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_CharacterSprite_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_IdleFlipbook_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_IdleFlipbook = { "IdleFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, IdleFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_IdleFlipbook_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_IdleFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_MoveForwardFlipbook_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_MoveForwardFlipbook = { "MoveForwardFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, MoveForwardFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_MoveForwardFlipbook_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_MoveForwardFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_MoveBackwardFlipbook_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_MoveBackwardFlipbook = { "MoveBackwardFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, MoveBackwardFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_MoveBackwardFlipbook_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_MoveBackwardFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_MoveLeftFlipbook_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_MoveLeftFlipbook = { "MoveLeftFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, MoveLeftFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_MoveLeftFlipbook_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_MoveLeftFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_MoveRightFlipbook_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_MoveRightFlipbook = { "MoveRightFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, MoveRightFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_MoveRightFlipbook_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_MoveRightFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_IdleForwardFlipbook_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_IdleForwardFlipbook = { "IdleForwardFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, IdleForwardFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_IdleForwardFlipbook_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_IdleForwardFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_IdleBackwardFlipbook_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_IdleBackwardFlipbook = { "IdleBackwardFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, IdleBackwardFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_IdleBackwardFlipbook_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_IdleBackwardFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_IdleLeftFlipbook_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_IdleLeftFlipbook = { "IdleLeftFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, IdleLeftFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_IdleLeftFlipbook_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_IdleLeftFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_IdleRightFlipbook_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_IdleRightFlipbook = { "IdleRightFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, IdleRightFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_IdleRightFlipbook_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_IdleRightFlipbook_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepDirtSounds_Inner = { "FootstepDirtSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepDirtSounds_MetaData[] = {
		{ "Category", "Sound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FOOTSTEP SOUNDS */" },
#endif
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FOOTSTEP SOUNDS" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepDirtSounds = { "FootstepDirtSounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, FootstepDirtSounds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepDirtSounds_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepDirtSounds_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepGlassSounds_Inner = { "FootstepGlassSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepGlassSounds_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepGlassSounds = { "FootstepGlassSounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, FootstepGlassSounds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepGlassSounds_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepGlassSounds_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepGravelSounds_Inner = { "FootstepGravelSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepGravelSounds_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepGravelSounds = { "FootstepGravelSounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, FootstepGravelSounds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepGravelSounds_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepGravelSounds_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepMudSounds_Inner = { "FootstepMudSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepMudSounds_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepMudSounds = { "FootstepMudSounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, FootstepMudSounds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepMudSounds_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepMudSounds_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepPuddleSounds_Inner = { "FootstepPuddleSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepPuddleSounds_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepPuddleSounds = { "FootstepPuddleSounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, FootstepPuddleSounds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepPuddleSounds_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepPuddleSounds_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepStoneSounds_Inner = { "FootstepStoneSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepStoneSounds_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepStoneSounds = { "FootstepStoneSounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, FootstepStoneSounds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepStoneSounds_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepStoneSounds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_FollowCamera_MetaData), Z_Construct_UClass_AMainCharacter_Statics::NewProp_FollowCamera_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_PointLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_CharacterSprite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_IdleFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_MoveForwardFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_MoveBackwardFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_MoveLeftFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_MoveRightFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_IdleForwardFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_IdleBackwardFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_IdleLeftFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_IdleRightFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepDirtSounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepDirtSounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepGlassSounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepGlassSounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepGravelSounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepGravelSounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepMudSounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepMudSounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepPuddleSounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepPuddleSounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepStoneSounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepStoneSounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_FollowCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainCharacter_Statics::ClassParams = {
		&AMainCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMainCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMainCharacter()
	{
		if (!Z_Registration_Info_UClass_AMainCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainCharacter.OuterSingleton, Z_Construct_UClass_AMainCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMainCharacter.OuterSingleton;
	}
	template<> OCTJAM_API UClass* StaticClass<AMainCharacter>()
	{
		return AMainCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainCharacter);
	AMainCharacter::~AMainCharacter() {}
	struct Z_CompiledInDeferFile_FID_ryandavis_Documents_GitHub_Hereafter_OctJam_5_3_Source_OctJam_Public_Character_MainCharacter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ryandavis_Documents_GitHub_Hereafter_OctJam_5_3_Source_OctJam_Public_Character_MainCharacter_h_Statics::EnumInfo[] = {
		{ ELastMoveDirection_StaticEnum, TEXT("ELastMoveDirection"), &Z_Registration_Info_UEnum_ELastMoveDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 372589058U) },
		{ EMaterialType_StaticEnum, TEXT("EMaterialType"), &Z_Registration_Info_UEnum_EMaterialType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3472754532U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ryandavis_Documents_GitHub_Hereafter_OctJam_5_3_Source_OctJam_Public_Character_MainCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMainCharacter, AMainCharacter::StaticClass, TEXT("AMainCharacter"), &Z_Registration_Info_UClass_AMainCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainCharacter), 3206587317U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ryandavis_Documents_GitHub_Hereafter_OctJam_5_3_Source_OctJam_Public_Character_MainCharacter_h_398044327(TEXT("/Script/OctJam"),
		Z_CompiledInDeferFile_FID_ryandavis_Documents_GitHub_Hereafter_OctJam_5_3_Source_OctJam_Public_Character_MainCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ryandavis_Documents_GitHub_Hereafter_OctJam_5_3_Source_OctJam_Public_Character_MainCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ryandavis_Documents_GitHub_Hereafter_OctJam_5_3_Source_OctJam_Public_Character_MainCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ryandavis_Documents_GitHub_Hereafter_OctJam_5_3_Source_OctJam_Public_Character_MainCharacter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
