// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Team.h"
#include "Array" 
#include "TeamManager.generated.h"

/**
 *
 */
UCLASS()
class HAMMER_API ATeamManager : public AActor
{
	GENERATED_BODY()
private:
	UPROPERTY(EditAnywhere, Category = TeamManager)
	TArray<ATeam*> totalTeamArray;
	UPROPERTY(EditAnywhere, Category = TeamManager)
	TArray<ATeam*> selectedTeamArray;
public:
	bool addTeam(int32 KeyID);
	bool addTeam(ATeam* Team);
};
