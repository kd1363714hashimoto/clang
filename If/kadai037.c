#include<stdio.h>
main()
{
	int a;
	printf("0 ���� 100 �܂ł̐����H");
	scanf("%d", &a);
	if (a >= 80 && a < 90)
	{
		printf("���̐��l�̔��茋�ʂ́u�S�v�ł��B");
	}
	else if (a >= 50 && a < 80)
	{
		printf("���̐��l�̔��茋�ʂ́u3�v�ł��B");
	}
	else if (a >= 30 && a < 50)
	{
		printf("���̐��l�̔��茋�ʂ́u2�v�ł��B");
	}
	else if (a>90)
	{
		printf("���̐��l�̔��茋�ʂ́u5�v�ł��B");
	}
	else
	{
		printf("���̐��l�̔��茋�ʂ́u1�v�ł��B");
	}
}