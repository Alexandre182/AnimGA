// Fill out your copyright notice in the Description page of Project Settings.

#include "GuitarPlayer.h"
#include "SpectralVisualizer.h"
#include "Components/BoxComponent.h"
#include "UObject/UObjectIterator.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
AGuitarPlayer::AGuitarPlayer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionVolume"));
	RootComponent = CollisionVolume;

	GuitarPlayerMesh = CreateDefaultSubobject<USkeletalMeshComponent>("GuitarPlayerMesh");
	GuitarPlayerMesh->SetupAttachment(GetRootComponent());

	FrequencyMagnitude = 0;
}

// Called when the game starts or when spawned
void AGuitarPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGuitarPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	for (TObjectIterator<ASpectralVisualizer> Itr; Itr; ++Itr)
	{
		// Access the subclass instance with the * or -> operators.
		ASpectralVisualizer *Component = *Itr;

		FrequencyMagnitude = Itr->GetTest();
	}

}

