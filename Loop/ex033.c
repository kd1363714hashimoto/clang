#include<stdio.h>
main()
{
	int sum, i,num;
	printf("”‚ÍH");
	scanf("%d", &num);
	
	for (sum=0,i = 0; num != -999;i++)
	{
		sum += num;
		printf("”‚ÍH");
		scanf("%d",&num);
	}
	printf("‡Œv%d\n•½‹Ï=%.2f", sum,(float)sum/i);
}
