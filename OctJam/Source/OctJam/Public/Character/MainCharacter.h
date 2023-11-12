// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainCharacter.generated.h"

class UCameraComponent;
class UPaperFlipbook;
class UPaperFlipbookComponent;
class UPointLightComponent;
class USoundCue;
class USpringArmComponent;

UENUM(BlueprintType)
enum class ELastMoveDirection : uint8
{
	LMD_Forward   UMETA(DisplayName = "Forward"),
	LMD_Backward  UMETA(DisplayName = "Backward"),
	LMD_Left      UMETA(DisplayName = "Left"),
	LMD_Right     UMETA(DisplayName = "Right"),
	LMD_None      UMETA(DisplayName = "None"),
};

UENUM(BlueprintType)
enum class EMaterialType : uint8
{
	MT_SURFACE_DEFAULT UMETA(DisplayName = "Default"),
	MT_SURFACE_DIRT    UMETA(DisplayName = "Dirt"),
	MT_SURFACE_GRAVEL  UMETA(DisplayName = "Gravel"),
	MT_SURFACE_GLASS   UMETA(DisplayName = "Glass"),
	MT_SURFACE_MUD     UMETA(DisplayName = "Mud"),
	MT_SURFACE_PUDDLE  UMETA(DisplayName = "Puddle"),
	MT_SURFACE_STONE   UMETA(DisplayName = "Stone")
};

UCLASS()
class OCTJAM_API AMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AMainCharacter();

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "Light")
	void AdjustLightBasedOnMapLevel();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Sprite")
	UPaperFlipbookComponent* CharacterSprite;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UPaperFlipbook* IdleFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UPaperFlipbook* MoveForwardFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UPaperFlipbook* MoveBackwardFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UPaperFlipbook* MoveLeftFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UPaperFlipbook* MoveRightFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UPaperFlipbook* IdleForwardFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UPaperFlipbook* IdleBackwardFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UPaperFlipbook* IdleLeftFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UPaperFlipbook* IdleRightFlipbook;

	/** FOOTSTEP SOUNDS */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	TArray<USoundCue*> FootstepDirtSounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	TArray<USoundCue*> FootstepGlassSounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	TArray<USoundCue*> FootstepGravelSounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	TArray<USoundCue*> FootstepMudSounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	TArray<USoundCue*> FootstepPuddleSounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	TArray<USoundCue*> FootstepStoneSounds;

protected:
	virtual void BeginPlay() override;

private:
	// Functions for movement
	void MoveForwardDown();
	void MoveForwardUp();
	void MoveBackwardDown();
	void MoveBackwardUp();
	void MoveRightDown();
	void MoveRightUp();
	void MoveLeftDown();
	void MoveLeftUp();

	void UpdateCharacterDirection();
	void UpdateLightPosition();
	void UpdateIdlePose();
	void UpdateMovementDirection();
	void SetMovingDirection(ELastMoveDirection Direction, UPaperFlipbook* Flipbook);
	FVector DetermineMovementDirection();
	void HandleMovement(const FVector& Direction, float DeltaTime);

	UFUNCTION(BlueprintCallable, Category = "Audio")
	void PlayFootstepSound(float DeltaTime);

	UPROPERTY(VisibleAnywhere, Category = "Camera")
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, Category = "Camera")
	UCameraComponent* FollowCamera;

	UPROPERTY(VisibleAnywhere)
	UPointLightComponent* PointLight;

	ELastMoveDirection LastDirection = ELastMoveDirection::LMD_None;
	ELastMoveDirection PreviousDirection = ELastMoveDirection::LMD_None;

	float MoveForwardValue;
	float MoveRightValue;

	bool bIsForwardPressed = false;
	bool bIsBackPressed = false;
	bool bIsRightPressed = false;
	bool bIsLeftPressed = false;

	float TimeSinceLastFootstep = 0.0f;

public:
	EMaterialType GetSurfaceType();

};
