#include<stdio.h>
main()
{
	int a, b;
	printf("®”‚ÍH");
	scanf("%d", &a);
	printf("®”‚ÍH");
	scanf("%d", &b);
	if (a < b)
	{
		printf("%d ‚Ì•û‚ª %d ‚æ‚è %d ‘å‚«‚¢", b, a, b - a);
	}
	else if (a > b)
	{
		printf("%d ‚Ì•û‚ª %d ‚æ‚è %d ¬‚³‚¢", b, a, a - b);
	}
	else
	{
		printf("%d ‚Æ %d ‚Í“™‚µ‚¢", a, b);
	}
}