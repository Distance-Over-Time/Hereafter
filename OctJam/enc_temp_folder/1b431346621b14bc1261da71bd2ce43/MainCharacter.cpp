// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/MainCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SpotLightComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
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

  AdjustLightBasedOnMapLevel();

}

void AMainCharacter::Tick(float DeltaTime)
{
  Super::Tick(DeltaTime);

  FVector Direction = DetermineMovementDirection();
  HandleMovement(Direction, DeltaTime);

  // Additional updates (light position, playing footstep sounds, etc.)
  UpdateLightPosition();
  PlayFootstepSound(DeltaTime);
}

void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
  Super::SetupPlayerInputComponent(PlayerInputComponent);

  // Bind movement functions
  PlayerInputComponent->BindAction("MoveForward", IE_Pressed, this, &AMainCharacter::MoveForwardDown);
  PlayerInputComponent->BindAction("MoveForward", IE_Released, this, &AMainCharacter::MoveForwardUp);
  PlayerInputComponent->BindAction("MoveBackward", IE_Pressed, this, &AMainCharacter::MoveBackwardDown);
  PlayerInputComponent->BindAction("MoveBackward", IE_Released, this, &AMainCharacter::MoveBackwardUp);
  PlayerInputComponent->BindAction("MoveRight", IE_Pressed, this, &AMainCharacter::MoveRightDown);
  PlayerInputComponent->BindAction("MoveRight", IE_Released, this, &AMainCharacter::MoveRightUp);
  PlayerInputComponent->BindAction("MoveLeft", IE_Pressed, this, &AMainCharacter::MoveLeftDown);
  PlayerInputComponent->BindAction("MoveLeft", IE_Released, this, &AMainCharacter::MoveLeftUp);

}

void AMainCharacter::MoveForwardDown()
{
  bIsForwardPressed = true;
  LastDirection = ELastMoveDirection::LMD_Forward;
}

void AMainCharacter::MoveForwardUp()
{
  bIsForwardPressed = false;
  UpdateMovementDirection();
}

void AMainCharacter::MoveBackwardDown()
{
  bIsBackPressed = true;
  LastDirection = ELastMoveDirection::LMD_Backward;
}

void AMainCharacter::MoveBackwardUp()
{
  bIsBackPressed = false;
  UpdateMovementDirection();
}

void AMainCharacter::MoveRightDown()
{
  bIsRightPressed = true;
  LastDirection = ELastMoveDirection::LMD_Right;
}

void AMainCharacter::MoveRightUp()
{
  bIsRightPressed = false;
  UpdateMovementDirection();
}

void AMainCharacter::MoveLeftDown()
{
  bIsLeftPressed = true;
  LastDirection = ELastMoveDirection::LMD_Left;
}

void AMainCharacter::MoveLeftUp()
{
  bIsLeftPressed = false;
  bIsLeftPressed = false;
  UpdateMovementDirection();
}

void AMainCharacter::AdjustLightBasedOnMapLevel()
{
  // Getting the name of the current level
  FString currentLevelName = GetWorld()->GetName();

  int newRadius;
  float newIntensity;

  // Adjust the radius based on the level name
  if (currentLevelName.Contains("Level1"))
  {
    newRadius = 1000;
    newIntensity = 20000;
  }
  else if (currentLevelName.Contains("Level2"))
  {
    newRadius = 2000;
    newIntensity = 25000;
  }
  else if (currentLevelName.Contains("Level3"))
  {
    newRadius = 3000;
    newIntensity = 30000;
  }
  else
  {
    newRadius = 1000;
    newIntensity = 20000;
  }

  // Set the new attenuation radius for the point light
  PointLight->SetAttenuationRadius(newRadius);
}

void AMainCharacter::UpdateCharacterDirection()
{
  if (FMath::Abs(MoveForwardValue) > FMath::Abs(MoveRightValue))
  {
    LastDirection = MoveForwardValue > 0 ? ELastMoveDirection::LMD_Forward : ELastMoveDirection::LMD_Backward;
  }
  else if (FMath::Abs(MoveRightValue) > FMath::Abs(MoveForwardValue))
  {
    LastDirection = MoveRightValue > 0 ? ELastMoveDirection::LMD_Right : ELastMoveDirection::LMD_Left;
  }

  // Now set the flipbook based on the LastDirection
  switch (LastDirection)
  {
  case ELastMoveDirection::LMD_Forward:
    CharacterSprite->SetFlipbook(MoveForwardFlipbook);
    break;
  case ELastMoveDirection::LMD_Backward:
    CharacterSprite->SetFlipbook(MoveBackwardFlipbook);
    break;
  case ELastMoveDirection::LMD_Left:
    CharacterSprite->SetFlipbook(MoveRightFlipbook);
    break;
  case ELastMoveDirection::LMD_Right:
    CharacterSprite->SetFlipbook(MoveLeftFlipbook);
    break;
  default:
    UpdateIdlePose();
    break;
  }
}

void AMainCharacter::UpdateIdlePose()
{
  ELastMoveDirection DirectionToUse = (LastDirection == ELastMoveDirection::LMD_None) ? PreviousDirection : LastDirection;

  switch (DirectionToUse)
  {
  case ELastMoveDirection::LMD_Forward:
    CharacterSprite->SetFlipbook(IdleForwardFlipbook);
    break;
  case ELastMoveDirection::LMD_Backward:
    CharacterSprite->SetFlipbook(IdleBackwardFlipbook);
    break;
  case ELastMoveDirection::LMD_Left:
    CharacterSprite->SetFlipbook(IdleRightFlipbook);
    break;
  case ELastMoveDirection::LMD_Right:
    CharacterSprite->SetFlipbook(IdleLeftFlipbook);
    break;
  default:
    CharacterSprite->SetFlipbook(IdleFlipbook);
    break;
  }
}

void AMainCharacter::UpdateMovementDirection()
{
  if (!bIsForwardPressed && !bIsBackPressed && !bIsRightPressed && !bIsLeftPressed)
  {
    if (LastDirection != ELastMoveDirection::LMD_None)
    {
      // Preserve the last direction if no keys are pressed
      PreviousDirection = LastDirection;
    }
    LastDirection = ELastMoveDirection::LMD_None;
  }
  else
  {
    if (bIsForwardPressed) LastDirection = ELastMoveDirection::LMD_Forward;
    if (bIsBackPressed) LastDirection = ELastMoveDirection::LMD_Backward;
    if (bIsRightPressed) LastDirection = ELastMoveDirection::LMD_Right;
    if (bIsLeftPressed) LastDirection = ELastMoveDirection::LMD_Left;
  }
}

void AMainCharacter::UpdateLightPosition()
{
  FVector NewLightPosition;
  ELastMoveDirection DirectionToUse = (LastDirection == ELastMoveDirection::LMD_None) ? PreviousDirection : LastDirection;

  switch (DirectionToUse)
  {
  case ELastMoveDirection::LMD_Forward:
  case ELastMoveDirection::LMD_Backward:
    NewLightPosition = FVector(0.0f, 0.0f, 250.0f);
    break;
  case ELastMoveDirection::LMD_Left:
    NewLightPosition = FVector(0.0f, -100.0f, 250.0f);
    break;
  case ELastMoveDirection::LMD_Right:
    NewLightPosition = FVector(0.0f, 100.0f, 250.0f);
    break;
  default:
    NewLightPosition = FVector(0.0f, 0.0f, 250.0f);
    break;
  }

  PointLight->SetRelativeLocation(NewLightPosition);
}

void AMainCharacter::SetMovingDirection(ELastMoveDirection Direction, UPaperFlipbook* Flipbook)
{
  LastDirection = Direction;
  CharacterSprite->SetFlipbook(Flipbook);
}

FVector AMainCharacter::DetermineMovementDirection()
{
  switch (LastDirection)
  {
  case ELastMoveDirection::LMD_Forward:
    return GetActorForwardVector();
  case ELastMoveDirection::LMD_Backward:
    return -GetActorForwardVector();
  case ELastMoveDirection::LMD_Right:
    return GetActorRightVector();
  case ELastMoveDirection::LMD_Left:
    return -GetActorRightVector();
  default:
    return FVector::ZeroVector;
  }
}

void AMainCharacter::HandleMovement(const FVector& Direction, float DeltaTime)
{
  if (!Direction.IsZero())
  {
    AddMovementInput(Direction, 1.0f);
    UpdateCharacterDirection();
  }
  else
  {
    UpdateIdlePose();
  }
}

void AMainCharacter::PlayFootstepSound(float DeltaTime)
{
  const float SecondsPerStep = 0.5f; // Adjust this value for footstep frequency
  const float VolumeMultiplier = 1.0f;

  // Check if the character is moving
  if (GetVelocity().Size() > 0)
  {
    TimeSinceLastFootstep += DeltaTime;

    EMaterialType MaterialType = GetSurfaceType();
    TArray<USoundCue*>* SelectedFootstepSounds = nullptr;

    switch (MaterialType)
    {
    case EMaterialType::MT_SURFACE_DIRT:
      SelectedFootstepSounds = &FootstepDirtSounds;
      break;
    case EMaterialType::MT_SURFACE_GRAVEL:
      SelectedFootstepSounds = &FootstepGravelSounds;
      break;
    case EMaterialType::MT_SURFACE_GLASS:
      SelectedFootstepSounds = &FootstepGlassSounds;
      break;
    case EMaterialType::MT_SURFACE_MUD:
      SelectedFootstepSounds = &FootstepMudSounds;
      break;
    case EMaterialType::MT_SURFACE_PUDDLE:
      SelectedFootstepSounds = &FootstepPuddleSounds;
      break;
    case EMaterialType::MT_SURFACE_STONE:
      SelectedFootstepSounds = &FootstepStoneSounds;
      break;
    default:
      // Handle default case or other material types here.
      break;
    }

    if (SelectedFootstepSounds && SelectedFootstepSounds->Num() > 0 && TimeSinceLastFootstep >= SecondsPerStep)
    {
      int32 RandomIndex = FMath::RandRange(0, SelectedFootstepSounds->Num() - 1);
      UGameplayStatics::PlaySoundAtLocation(this, (*SelectedFootstepSounds)[RandomIndex], GetActorLocation(), VolumeMultiplier);
      TimeSinceLastFootstep = 0.0f; // Reset the timer
    }
  }
}

EMaterialType AMainCharacter::GetSurfaceType()
{
  FVector Start = GetActorLocation();
  FVector DownVector = -GetActorUpVector();
  FVector End = ((DownVector * 500.f) + Start);

  FHitResult HitResult;
  FCollisionQueryParams CollisionParams;

  GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, CollisionParams);

  if (HitResult.bBlockingHit)
  {
    UPrimitiveComponent* HitComponent = HitResult.GetComponent();

    AActor* HitActor = HitResult.GetActor();

    if (HitActor != nullptr)
    {
      if (HitActor->ActorHasTag(FName("Dirt")))
      {
        return EMaterialType::MT_SURFACE_DIRT;
      }
      else if (HitActor->ActorHasTag(FName("Mud")))
      {
        return EMaterialType::MT_SURFACE_MUD;
      }
      else if (HitActor->ActorHasTag(FName("Stone")))
      {
        return EMaterialType::MT_SURFACE_STONE;
      }
    }
    if (HitComponent)
    {
      UMaterialInterface* HitMaterial = HitComponent->GetMaterial(0);
      if (HitMaterial)
      {
        FString MaterialName = HitMaterial->GetName();
        //UE_LOG(LogTemp, Warning, TEXT("Hit Material: %s"), *MaterialName);

        if (MaterialName.Contains("Dirt"))
        {
          return EMaterialType::MT_SURFACE_DIRT;
        }
        else if (MaterialName.Contains("Gravel"))
        {
          return EMaterialType::MT_SURFACE_GRAVEL;
        }
        else if (MaterialName.Contains("Glass"))
        {
          return EMaterialType::MT_SURFACE_GLASS;
        }
        else if (MaterialName.Contains("Mud"))
        {
          return EMaterialType::MT_SURFACE_MUD;
        }
        else if (MaterialName.Contains("Puddle"))
        {
          return EMaterialType::MT_SURFACE_PUDDLE;
        }
        else if (MaterialName.Contains("Stone"))
        {
          return EMaterialType::MT_SURFACE_STONE;
        }
      }
    }
  }

  return EMaterialType::MT_SURFACE_DEFAULT;
}