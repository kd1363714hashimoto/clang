#include<stdio.h>
main()
{
	int i, a,b;

	i = 0;
	a = 0;
	b = 0;

	printf("��������");
	scanf("%d", &i);

	while (b<=10)
	{
		a = i + b;
		printf("%d + %d = %d\n", i, b, a);
		b++;
	}
}