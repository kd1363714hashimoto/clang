#include<stdio.h>
main()
{
	int a, b, c;

	printf("”‚ÍH");
	scanf("%d", &a);
	
	c = 1;
	

	do
	{
		b = 1;
		do
		{
			printf(" ");
			b++;
		} while (b <= a);
		b = 1;
		do
		{
			printf("*");
			b++;
		} while (b<=c);
		printf("\n");
		c++;
		a--;
	}while(a >= 1);





}