#include<stdio.h>
main()
{
	int a;

	printf("西暦を入力：");
	scanf("%d", &a);
	
	if (a / 400 == 0)
	{
		printf("うるう年です。");
     }
	else if (a / 4 == 0 && a / 100 != 0)
	{
		printf("うるう年です。");
	}
	else
	{
		printf("うるう年ではないです。");
	}
}