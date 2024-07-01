#include<stdio.h>
main()
{
	int a;
	printf("整数？");
	scanf("%d", &a);
	printf("入力値は");
	if (a > 0)
	{
		printf("「プラス」");
	}
	else if (a < 0)
	{
		printf("「マイナス」");
	}
	else
	{
		printf("「0」");
	}
	printf("です。");
}