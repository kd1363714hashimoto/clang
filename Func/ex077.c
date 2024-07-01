#include<stdio.h>
maxmin(int a, int b, int c, int* max, int* min);

main()
{
	int a, b, c, max, min;
	a = b = c = 0;
	printf("®”‚ğ3‚Â“ü—ÍF");
	scanf("%d%d%d", &a, &b, &c);
	maxmin(a, b, c, &max, &min);
	printf("Å‘å’l‚Í = %d Å¬’l = %d",max,min);
}

maxmin(int a, int b, int c, int* max, int* min)
{
	/*if (a < b && b < c)
	{
		*max = c;
		*min = a;
	}
	if (a < c && c < b)
	{
		*max = b;
		*min = a;
	}
	if (b < a && a < c)
	{
		*max = c;
		*min = b;
	}
	if (b < c && c < a)
	{
		*max = a;
		*min = b;
	}
	if (c < b && b < a)
	{
		*max = a;
		*min = c;
	}
	if (c < b && a < b)
	{
		*max = b;
		*min = c;
	}*/
	*max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
	*min = (a < b) ? (a < c ? a : c) : (b < c ? b : c);
}