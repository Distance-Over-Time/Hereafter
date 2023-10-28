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
enum class LastMoveDirection : uint8
{
	LMD_Forward   UMETA(DisplayName = "Forward"),
	LMD_Backward  UMETA(DisplayName = "Backward"),
	LMD_Left      UMETA(DisplayName = "Left"),
	LMD_Right     UMETA(DisplayName = "Right"),
	LMD_None      UMETA(DisplayName = "None"),
};

UCLASS()
class OCTJAM_API AMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AMainCharacter();

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Functions for movement
	void MoveForward(float Value);
	void MoveRight(float Value);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
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
	void UpdateCharacterDirection();
	void UpdateLightPosition();
	void UpdateIdlePose();
	void SetMovingDirection(LastMoveDirection Direction, UPaperFlipbook* Flipbook);

	UFUNCTION(BlueprintCallable, Category = "Audio")
	void PlayFootstepSound();

	UPROPERTY(VisibleAnywhere, Category = "Camera")
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, Category = "Camera")
	UCameraComponent* FollowCamera;

	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(VisibleAnywhere)
	UPointLightComponent* PointLight;

	LastMoveDirection LastDirection = LastMoveDirection::LMD_None;

	float MoveForwardValue;
	float MoveRightValue;
	float LastMoveForwardValue;
	float LastMoveRightValue;

};
