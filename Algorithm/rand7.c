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
		printf("当たりの数は？ー＞");
		scanf("%d", &ans);
		
		if (ans < n)
		{
			printf("当たりよりも小さいです\n");
		}
		else if (ans > n)
		{
			printf("当たりよりもおおきいです\n");
		}
	}
	printf("正解！%d回目であたりました", i);

}