// Fill out your copyright notice in the Description page of Project Settings.


#include "BattlefieldHUD.h"
#include "Blueprint/UserWidget.h"
#include "Engine.h"
void ABattlefieldHUD::ReceiveDrawHUD(int32 SizeX, int32 SizeY)
{
	if (battlefieldPlayerController->GetIsLeftMouseDown())
	{
		float mousePosx, mousePosy;
		battlefieldPlayerController->GetMousePosLClick(mousePosx,mousePosy);
		float curmousePosx, curmousePosy;
		battlefieldPlayerController->GetMousePosition(curmousePosx, curmousePosy);
		DrawRect(FLinearColor(0xFF, 0xFF, 0xff, 255), mousePosx, mousePosy, (curmousePosx- mousePosx), (curmousePosy - mousePosy));
	}
	

}

void ABattlefieldHUD::DrawHUD()
{
	ReceiveDrawHUD(0, 0);
}

void ABattlefieldHUD::BeginPlay()
{
	Super::BeginPlay();
	battlefieldPlayerController = Cast<ABattlefieldPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
}
