#include<stdio.h>
void sumavg(int a, int b, int* sum, float* avg);

main()
{
	int a, b, sum;
	float avg;
	printf("���������́F");
	scanf("%d%d", &a, &b);
	sumavg(a, b, &sum,&avg);
	printf("���v�� %d,���ς� %.2f", sum, avg);
}

void sumavg(int a, int b, int* sum, float* avg)
{
	*sum = a + b;
	*avg = (float)*sum / 2;
}