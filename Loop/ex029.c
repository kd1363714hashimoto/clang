#include<stdio.h>
main()
{
	int a, b;
	a = 0;
	b = 0;
	printf("数を入れて");
	scanf("%d", &a);

	while (b < a)
	{
		printf("*");
		b++;
	}
	
}