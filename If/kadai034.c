#include<stdio.h>
main()
{
	char a;
	printf("�A���t�@�x�b�g�H");
	scanf("%c", &a);
	if (a >= 'a' && a <= 'z')
	{
		printf("�������ł��B");
	}
	else if (a >= 'A' && a <= 'Z')
	{
		printf("�啶���ł��B");
	}
	else
	{
		printf("ERROR");
	}
}