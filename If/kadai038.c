#include<stdio.h>
main()
{
	char a;
	printf("1�������́H");
	scanf("%c", &a);
	if (a >= 'a' && a <= 'z')
	{
		a = a - 0x20;
	}
	else if (a >= 'A' && a <= 'Z')
	{
		a = a + 0x20;
	}
	printf("�ϊ����ʂ� %c", a);
}