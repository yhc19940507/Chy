// Fill out your copyright notice in the Description page of Project Settings.


#include "BattlefiledBaseCharacter.h"

// Sets default values
ABattlefiledBaseCharacter::ABattlefiledBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABattlefiledBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABattlefiledBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABattlefiledBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

