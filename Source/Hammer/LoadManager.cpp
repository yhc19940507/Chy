// Fill out your copyright notice in the Description page of Project Settings.

#include "LoadManager.h"
#include "Engine/World.h"
#include <Misc/FileHelper.h>
#include <Hal/FileManagerGeneric.h>
#include "BattleField/EnumDeFine.h"
LoadManager* LoadManager::GetInstance()
{
	if (loadManager == nullptr)
	{
		loadManager = new LoadManager();
	}
	return loadManager;

}
bool LoadManager::LoadArmsBaseProperty()
{
	FString outString;
	FString ProjectDir = FPaths::ProjectDir();
	FString Subpaath = FPaths::ProjectDir() + TEXT("Developmentlog/ArmsConfig.csv");
	if (FFileManagerGeneric::Get().FileExists(*Subpaath)) {
		FFileHelper::LoadFileToString(outString, *(Subpaath), FFileHelper::EHashOptions::None, 0);
	}
	TArray<FString> strarray;
	FString temple;
	for (auto s : outString) {
		if (s != ',' && s != '\n' && s != '\r') {
			temple += s;
		}
		else {
			if (!temple.IsEmpty()) {
				strarray.Push(temple);
				temple.Empty();

			}
		}
	}
	int row = static_cast<int>(EnumTeamBaseProperty::Max);
	for (int i = row; i < strarray.Num(); i += row) {
		TArray<FString> currentString;
		for (int j = i; j < i + row; j++) {
			currentString.Add(strarray[j]);
		}
		ArmsBaseProperty.Add(FCString::Atoi(*currentString[0]), currentString);
	}
	return true;
}
