#include<stdio.h>
main()
{
	int data[] = { 15,48,65,28,19 };
	int i, j, w;

	for (i = 1; i < 5; i++)
	{
		for (j = i - 1; j >= 0; j--)
		{
			if (data[j+1] > data[j])
			{
				break;
			}
			w = data[j];
			data[j] = data[j + 1];
			data[j + 1] = w;
		}
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d ", data[i]);
	}
}