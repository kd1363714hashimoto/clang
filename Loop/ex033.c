#include<stdio.h>
main()
{
	int sum, i,num;
	printf("数は？");
	scanf("%d", &num);
	
	for (sum=0,i = 0; num != -999;i++)
	{
		sum += num;
		printf("数は？");
		scanf("%d",&num);
	}
	printf("合計＝%d\n平均=%.2f", sum,(float)sum/i);
}
