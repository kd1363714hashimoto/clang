#include<stdio.h>
int gokei(int a, int b, int c);
float heikin(int a, int b, int c);
main()
{
	int a, b, c, ans,sum;
	float ave;
	printf("�������R���́F");
    scanf("%d%d%d", &a, &b, &c);
	sum = gokei(a, b, c);
	ave = heikin(a, b, c);
	printf("���v�� %d,���ς� %.2f", sum, (float)ave);
}


int gokei(int a, int b, int c)
{
	return a + b + c;;
}

float heikin(int a, int b, int c)
{
	
	return (float)gokei(a,b,c)/3;
}
