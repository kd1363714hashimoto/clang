#include<stdio.h>
main()
{

	int i, a, b;
	i = 1;
	a = 0;
	b = 0;


	while (a <= 300)
	{
		a = a + i;
		printf("%d+", i);
		i++;
	}
	printf("=%d", a);
}