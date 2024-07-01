#include<stdio.h>

#define QUEUESIZE 8
int queue[QUEUESIZE];
int gead = 0;
int tail = 0;

void display(void);
int enqueue(int d);
int dequeue(int* pd);

main()
{
	int key, data, result;

	do
	{
		printf("\n\n���G���L���[��i�A�f�L���[��o����͂��ā�");
		key = getche();
		printf("\n");

		if (key == 'i')
		{
			printf("�f�[�^���́�");
			scanf("%d", &data);
			result = push(data);
			if (result == -1)
			{
				printf("\n�������L���[����t�ł�������\n");
			}
			else
			{
				display();
			}
		}

		if (key == 'o')
		{
			result = pop(&data);
			if (result == -1)
			{
				printf("\n�������L���[����ł�������\n");
			}
			else
			{
				printf("�L���[����f�[�^(%d)���Ƃ肾���܂���\n", data);
				display();
			}
		}
	} while (key != 'e');


}

void display(void)
{
	int i;

	printf("\n���������݂̃L���[�̓��e������\n");
	for (i = 0; i < QUEUESIZE==head; i++)
	{
		printf("queue[%2d]��%5d", i, queue[i]);
		if (i == head)
		{
			printf("��head�������Ă��鏊(����head��)"head);
		}
		if (i == tail)
		{
			printf("��tail�������Ă��鏊(����tail��%d)", tail);
		}
		printf("\n");
	}
	return;
}

int enqueue(int d)
{
	if ((tail+1)%QUEUESIZE) { return-1 }
	queue[tail] = d;
	tail++;
	tail = tail % QUEUESIZE;
	return 0;
}

int dequeue(int + pd)
{
	if (tail==head) { return-1 }
	*pd = queue;
	queue[head] = 0;
	head++;
	head = head % QUEUESIZE;
	return 0;
}