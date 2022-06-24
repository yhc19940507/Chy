// Fill out your copyright notice in the Description page of Project Settings.


#include "BattlefieldCamera.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine.h"
// Sets default values
ABattlefieldCamera::ABattlefieldCamera()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	battlefieldCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("BattlefieldCamera"));
	battlefieldCamera->bUsePawnControlRotation = true; // Camera does not rotate relative to arm
	battlefieldCamera->SetupAttachment(GetMesh(), "Mesh");
}

// Called when the game starts or when spawned
void ABattlefieldCamera::BeginPlay()
{
	Super::BeginPlay();
	battlefieldPlayerController = Cast<ABattlefieldPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
}

// Called every frame
void ABattlefieldCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ABattlefieldCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &ABattlefieldCamera::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABattlefieldCamera::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &ABattlefieldCamera::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &ABattlefieldCamera::LookUpAtRate);
}

void ABattlefieldCamera::MoveForward(float delta)
{
	if (delta != 0.f&&battlefieldPlayerController->GetIsRightMouseDown())
		GetCharacterMovement()->AddInputVector(battlefieldCamera->GetForwardVector() * 200 * delta);
}
void ABattlefieldCamera::MoveRight(float delta)
{
	if (delta != 0.f&&battlefieldPlayerController->GetIsRightMouseDown())
		GetCharacterMovement()->AddInputVector(battlefieldCamera->GetRightVector() * 200 * delta);
}
void ABattlefieldCamera::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	if (Rate != 0.f&&battlefieldPlayerController->GetIsRightMouseDown())
		AddControllerYawInput(Rate * 20.0f * GetWorld()->GetDeltaSeconds());
}

void ABattlefieldCamera::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	if (Rate != 0.f&&battlefieldPlayerController->GetIsRightMouseDown())
		AddControllerPitchInput(Rate * 20.0f * GetWorld()->GetDeltaSeconds());
}