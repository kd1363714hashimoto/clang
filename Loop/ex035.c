#include<stdio.h>
main()
{
	int i,s;

	i = 0;
	s = 0;

	while (1)
	{
		printf("��������");
		scanf("%d", &i);
		if (i == -999)break;
		s += i;
		printf("\n");
	}
	printf("���v��%d", s);
}