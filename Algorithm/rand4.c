#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int n,i;

	srand(time(0));

	rand();

	n = rand()%5+1;

	printf("今日のあなたの運勢は、");
	
	for (i = 1; i <= n;i++)
	{
		printf("☆");
	}
	printf("です。");

}