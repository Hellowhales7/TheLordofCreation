// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectMSGameMode.h"
#include "ProjectMSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectMSGameMode::AProjectMSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
