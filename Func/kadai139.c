#include<stdio.h>
hyouji(char c, int n,int i);

main()
{
	char c;
	int n,i;
	printf("文字？");
	scanf("%c", &c);
	printf("整数？");
	scanf("%d", &n);
	hyouji(c, n,i);
}

hyouji(char c, int n, int i)
{
	for (i = 1; i <= n; i++)
	{
		printf("%c", c);
	}
}