#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Skill_Num 3
#define Mob_Num 3

typedef unsigned int UINT;

typedef struct
{
	char name[20];	//スキル名
	int tupe;		//スキルの種類
	int use_mp;		//使用MP量
	int effect;		//スキル効果
} Skill;
typedef struct
{
	char name[20];	//名前
	int hp;			//体力
	int atk;		//攻撃力
	int def;		//防御力
	UINT state		//状態
} Spec;
typedef struct
{
	Spec sp;		//spec構造体変数
	int maxhp;		//最大HP
	int mp;			//MP
	Skill skl[Skill_Num];//Skill型構造体配列
} Chara;
typedef struct
{
	Spec sp;		//spec構造体変数
	int rate;		//状態異常攻撃発生レート％表記
} Mob;

enum BitState
{
	Base		= 0,		//0000 0000 通常状態
	Poison		= 1 << 0,	//0000 0001 毒状態
	Sleep		= 1 << 1,	//0000 0010 睡眠状態
	Paralysis	= 1 << 2,	//0000 0100 麻痺状態
	Burn		= 1 << 3,	//0000 1000 やけど状態
	AtkUp		= 1 << 4,	//0001 0000 攻撃力アップ状態
	AtkDown		= 1 << 5	//0010 0000 攻撃力ダウン状態
};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);
main()
{
	UINT MyState = Base;
	/*MyState |= (Poison | Sleep);
	MyState |= Poison;
	MyState |= Sleep;*/
	DisplayStatus(MyState);
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}

void DisplayStatus(UINT s)
{
	printf("****現在の状態****\n");
	if (s & Poison)
	{
		printf("毒\n");
	}
	if (s & Sleep)
	{
		printf("睡眠\n");
	}
	if (s & Paralysis)
	{
		printf("麻痺\n");
	}
	if (s & Burn)
	{
		printf("やけど\n");
	}
	if (s & AtkUp)
	{
		printf("攻撃力アップ\n");
	}
	if (s & AtkDown)
	{
		printf("攻撃力ダウン\n");
	}
	printf("***********************\n");
}

void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("どの状態にしますか？\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 0:終了>\n");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}

		switch (a)
		{
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:	//1?6に合致しなかったときの処理
			break;
		}
	}
}

void ClearFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("どの状態を解除しますか\n");
		printf("1:毒 2 : 睡眠 3 : 麻痺 4 : 火傷 5 : 攻撃↑ 6 : 攻撃↓ 0 : 終了 > \n");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}

		switch (a)
		{
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		default:	//1?6に合致しなかったときの処理
			break;
		}
	}
}
