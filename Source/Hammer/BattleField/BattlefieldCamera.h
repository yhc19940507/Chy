// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Character.h"
#include "BattlefieldPlayerController.h"
#include "BattlefieldCamera.generated.h"

UCLASS()
class HAMMER_API ABattlefieldCamera : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABattlefieldCamera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* battlefieldCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = speed, meta = (AllowPrivateAccess = "true"))
	float cameraMoveSpeed;

	ABattlefieldPlayerController * battlefieldPlayerController;

	void MoveForward(float delta);
	void MoveRight(float delta);
	void TurnAtRate(float delta);
	void LookUpAtRate(float delta);
};
