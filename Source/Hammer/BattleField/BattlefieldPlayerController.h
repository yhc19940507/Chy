// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "../LoadManager.h"
#include "BattlefieldPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class HAMMER_API ABattlefieldPlayerController : public APlayerController
{
	GENERATED_BODY()
private:

	bool rightMouseDown = false;
	bool leftMouseDown = false;
	//��ǰ������ʱ�����λ��
	float leftmousePosx = 0.f;
	float leftmousePosy = 0.f;
	//��ǰ����Ҽ�ʱ�����λ��
	float rightmousePosx = 0.f;
	float rightmousePosy = 0.f;
public:
	ABattlefieldPlayerController();
	FORCEINLINE bool GetIsRightMouseDown() { return rightMouseDown; };
	FORCEINLINE bool GetIsLeftMouseDown() { return leftMouseDown; };
	FORCEINLINE void GetMousePosLClick(float &premousePosx, float &premousePosy) { premousePosx = leftmousePosx; premousePosy = leftmousePosy;};
protected:
	virtual void SetupInputComponent() override;
	void OnLeftMousePress();
	void OnLeftMousRelase();
	void OnRightMousePress();
	void OnRightMousRelase();
	virtual void PlayerTick(float DeltaTime) override;
	virtual void BeginPlay() override;
};
