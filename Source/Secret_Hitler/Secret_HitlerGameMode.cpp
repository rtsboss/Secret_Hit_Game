// Copyright Epic Games, Inc. All Rights Reserved.

#include "Secret_HitlerGameMode.h"
#include "Secret_HitlerHUD.h"
#include "Secret_HitlerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASecret_HitlerGameMode::ASecret_HitlerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASecret_HitlerHUD::StaticClass();
}
