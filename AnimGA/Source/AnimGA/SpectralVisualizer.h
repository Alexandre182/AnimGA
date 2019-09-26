// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpectralVisualizer.generated.h"

UCLASS()
class ANIMGA_API ASpectralVisualizer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpectralVisualizer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;

	void Refresh();

	UPROPERTY(EditAnywhere, Category = "Audio")
	class UTimeSynthComponent* TimeSynthComponent;

	UPROPERTY(EditAnywhere, Category = "Audio")
	class UTimeSynthClip* TimeSynthClip;

	UPROPERTY(EditAnywhere, Category = "Audio")
	TArray<UStaticMeshComponent*> SpectrumBars;

	UPROPERTY(EditAnywhere, Category = "Audio")
	UStaticMesh* SpectrumBarMesh;

	UPROPERTY(EditAnywhere, Category = "Audio")
	UStaticMeshComponent* MeshToDeform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	float Test;

	float Testaux;

	/**This is the amount of spacing between each bar*/
	UPROPERTY(EditAnywhere, Category = "Audio")
	float SpectrumBarSpacing;

	FTimerHandle MemberTimerHandle;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float GetTest();

	void SetTest();

};
