#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int n,i;

	srand(time(0));

	rand();

	

	printf("�����̂��Ȃ��̉^���́A");
	
	for (i = 1; i <= 100;i++)
	{
		n = rand() % 300 + 1;
		printf("%d\n",n);
	}
	

}