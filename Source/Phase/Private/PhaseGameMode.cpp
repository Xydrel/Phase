// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "Phase.h"
#include "PhaseGameMode.h"
#include "PhaseCharacter.h"

APhaseGameMode::APhaseGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/MyCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
