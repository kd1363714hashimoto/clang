#include<stdio.h>
main()
{

	int m;

	printf("������́F");
	scanf("%d", &m);

	if (m == 2)
	{
		printf("�ŏI����28���ł�");
	}
	else if (m==4||m==6||m==9||m==11)
	{
		printf("�ŏI����30���ł�");
	}
	else
	{
		printf("�ŏI����31���ł�");
	}
}