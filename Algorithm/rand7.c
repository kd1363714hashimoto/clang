#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int n,i,ans;
	ans = 0;

	srand(time(0));

	rand();

	n = rand() % 1000 + 1;

	printf("%d\n", n);
	
	for (i = 0;ans != n;i++)
	{
		printf("“–‚½‚è‚Ì”‚ÍH[„");
		scanf("%d", &ans);
		
		if (ans < n)
		{
			printf("“–‚½‚è‚æ‚è‚à¬‚³‚¢‚Å‚·\n");
		}
		else if (ans > n)
		{
			printf("“–‚½‚è‚æ‚è‚à‚¨‚¨‚«‚¢‚Å‚·\n");
		}
	}
	printf("³‰ğI%d‰ñ–Ú‚Å‚ ‚½‚è‚Ü‚µ‚½", i);

}