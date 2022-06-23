// Fill out your copyright notice in the Description page of Project Settings.


#include "BattlefieldCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine.h"
// Sets default values
ABattlefieldCharacter::ABattlefieldCharacter()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	battlefieldCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("BattlefieldCamera"));
	battlefieldCamera->bUsePawnControlRotation = true; // Camera does not rotate relative to arm
	battlefieldCamera->SetupAttachment(GetMesh(), "Mesh");
}

// Called when the game starts or when spawned
void ABattlefieldCharacter::BeginPlay()
{
	Super::BeginPlay();
	battlefieldPlayerController = Cast<ABattlefieldPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
}

// Called every frame
void ABattlefieldCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ABattlefieldCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &ABattlefieldCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABattlefieldCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &ABattlefieldCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &ABattlefieldCharacter::LookUpAtRate);
}

void ABattlefieldCharacter::MoveForward(float delta)
{
	if (delta != 0.f&&battlefieldPlayerController->GetIsRightMouseDown())
		GetCharacterMovement()->AddInputVector(battlefieldCamera->GetForwardVector() * 200 * delta);
}
void ABattlefieldCharacter::MoveRight(float delta)
{
	if (delta != 0.f&&battlefieldPlayerController->GetIsRightMouseDown())
		GetCharacterMovement()->AddInputVector(battlefieldCamera->GetRightVector() * 200 * delta);
}
void ABattlefieldCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	if (Rate != 0.f&&battlefieldPlayerController->GetIsRightMouseDown())
		AddControllerYawInput(Rate * 20.0f * GetWorld()->GetDeltaSeconds());
}

void ABattlefieldCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	if (Rate != 0.f&&battlefieldPlayerController->GetIsRightMouseDown())
		AddControllerPitchInput(Rate * 20.0f * GetWorld()->GetDeltaSeconds());
}