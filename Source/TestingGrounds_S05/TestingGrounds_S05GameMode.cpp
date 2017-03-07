// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TestingGrounds_S05.h"
#include "TestingGrounds_S05GameMode.h"
#include "TestingGrounds_S05HUD.h"
#include "Player/FirstPersonCharacter.h"

ATestingGrounds_S05GameMode::ATestingGrounds_S05GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Player/Behavior/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestingGrounds_S05HUD::StaticClass();
}
