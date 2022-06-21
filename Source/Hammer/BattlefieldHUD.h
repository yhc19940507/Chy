// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BattlefieldPlayerController.h"
#include "BattlefieldHUD.generated.h"

/**
 * 
 */
UCLASS()
class HAMMER_API ABattlefieldHUD : public AHUD
{
	GENERATED_BODY()
private:
	ABattlefieldPlayerController * battlefieldPlayerController;
protected:
	void ReceiveDrawHUD(int32 SizeX, int32 SizeY);
	virtual void DrawHUD()override;
	virtual void BeginPlay()override;
};
