#include<stdio.h>
main()
{
	double a, b;
	printf("2�̎����l�H");
	scanf("%lf%lf", &a, &b);
	printf("�傫������");
	if (a < b)
	{
		printf("%lf", b);
	}
	else
	{
		printf("%lf", a);
	}
}