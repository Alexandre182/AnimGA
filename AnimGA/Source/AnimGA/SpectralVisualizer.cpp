// Fill out your copyright notice in the Description page of Project Settings.


#include "SpectralVisualizer.h"
#include "TimeSynthComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Public/StaticMeshResources.h"

// Sets default values
ASpectralVisualizer::ASpectralVisualizer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	SpectrumBarSpacing = 100.f;
	Test = 0.f;

	TimeSynthComponent = CreateDefaultSubobject<UTimeSynthComponent>("TimeSynthComponent");
	TimeSynthComponent->bEnableSpectralAnalysis = true;

	SetRootComponent(TimeSynthComponent);

	for (int32 i = 1; i <= 20; i++)
	{
		TimeSynthComponent->FrequenciesToAnalyze.Add(i * 50);

		FString SpectrumBarName = FString::Printf(TEXT("SpectrumBar %dHZ"), i * 50);

		UStaticMeshComponent* SpectrumBar = CreateDefaultSubobject<UStaticMeshComponent>(*SpectrumBarName);
		SpectrumBar->SetupAttachment(TimeSynthComponent);
		SpectrumBar->SetStaticMesh(SpectrumBarMesh);
		SpectrumBar->SetRelativeLocation(FVector(0.f, i * SpectrumBarSpacing, 0.f));
		SpectrumBars.Add(SpectrumBar);

	}

	MeshToDeform = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshToDeform"));

}

// Called when the game starts or when spawned
void ASpectralVisualizer::BeginPlay()
{
	Super::BeginPlay();
	
	Refresh();

	TimeSynthComponent->PlayClip(TimeSynthClip);


}

// Called every frame
void ASpectralVisualizer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	for (auto SpecData : TimeSynthComponent->GetSpectralData())
	{
		UStaticMeshComponent* SpectrumBar = SpectrumBars[SpecData.FrequencyHz / 50.f - 1];
		FVector BarScale = SpectrumBar->GetComponentScale();
		BarScale.Z = 1.f + SpecData.Magnitude / 5.f;
		SpectrumBar->SetWorldScale3D(FMath::VInterpTo(SpectrumBar->GetComponentScale(), BarScale, DeltaTime, 5.f));


		Test = SpecData.Magnitude * 10 * 2;
	}

}

void ASpectralVisualizer::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	
	Refresh();

}

void ASpectralVisualizer::Refresh()
{
	for (int32 i = 0; i <= 20; i++)
	{
		if (SpectrumBars.IsValidIndex(i))
		{
			UStaticMeshComponent* SpectrumBar = SpectrumBars[i];
			SpectrumBar->SetStaticMesh(SpectrumBarMesh);
			SpectrumBar->SetRelativeLocation(FVector((i + 1) * SpectrumBarSpacing, 0.f, 0.f));
		}
		
	}
}
