// Copyright Epic Games, Inc. All Rights Reserved.

#include "TP_2GameMode.h"
#include "TP_2HUD.h"
#include "TP_2Character.h"
#include "UObject/ConstructorHelpers.h"

ATP_2GameMode::ATP_2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATP_2HUD::StaticClass();
}
