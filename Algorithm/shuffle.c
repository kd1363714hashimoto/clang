#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int date[20],i,target,w;
	w = 0;

	for (i = 0; i < 20; i++)
	{
		date[i] = i+1;
	}
	for (i = 0; i < 20; i++)
	{

		target = rand() % 20;

		w = date[i];

		date[i] = date[target];

		date[target] = w;
	}
	for (i = 0; i < 20; i++)
	{
		printf("%d\n", date[i]);
	}
	
}