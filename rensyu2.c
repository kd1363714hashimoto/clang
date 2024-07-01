#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int dice;

	srand(time(0));

	rand();

	dice = rand()%41+10;
	printf("—”‚Í%d‚Å‚·\n", dice);
}