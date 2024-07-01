#include<stdio.h>
main()
{
	int data[] = { 15,48,65,28,19 };
	int i, j,w;

	for (i = 0; i < 5; i++)//”äŠrŒ³
	{
		for (j = 0; j < 5; j++)//”äŠræ
		{
			if (data[i] < data[j])//“ü‚ê‘Ö‚¦
			{
				w = data[i];
				data[i] = data[j];
				data[j] = w;
			}
		}
	}

	//Œ‹‰Ê•\Ž¦
	for (i = 0; i < 5; i++)
	{
		printf("%d ", data[i]);
	}
}