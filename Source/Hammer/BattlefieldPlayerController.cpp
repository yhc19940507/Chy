// Fill out your copyright notice in the Description page of Project Settings.


#include "BattlefieldPlayerController.h"
#include "Blueprint/UserWidget.h"
#include "PathDefine.h"
#include "Engine.h"
 ABattlefieldPlayerController::ABattlefieldPlayerController()
{

}

void ABattlefieldPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);
}
void ABattlefieldPlayerController::BeginPlay()
{
	Super::BeginPlay();
	bShowMouseCursor = false;
	UClass* widgetClass = LoadClass<UUserWidget>(nullptr, BATTLEFIELDMAINUI);
	UUserWidget* userWidget = CreateWidget<UUserWidget>(GetWorld(), widgetClass);
	if (userWidget) {
		userWidget->AddToViewport();
	}
}

void ABattlefieldPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();
	InputComponent->BindAction("LeftMouseDown", EInputEvent::IE_Pressed, this, &ABattlefieldPlayerController::OnLeftMousePress);
    InputComponent->BindAction("LeftMouseDown", EInputEvent::IE_Released, this, &ABattlefieldPlayerController::OnLeftMousRelase);
	InputComponent->BindAction("RightMouseDown", EInputEvent::IE_Pressed, this, &ABattlefieldPlayerController::OnRightMousePress);
	InputComponent->BindAction("RightMouseDown", EInputEvent::IE_Released, this, &ABattlefieldPlayerController::OnRightMousRelase);
}
void ABattlefieldPlayerController::OnLeftMousePress()
{
	leftMouseDown = true;
	GetMousePosition(leftmousePosx, leftmousePosy);
	bShowMouseCursor = false;
}
void ABattlefieldPlayerController::OnLeftMousRelase()
{
	leftMouseDown = false;
	bShowMouseCursor = true;
}
void ABattlefieldPlayerController::OnRightMousePress()
{
	GetMousePosition(rightmousePosx, rightmousePosy);
	rightMouseDown = true;
	bShowMouseCursor = false;
}
void ABattlefieldPlayerController::OnRightMousRelase()
{
	SetMouseLocation(rightmousePosx, rightmousePosy);
	rightMouseDown = false;
	bShowMouseCursor = true;
}