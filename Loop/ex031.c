#include<stdio.h>
main()
{
	int i,s;
	s = 0;
	i = 1;
	
	for (i=1;i <= 10;i++)
	{
		s += i;
		printf("1����%d�܂ł̘a=%d\n", i, s);
	}

}