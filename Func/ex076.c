#include<stdio.h>
void sumavg(int a, int b, int* sum, float* avg);

main()
{
	int a, b, sum;
	float avg;
	printf("整数を二つ入力：");
	scanf("%d%d", &a, &b);
	sumavg(a, b, &sum,&avg);
	printf("合計は %d,平均は %.2f", sum, avg);
}

void sumavg(int a, int b, int* sum, float* avg)
{
	*sum = a + b;
	*avg = (float)*sum / 2;
}