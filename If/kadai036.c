#include<stdio.h>
main()
{
	int a, b;
	printf("整数は？");
	scanf("%d", &a);
	printf("整数は？");
	scanf("%d", &b);
	if (a < b)
	{
		printf("%d の方が %d より %d 大きい", b, a, b - a);
	}
	else if (a > b)
	{
		printf("%d の方が %d より %d 小さい", b, a, a - b);
	}
	else
	{
		printf("%d と %d は等しい", a, b);
	}
}