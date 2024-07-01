#include<stdio.h>
main()
{
	int a,b,c,;

	printf("”‚ÍH");
	scanf("%d", &c);
	b = 1;
	do
	{
		a = 1;
		do
		{
			printf("*");
			a++;
		} while (a <= b);

		printf("\n");
		b++;
		c--;

	} while (c >= 1);
}