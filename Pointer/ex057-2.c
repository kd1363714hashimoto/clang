#include<stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},
		           {40,50,60},
		           {70,80,90} };
	int* p_tbl, i, k;

	i = 0;

	p_tbl = &tbl[0][1];

	printf("“ñŽŸŒ³”z—ñ‚Ì“à—e\n");

	
		for (i = 0; i < 3; i++)
		{
			printf(" %d ", *p_tbl);
			p_tbl += 3;
		}

	
}