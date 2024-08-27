// Fill out your copyright notice in the Description page of Project Settings.


#include "EventTrigger.h"

AEventTrigger::AEventTrigger()
{
	OnActorBeginOverlap.AddDynamic(this, &AEventTrigger::Event);
}

void AEventTrigger::BeginPlay()
{
	Super::BeginPlay();

}

void AEventTrigger::Event(class AActor* overlappedActor, class AActor* otherActor)
{
	if (otherActor && otherActor != this)
	{
		if (ball)
		{
			ball->FindComponentByClass<UStaticMeshComponent>()->SetSimulatePhysics(true);
		}
	}
}