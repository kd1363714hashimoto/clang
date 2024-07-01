#include<stdio.h>
main()
{
	int i,a;
	i = 0;
	a = 0;

	for (i = 1; a < 60; i++)
	{
		for (i = 1; i <= 20;i++)
		{
			a++;
			printf("%2d ", a);
		}
		printf("\n");
	}
}