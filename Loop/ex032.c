#include<stdio.h>
main()
{
	int i, a;
	i = 0;
	
	printf("数を入れて");
	scanf("%d", &a);

	for (i = 1; i <= 5; i++)
	{
		printf("%d ", a*i);
	}
}