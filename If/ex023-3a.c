#include<stdio.h>
main()
{
	int n1, n2, flg;

	printf("���Z�q����́F");
	scanf("%d",&flg);

	printf("��̐�������́F");
	scanf("%d%d",&n1, &n2);

	if (flg == 1)
	{
		printf("%d\n", n1 + n2);
	}
	else if (flg == 2)
	{
		printf("%d\n", n1 - n2);
	}
	else if (flg == 3)
	{
		printf("%d\n", n1 * n2);
	}
	else
	{
		printf("%d\n", n1 / n2);
	}
	
}