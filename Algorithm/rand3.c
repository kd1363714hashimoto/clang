#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int n;

	srand(time(0));

	rand();

	n = rand()%100+1;

	if (n <= 30)
	{
		printf("��������̂�������\n");
	}
	else
	{
		printf("�ʏ�U��\n");
	}

}