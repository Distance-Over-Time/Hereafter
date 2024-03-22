// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PaperFlipbookComponent.h"
#include "Enemy.generated.h"

UCLASS()
class OCTJAM_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	AEnemy();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UPaperFlipbookComponent* EnemySprite;

private:
	void Patrol();
	void ContinuePatrol();
	void RestartLevel();

	UFUNCTION()
	void OnOverlapWithPlayer(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	FVector PatrolTargetLocation;
	FVector LastKnownPosition;
	float TimeSinceLastMove = 0.0f;
	float PatrolRadius = 500.0f;
	float WaitDuration = 2.0f;

	FTimerHandle TimerHandle_WaitAtLocation;
};
