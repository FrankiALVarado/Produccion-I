// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CubitoGameMode.h"
#include "CubitoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACubitoGameMode::ACubitoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
