// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Enemy.h"
#include "Character/MainCharacter.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

AEnemy::AEnemy()
{
	PrimaryActorTick.bCanEverTick = true;

	// Initialize the flipbook component
	EnemySprite = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("EnemySprite"));
	EnemySprite->SetupAttachment(RootComponent);

  // Get the default capsule component and adjust its properties
  GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
  GetCapsuleComponent()->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
  GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_WorldStatic, ECollisionResponse::ECR_Block);
  GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_WorldDynamic, ECollisionResponse::ECR_Block);
  GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Pawn, ECollisionResponse::ECR_Overlap);
  GetCapsuleComponent()->SetGenerateOverlapEvents(true);
}

void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	
  Patrol();

  GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &AEnemy::OnOverlapWithPlayer);
}

void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!GetWorldTimerManager().IsTimerActive(TimerHandle_WaitAtLocation))
	{
		if (FVector::Dist(GetActorLocation(), PatrolTargetLocation) < 100.0f)
		{
			GetCharacterMovement()->StopMovementImmediately();

			// Wait for a random duration between 1 and 3 seconds
			WaitDuration = FMath::RandRange(1.0f, 3.0f);

			// Start the wait timer
			GetWorldTimerManager().SetTimer(TimerHandle_WaitAtLocation, this, &AEnemy::ContinuePatrol, WaitDuration);
		}
		else
		{
			// Move towards the patrol target location
			FVector Direction = (PatrolTargetLocation - GetActorLocation()).GetSafeNormal();
			AddMovementInput(Direction, 1.0f);
		}
	}

  // Check if we have moved significantly since last tick
  if (FVector::Dist(GetActorLocation(), LastKnownPosition) > 10.0f)
  {
    // We've moved, reset the timer and update the last known position
    TimeSinceLastMove = 0.0f;
    LastKnownPosition = GetActorLocation();
  }
  else
  {
    // We haven't moved much, increment the timer
    TimeSinceLastMove += DeltaTime;

    // Check if it's been more than 3 seconds
    if (TimeSinceLastMove > 3.0f)
    {
      // Too much time has passed without significant movement, pick a new patrol target
      Patrol();

      // Reset the timer as we're changing direction
      TimeSinceLastMove = 0.0f;
    }
  }
}

void AEnemy::Patrol()
{
	FVector NewPatrolCenter = GetActorLocation();
	PatrolTargetLocation = UKismetMathLibrary::RandomPointInBoundingBox(NewPatrolCenter, FVector(PatrolRadius, PatrolRadius, 0.0f));
}

void AEnemy::ContinuePatrol()
{
  GetWorldTimerManager().ClearTimer(TimerHandle_WaitAtLocation);

  Patrol();
}

void AEnemy::RestartLevel()
{
  UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
}

void AEnemy::OnOverlapWithPlayer(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
  AMainCharacter* MainCharacter = Cast<AMainCharacter>(OtherActor);
  if (MainCharacter)
  {
    // Check if the overlapping component is the CapsuleComponent of the MainCharacter
    if (OtherComp == MainCharacter->GetCapsuleComponent())
    {
      RestartLevel();
    }
  }
}

