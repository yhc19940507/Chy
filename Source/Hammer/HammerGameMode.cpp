// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "HammerGameMode.h"
#include "HammerPlayerController.h"
#include "HammerCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Battlefield/BattlefieldPlayerController.h"
#include "Battlefield/PathDefine.h"
#include "Battlefield/BattlefieldHUD.h"
AHammerGameMode::AHammerGameMode()
{
	// use our custom PlayerController class
	
	static ConstructorHelpers::FClassFinder<ABattlefieldPlayerController> MainPlayerController(BATTLEFIELDPLAYERCONTROLLER);
	PlayerControllerClass = MainPlayerController.Class;
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<ACharacter> PlayerPawnBPClass(BATTLEFIELDPLAYERCHARACTER);
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	
	static ConstructorHelpers::FClassFinder<ABattlefieldHUD> MainHUD(BATTLEFIELDHUD);
	HUDClass = MainHUD.Class;
	/*HUDClass =*/
}