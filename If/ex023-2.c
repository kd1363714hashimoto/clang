#include<stdio.h>
main()
{
	int a;

	printf("�������́F");
	scanf("%d", &a);
	
	if (a / 400 == 0)
	{
		printf("���邤�N�ł��B");
     }
	else if (a / 4 == 0 && a / 100 != 0)
	{
		printf("���邤�N�ł��B");
	}
	else
	{
		printf("���邤�N�ł͂Ȃ��ł��B");
	}
}