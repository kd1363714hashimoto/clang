#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int n,i,te;

	printf("何を出しますか？");
	scanf("%d", &te);

	srand(time(0));

	rand();

	n = rand() % 3 ;

	switch(te)
	{
	case 1:
		printf(プレイヤーはグーです。);
		break;
	case 2:
		printf(プレイヤーはパーです。);
		break;
	case 3:
		printf(プレイヤーはチョキです。);
		break;
	default:
		break;
	}


	switch(n)
	{
	case 1:
		printf(コンピューターはグーです。);
		break;
	case 2:
		printf(コンピューターはパーです。);
		break;
	case 3:
		printf(コンピューターはチョキです。);
		break;
	default:
		break;
	}

	if (te == n)
	{
		printf("プレイヤーの勝ちです。")
	}
	else if 
	

	printf("今日のあなたの運勢は、");
	
	for (i = 1; i <= 100;i++)
	{
		
		printf("%d\n",n);
	}
	

}