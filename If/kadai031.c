#include<stdio.h>
main()
{
	double a, b;
	printf("2つの実数値？");
	scanf("%lf%lf", &a, &b);
	printf("大きい方は");
	if (a < b)
	{
		printf("%lf", b);
	}
	else
	{
		printf("%lf", a);
	}
}