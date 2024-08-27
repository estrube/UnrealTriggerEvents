// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/TriggerBox.h"
#include "EventTrigger.generated.h"

/**
 * 
 */
UCLASS()
class EVENTTUTORIAL_API AEventTrigger : public ATriggerBox
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay();

public:
	AEventTrigger();

	UFUNCTION()
		void Event(class AActor* overlappedActor, class AActor* otherActor);

	UPROPERTY(EditAnywhere)
		AActor* ball;
};
