#include<stdio.h>
main()
{
	int a, b;
	printf("�����́H");
	scanf("%d", &a);
	printf("�����́H");
	scanf("%d", &b);
	if (a < b)
	{
		printf("%d �̕��� %d ��� %d �傫��", b, a, b - a);
	}
	else if (a > b)
	{
		printf("%d �̕��� %d ��� %d ������", b, a, a - b);
	}
	else
	{
		printf("%d �� %d �͓�����", a, b);
	}
}