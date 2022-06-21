// Fill out your copyright notice in the Description page of Project Settings.


#include "BattlefieldMainUI.h"
#include "BattlefieldMainUI.h"
#include "UMG/Public/Components/CanvasPanelSlot.h"
#include "Kismet/GameplayStatics.h"
void UBattlefieldMainUI::NativeTick(const FGeometry & MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	if (battlefieldPlayerController&&battlefieldPlayerController->GetIsLeftMouseDown())
	{
		float mousePosx, mousePosy;
		battlefieldPlayerController->GetMousePosition(mousePosx, mousePosy);
		/*SelectedBorder->*/
	}
	
}

void UBattlefieldMainUI::NativeConstruct()
{
	Super::NativeConstruct();
	battlefieldPlayerController = Cast<ABattlefieldPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
}
void UBattlefieldMainUI::NativePreConstruct()
{
	Cast<UCanvasPanelSlot>(SelectedBorder->Slot)->SetPosition(FVector2D(500, 100));
}