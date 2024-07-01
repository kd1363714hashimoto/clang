#include<stdio.h>
void sumavg(int a, int b, int* sum, float* avg);

main()
{
	int a, b, sum;
	float avg;
	printf("®”‚ğ“ñ‚Â“ü—ÍF");
	scanf("%d%d", &a, &b);
	sumavg(a, b, &sum,&avg);
	printf("‡Œv‚Í %d,•½‹Ï‚Í %.2f", sum, avg);
}

void sumavg(int a, int b, int* sum, float* avg)
{
	*sum = a + b;
	*avg = (float)*sum / 2;
}