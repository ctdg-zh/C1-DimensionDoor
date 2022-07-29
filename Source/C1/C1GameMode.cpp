// Copyright Epic Games, Inc. All Rights Reserved.

#include "C1GameMode.h"
#include "C1HUD.h"
#include "C1Character.h"
#include "UObject/ConstructorHelpers.h"

AC1GameMode::AC1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AC1HUD::StaticClass();
}
