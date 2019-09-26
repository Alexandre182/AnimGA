// Fill out your copyright notice in the Description page of Project Settings.


#include "CharAnimInstance.h"
#include "EngineUtils.h"
#include "UObject/UObjectIterator.h"
#include "SpectralVisualizer.h"
#include "GameFramework/CharacterMovementComponent.h"


void UCharAnimInstance::NativeInitializeAnimation()
{
	FreqMagnitude = 100.f;
}
void UCharAnimInstance::UpdateAnimationProperties()
{
	for (TObjectIterator<ASpectralVisualizer> Itr; Itr; ++Itr)
	{
		// Access the subclass instance with the * or -> operators.
		ASpectralVisualizer *Component = *Itr;
		FreqMagnitude = Itr->GetTest();
	}
}
