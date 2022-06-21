// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "HammerPlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "HammerCharacter.h"
#include "Engine/World.h"

AHammerPlayerController::AHammerPlayerController()
{
	//bShowMouseCursor = true;
	//DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void AHammerPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	//// keep updating the destination every tick while desired
	//if (bMoveToMouseCursor)
	//{
	//	MoveToMouseCursor();
	//}
}

void AHammerPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	//InputComponent->BindAction("SetDestination", IE_Pressed, this, &AHammerPlayerController::OnSetDestinationPressed);
	//InputComponent->BindAction("SetDestination", IE_Released, this, &AHammerPlayerController::OnSetDestinationReleased);

	//// support touch devices 
	//InputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AHammerPlayerController::MoveToTouchLocation);
	//InputComponent->BindTouch(EInputEvent::IE_Repeat, this, &AHammerPlayerController::MoveToTouchLocation);

	//InputComponent->BindAction("ResetVR", IE_Pressed, this, &AHammerPlayerController::OnResetVR);
}

void AHammerPlayerController::OnResetVR()
{
	//UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AHammerPlayerController::MoveToMouseCursor()
{
	//if (UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled())
	//{
	//	if (AHammerCharacter* MyPawn = Cast<AHammerCharacter>(GetPawn()))
	//	{
	//		if (MyPawn->GetCursorToWorld())
	//		{
	//			UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, MyPawn->GetCursorToWorld()->GetComponentLocation());
	//		}
	//	}
	//}
	//else
	//{
	//	// Trace to see what is under the mouse cursor
	//	FHitResult Hit;
	//	GetHitResultUnderCursor(ECC_Visibility, false, Hit);

	//	if (Hit.bBlockingHit)
	//	{
	//		// We hit something, move there
	//		SetNewMoveDestination(Hit.ImpactPoint);
	//	}
	//}
}

void AHammerPlayerController::MoveToTouchLocation(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	//FVector2D ScreenSpaceLocation(Location);

	//// Trace to see what is under the touch location
	//FHitResult HitResult;
	//GetHitResultAtScreenPosition(ScreenSpaceLocation, CurrentClickTraceChannel, true, HitResult);
	//if (HitResult.bBlockingHit)
	//{
	//	// We hit something, move there
	//	SetNewMoveDestination(HitResult.ImpactPoint);
	//}
}

void AHammerPlayerController::SetNewMoveDestination(const FVector DestLocation)
{
	//APawn* const MyPawn = GetPawn();
	//if (MyPawn)
	//{
	//	float const Distance = FVector::Dist(DestLocation, MyPawn->GetActorLocation());

	//	// We need to issue move command only if far enough in order for walk animation to play correctly
	//	if ((Distance > 120.0f))
	//	{
	//		UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, DestLocation);
	//	}
	//}
}

void AHammerPlayerController::OnSetDestinationPressed()
{
	// set flag to keep updating destination until released
	//bMoveToMouseCursor = true;
}

void AHammerPlayerController::OnSetDestinationReleased()
{
	// clear flag to indicate we should stop updating the destination
	//bMoveToMouseCursor = false;
}
