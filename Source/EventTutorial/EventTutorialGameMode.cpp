// Copyright Epic Games, Inc. All Rights Reserved.

#include "EventTutorialGameMode.h"
#include "EventTutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEventTutorialGameMode::AEventTutorialGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
