#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
namespace Battlefield
{

}
UENUM(BlueprintType)
enum class EnumTeamType :uint8
{
	INFANTRY = 0     UMETA(DisplayName = "INFANTRY"),//步兵
	INFANTRYWITHSHIELD UMETA(DisplayName = "INFANTRYWITHSHIELD"),//持盾步兵
	INFANTRYWITHSPEAR  UMETA(DisplayName = "INFANTRYWITHSPEAR"),//持矛步兵
	INFANTRYWITHBOW    UMETA(DisplayName = "INFANTRYWITHBOW"),//持弓步兵
	CAVALRY            UMETA(DisplayName = "CAVALRY"),//骑兵
	CAVALRYWITHSPEAR   UMETA(DisplayName = "CAVALRYWITHSPEAR"),//骑枪骑兵
	CAVALRYWITHSHIELD  UMETA(DisplayName = "CAVALRYWITHSHIELD"),//持盾骑兵
	CAVALRYWITHWINGS   UMETA(DisplayName = "CAVALRYWITHWINGS"),//飞行骑兵
	WINGS              UMETA(DisplayName = "WINGS"),//飞行单位
	WINGSWITHBOW       UMETA(DisplayName = "WINGSWITHBOW"),//持弓飞行单位
	LARGE              UMETA(DisplayName = "Large"),//大型单位
	LARGEWITHWINS      UMETA(DisplayName = "LARGEWITHWINS"),//大型飞行单位
	CHARIOT            UMETA(DisplayName = "CHARIOT"),//战车
	ARTILLERY          UMETA(DisplayName = "ARTILLERY"),//炮兵
	COMMANDER          UMETA(DisplayName = "COMMANDER"),//领主
	HERO               UMETA(DisplayName = "HERO"),//事务官
	MaxID              UMETA(DisplayName = "MaxID"),//最大值
};
UENUM(BlueprintType)
enum class EnumTeamBaseProperty :uint8
{
	KeyID =0,
	Name,
	TeamType,
	TeamSize,
	HP,
	HasMP,
	MP,
	MoveSpeed,
	AttackRate,
	AttackAccuracy,
	NormalAttack,
	BreakingAttack,
	FireAttack,
	MagicAttack,
	HasShotAbility,
	ShotRate,
	ShotAccuracy,
	NormalShot,
	BreakingShot,
	ShotRange,
	Defense,
	Dodge,
	PhysicalResistance,
	MagicResistance,
	Max,
};
