// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

class  LoadManager
{
private:
	//static LoadManager* loadManager;
	TMap<int32, TArray<FString>>ArmsBaseProperty;
public:
	static LoadManager* GetInstance();
	bool LoadArmsBaseProperty();
};
static LoadManager* loadManager = nullptr;