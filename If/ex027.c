#include<stdio.h>
main()
{

	char c;

	printf("��������́F");
	scanf("%c", &c);

	if (c >= 'A' && c <= 'Z')
	{
		printf("�ϊ������%c", c + 0x20);
	}
	else if (c >= 'a' && c <= 'z')
	{
		printf("�ϊ������%c", c - 0x20);
	}
	else
	{
		printf("�A���t�@�x�b�g����͂��Ă��������B");
	}
}