// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/MainCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SpotLightComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "Sound/SoundCue.h"

AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(76.f, 76.f);

	CharacterSprite = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("CharacterFlipbook"));
	CharacterSprite->SetupAttachment(GetRootComponent());
	CharacterSprite->SetRelativeRotation(FRotator(90.0f, 0.0f, -90.0f));

	// Create a spring arm component
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength = 0.0f;

	// Disabling the camera lag and collision test
	CameraBoom->bEnableCameraLag = false;
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->bInheritPitch = false;
	CameraBoom->bInheritRoll = false;
	CameraBoom->bInheritYaw = false;

	// Create and position the follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom);
	FollowCamera->SetRelativeLocation(FVector(0.0f, 0.0f, 1000.0f)); // Setting camera's relative location
	FollowCamera->SetRelativeRotation(FRotator(-90.0f, 0.0f, 0.0f)); // Pointing downwards.

	// Initialize and set up the point light component
	PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
	PointLight->SetupAttachment(GetRootComponent());
	PointLight->SetRelativeLocation(FVector(0.0f, 0.0f, 250.0f)); // Positioned 250 units above the character
}

void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMainCharacter::Tick(float DeltaTime)
{
  Super::Tick(DeltaTime);

  UpdateCharacterDirection();
  UpdateLightPosition();
  CharacterSprite->Play();
  PlayFootstepSound();

  // Reset movement values
  MoveForwardValue = 0;
  MoveRightValue = 0;
}

void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Bind movement functions
	PlayerInputComponent->BindAxis("MoveForward", this, &AMainCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMainCharacter::MoveRight);

}

void AMainCharacter::MoveForward(float Value)
{
	MoveForwardValue = Value;

	if ((Controller != NULL) && (Value != 0.0f))
	{
		const FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
		if (FMath::Abs(Value) > FMath::Abs(LastMoveRightValue))
		{
			AddMovementInput(Direction, Value);
		}
	}

	LastMoveForwardValue = Value;
}

void AMainCharacter::MoveRight(float Value)
{
	MoveRightValue = Value;

	if ((Controller != NULL) && (Value != 0.0f))
	{
		const FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
		if (FMath::Abs(Value) > FMath::Abs(LastMoveForwardValue))
		{
			AddMovementInput(Direction, Value);
		}
	}

	LastMoveRightValue = Value;
}

void AMainCharacter::UpdateCharacterDirection()
{
  if (FMath::Abs(MoveForwardValue) > FMath::Abs(MoveRightValue))
  {
    MoveForwardValue > 0 ? SetMovingDirection(LastMoveDirection::LMD_Forward, MoveForwardFlipbook)
      : SetMovingDirection(LastMoveDirection::LMD_Backward, MoveBackwardFlipbook);
  }
  else if (FMath::Abs(MoveRightValue) > FMath::Abs(MoveForwardValue))
  {
    MoveRightValue > 0 ? SetMovingDirection(LastMoveDirection::LMD_Left, MoveLeftFlipbook)
      : SetMovingDirection(LastMoveDirection::LMD_Right, MoveRightFlipbook);
  }
  else
  {
    UpdateIdlePose();
  }
}

void AMainCharacter::UpdateIdlePose()
{
  switch (LastDirection)
  {
  case LastMoveDirection::LMD_Forward:
    CharacterSprite->SetFlipbook(IdleForwardFlipbook);
    break;
  case LastMoveDirection::LMD_Backward:
    CharacterSprite->SetFlipbook(IdleBackwardFlipbook);
    break;
  case LastMoveDirection::LMD_Left:
    CharacterSprite->SetFlipbook(IdleLeftFlipbook);
    break;
  case LastMoveDirection::LMD_Right:
    CharacterSprite->SetFlipbook(IdleRightFlipbook);
    break;
  default:
    CharacterSprite->SetFlipbook(IdleFlipbook);
    break;
  }
}

void AMainCharacter::UpdateLightPosition()
{
  FVector NewLightPosition;

  switch (LastDirection)
  {
  case LastMoveDirection::LMD_Forward:
  case LastMoveDirection::LMD_Backward:
    NewLightPosition = FVector(0.0f, 0.0f, 250.0f);
    break;
  case LastMoveDirection::LMD_Left:
    NewLightPosition = FVector(0.0f, 100.0f, 250.0f);
    break;
  case LastMoveDirection::LMD_Right:
    NewLightPosition = FVector(0.0f, -100.0f, 250.0f);
    break;
  default:
    NewLightPosition = FVector(0.0f, 0.0f, 250.0f);
    break;
  }

  PointLight->SetRelativeLocation(NewLightPosition);
}

void AMainCharacter::SetMovingDirection(LastMoveDirection Direction, UPaperFlipbook* Flipbook)
{
  LastDirection = Direction;
  CharacterSprite->SetFlipbook(Flipbook);
}

void AMainCharacter::PlayFootstepSound()
{
  const int FramesPerStep = 22; // Adjust this value to slow down the footstep sounds
  const float VolumeMultiplier = 0.5f; // Adjust this value to control the volume

  // Check if the character is moving
  if (GetVelocity().Size() > 0)
  {
    static int FrameCounter = 0;

    TArray<USoundCue*>* SelectedFootstepSounds = &FootstepStoneSounds; // Default to stone

    /* UNCOMMENT WHEN WE HAVE THE CONDITIONS TO SWITCH BETWEEN FOOTSTEP SOUNDS
    if (OnDirtCondition)
    {
        SelectedFootstepSounds = &FootstepDirtSounds;
    }
    else if (OnGlassCondition)
    {
        SelectedFootstepSounds = &FootstepStoneSounds;
    }
    else if (OnGravelCondition)
    {
        SelectedFootstepSounds = &FootstepGravelSounds;
    }
    else if (OnPuddleCondition)
    {
        SelectedFootstepSounds = &FootstepStoneSounds;
    }
    else if (OnStoneCondition)
    {
        SelectedFootstepSounds = &FootstepStoneSounds;
    }
    // ... (add more conditions as needed)
    */

    FrameCounter++;

    // Check if there are footstep sounds available to play
    if (SelectedFootstepSounds->Num() > 0 && FrameCounter >= FramesPerStep)
    {
      int32 RandomIndex = FMath::RandRange(0, SelectedFootstepSounds->Num() - 1);
      UGameplayStatics::PlaySoundAtLocation(this, (*SelectedFootstepSounds)[RandomIndex], GetActorLocation(), VolumeMultiplier);
      FrameCounter = 0; // Reset the frame counter
    }
  }
}

