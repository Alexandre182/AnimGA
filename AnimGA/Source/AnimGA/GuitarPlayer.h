// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GuitarPlayer.generated.h"

UCLASS()
class ANIMGA_API AGuitarPlayer : public APawn
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGuitarPlayer();

	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* GuitarPlayerMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UBoxComponent* CollisionVolume;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "test")
	float FrequencyMagnitude;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Movement)
	TSubclassOf<class ASpectralVisualizer> Spec;

	ASpectralVisualizer* SpecAux;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
