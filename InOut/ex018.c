#include<stdio.h>
main()
{
	int a, b, c, goukei;
	printf("整数を３個入力:");
	scanf("%d%d%d", &a, &b, &c);

	goukei = a + b + c;

	printf("合計= %d\n", goukei); //合計を表示
	printf("平均= %.2f\n", (float)goukei / 3.0); //平均を表示
}