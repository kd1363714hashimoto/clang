#include<stdio.h>
main()
{

	char c;

	printf("��������́F");
	scanf("%c", &c);

	if (c <= c >= 'A' && c <= 'Z' && c >= 'a' && c <= 'z')
	{
		printf("�A���t�@�x�b�g�ł�");
	}
	else if (c >= '0' && c <= '9')
	{
		printf("�����ł�");
	}
	else
	{
		printf("���̑��̕����ł�");
	}
	
}