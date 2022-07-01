// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnumDefine.h"
#include "Team.h"
#include "BattlefiledBaseCharacter.generated.h"



UCLASS()
class HAMMER_API ABattlefiledBaseCharacter : public ACharacter
{
	GENERATED_BODY()
private:
	ATeam* parentTeam;

	
public:
	// Sets default values for this character's properties
	ABattlefiledBaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//UFUNCTION(BlueprintCallable, Category = "ABattlefiledBaseCharacter")
	FORCEINLINE const FTeamBaseProperty* GetBaseProperty() { return parentTeam->GetBaseProperty(); }
};
