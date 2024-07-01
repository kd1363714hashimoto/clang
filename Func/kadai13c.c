#include<stdio.h>
void swap(int *a, int *b);

main()
{
	int a, b;
	printf("関数実行前の値：\n");
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	swap(&a, &b);
	printf("関数実行後の値：\n");
	printf("a = %d b = %d",a,b);
}

void swap(int *a, int *b)
{
	int w;
	w = 0;
	w = *a;
	*a = *b;
	*b = w;
}