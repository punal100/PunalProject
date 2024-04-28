// Copyright Epic Games, Inc. All Rights Reserved.

#include "PunalProjectGameMode.h"
#include "PunalProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

APunalProjectGameMode::APunalProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
