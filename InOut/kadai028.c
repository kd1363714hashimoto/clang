#include<stdio.h>
main()
{
	long r;
	r = 0;
	printf("整数？", r);
	scanf("%ld", &r);
	printf("2倍すると = %d\n", r * 2);
	printf("3倍すると = %d\n", r * 3);
	printf("4倍すると = %d\n", r * 4);
}