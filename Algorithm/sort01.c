#include<stdio.h>
main()
{
	int data[] = { 15,48,65,28,19 };
	int i, j,w;

	for (i = 0; i < 5; i++)//��r��
	{
		for (j = 0; j < 5; j++)//��r��
		{
			if (data[i] < data[j])//����ւ�
			{
				w = data[i];
				data[i] = data[j];
				data[j] = w;
			}
		}
	}

	//���ʕ\��
	for (i = 0; i < 5; i++)
	{
		printf("%d ", data[i]);
	}
}