#include<stdio.h>
main()
{
	char a;
	int su1,su2,su3,s;

	printf("処理を入力");
	scanf("%c", &a);

	printf("整数を入力");
	scanf("%d %d %d", &su1,&su2,&su3);

	s = su1 + su2 + su3;
	switch (a)
	{
		
	case 'd':
	case 'D':
		if (su1>su2)
		{
			printf("最大値は%dです", su1);
		}
		else if (su2>su3)
		{
			printf("最大値は%dです", su2);
		}
		else
		{
			printf("最大値は%dです", su3);
		}
		break;
	case 's':
	case 'S':
	{
		if (su1 > su2)
		{
			printf("最小値は%dです", su2);
		}
		else if (su1 > su3)
		{
			printf("最小値は%dです", su3);
		}
		else
		{
			printf("最小値は%dです", su1);
		}
		break;
	}
	case 'g':
	case 'G':
	{
		printf("合計は%dです", s);
		break;
	}
	case 'h':
	case 'H':
	{
		printf("平均は%.2fです", s / 3.0);
		break;
	}
	default:
		printf("error");
		break;
	}
}