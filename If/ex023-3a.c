#include<stdio.h>
main()
{
	int n1, n2, flg;

	printf("‰‰Zq‚ğ“ü—ÍF");
	scanf("%d",&flg);

	printf("“ñ‚Â‚Ì®”‚ğ“ü—ÍF");
	scanf("%d%d",&n1, &n2);

	if (flg == 1)
	{
		printf("%d\n", n1 + n2);
	}
	else if (flg == 2)
	{
		printf("%d\n", n1 - n2);
	}
	else if (flg == 3)
	{
		printf("%d\n", n1 * n2);
	}
	else
	{
		printf("%d\n", n1 / n2);
	}
	
}