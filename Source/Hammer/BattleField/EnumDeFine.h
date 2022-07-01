#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
namespace Battlefield
{

}
UENUM(BlueprintType)
enum class EnumTeamType :uint8
{
	INFANTRY = 0     UMETA(DisplayName = "INFANTRY"),//����
	INFANTRYWITHSHIELD UMETA(DisplayName = "INFANTRYWITHSHIELD"),//�ֶܲ���
	INFANTRYWITHSPEAR  UMETA(DisplayName = "INFANTRYWITHSPEAR"),//��ì����
	INFANTRYWITHBOW    UMETA(DisplayName = "INFANTRYWITHBOW"),//�ֹ�����
	CAVALRY            UMETA(DisplayName = "CAVALRY"),//���
	CAVALRYWITHSPEAR   UMETA(DisplayName = "CAVALRYWITHSPEAR"),//��ǹ���
	CAVALRYWITHSHIELD  UMETA(DisplayName = "CAVALRYWITHSHIELD"),//�ֶ����
	CAVALRYWITHWINGS   UMETA(DisplayName = "CAVALRYWITHWINGS"),//�������
	WINGS              UMETA(DisplayName = "WINGS"),//���е�λ
	WINGSWITHBOW       UMETA(DisplayName = "WINGSWITHBOW"),//�ֹ����е�λ
	LARGE              UMETA(DisplayName = "Large"),//���͵�λ
	LARGEWITHWINS      UMETA(DisplayName = "LARGEWITHWINS"),//���ͷ��е�λ
	CHARIOT            UMETA(DisplayName = "CHARIOT"),//ս��
	ARTILLERY          UMETA(DisplayName = "ARTILLERY"),//�ڱ�
	COMMANDER          UMETA(DisplayName = "COMMANDER"),//����
	HERO               UMETA(DisplayName = "HERO"),//�����
	MaxID              UMETA(DisplayName = "MaxID"),//���ֵ
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
