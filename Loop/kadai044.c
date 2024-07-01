#include<stdio.h>
main()
{
	int a;
	while (a != -999)
	{
		printf("整数(-999で入力終了)？");
		scanf("%d", &a);
		printf("8進数 = %o\t16進数 = %x\n", a, a);
	}
}