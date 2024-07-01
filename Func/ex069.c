#include<stdio.h>
main()
{
	int num,sum,i;
	num = sum = 0;

	while(scanf("%d",&num)!=EOF)
	{
		sum += num;
		printf("®”F");
		i++;
	}
	printf("‡Œv=%d •½‹Ï=%.2f",sum, (float)sum / i);
}