#include<stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},
		           {40,50,60},
		           {70,80,90} };
	int* p_tbl, i, k;

	p_tbl = tbl[0];

	printf("二次元配列の内容\n");

	for (k = 0; k < 3; k++)
	{
		for (i = 0; i < 3; i++)
		{
			printf(" %d ", *p_tbl++);
		}
		printf("\n");
	}
}