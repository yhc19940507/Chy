// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Border.h"
#include "BattlefieldPlayerController.h"
#include "BattlefieldMainUI.generated.h"
/**
 * 
 */
UCLASS()
class HAMMER_API UBattlefieldMainUI : public UUserWidget
{
	GENERATED_BODY()
private:
	UPROPERTY(meta = (BindWidget))
		UBorder* SelectedBorder;
	ABattlefieldPlayerController * battlefieldPlayerController;
protected:
	virtual void NativePreConstruct()override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime)override;
	virtual void NativeConstruct()override;
};
