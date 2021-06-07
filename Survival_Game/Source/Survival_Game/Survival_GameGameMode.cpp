// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Survival_GameGameMode.h"
#include "Survival_GameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASurvival_GameGameMode::ASurvival_GameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
