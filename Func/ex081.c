#include<stdio.h>
int get_max(int* array, int size);
int get_min(int* array, int size);

main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	int max, min;
	max=get_max(data, 8);
	printf("Å‘å’l= %d", max);
	min=get_min(data, 8);
	printf("Å¬’l= %d", min);
}

int get_max(int* array, int size)
{
	int i,max;
	max = *array;
	for (i = 1; i < size; i++)
	{
		if (max < *(array + i))
		{
			max = *(array + i);
		}
	}
	return max;
}

int get_min(int* array, int size)
{
	int i, min;
	min = *array;
	for (i = 1; i < size; i++)
	{
		if (min > *(array + i))
		{
			min = *(array + i);
		}
	}
	return min;
}