#include<stdio.h>
main()
{
	int a;
	while (a != -999)
	{
		printf("����(-999�œ��͏I��)�H");
		scanf("%d", &a);
		printf("8�i�� = %o\t16�i�� = %x\n", a, a);
	}
}