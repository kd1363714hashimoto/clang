#include<stdio.h>
main()
{
	int i;
	char d[99];

	printf("��������͂��Ă�������");
	scanf("%s",&d[0]);

	for (i = 0; d[i] != '\0'; i++)
	{
		d[i]= d[i] + 1;
	}
	printf("%s", &d[0]);
}