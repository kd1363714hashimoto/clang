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
		printf("������̐��́H�[��");
		scanf("%d", &ans);
		
		if (ans < n)
		{
			printf("����������������ł�\n");
		}
		else if (ans > n)
		{
			printf("������������������ł�\n");
		}
	}
	printf("�����I%d��ڂł�����܂���", i);

}