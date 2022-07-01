// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnumDefine.h"
#include "Team.generated.h"

/**
 *
 */

USTRUCT(BlueprintType)
struct  FTeamBaseProperty
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBaseProperty")
		int32 KeyID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBaseProperty")
		FName Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBaseProperty")
		EnumTeamType TeamType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBaseProperty")
		int32 TeamSize;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBaseProperty")
		int32 HP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBaseProperty")
		bool HasMP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBaseProperty")
		int32 MP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBaseProperty")
		float MoveSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBaseProperty")
		float AttackRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBaseProperty")
		int32 AttackAccuracy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBaseProperty")
		int32 NormalAttack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBaseProperty")
		int32 BreakingAttack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBaseProperty")
		int32 FireAttack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBaseProperty")
		int32 MagicAttack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBaseProperty")
		bool HasShotAbility;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBaseProperty")
		float ShotRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBaseProperty")
		int32 ShotAccuracy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBaseProperty")
		int32 NormalShot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBaseProperty")
		int32 BreakingShot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBaseProperty")
		int32 ShotRange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBaseProperty")
		int32 Defense;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBaseProperty")
		int32 Dodge;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBaseProperty")
		int32 PhysicalResistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FBaseProperty")
		int32 MagicResistance;

};
UCLASS()
class HAMMER_API ATeam : public AActor
{
	GENERATED_BODY()
private:
	UPROPERTY(EditAnywhere, Category = TeamManager)
	FName name;
	int memberSize;

	TArray<AActor*>teamMember;
	FTeamBaseProperty* TeamBaseProperty;
public:
	UFUNCTION(BlueprintCallable, Category = "ATeam")
	FORCEINLINE FName GetName() { return name; }
	//UFUNCTION(BlueprintCallable, Category = "ATeam")
	FORCEINLINE const FTeamBaseProperty* GetBaseProperty() { return TeamBaseProperty; }
	void Init(int32 KeyID);
};
