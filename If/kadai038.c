#include<stdio.h>
main()
{
	char a;
	printf("1文字入力？");
	scanf("%c", &a);
	if (a >= 'a' && a <= 'z')
	{
		a = a - 0x20;
	}
	else if (a >= 'A' && a <= 'Z')
	{
		a = a + 0x20;
	}
	printf("変換結果は %c", a);
}