#include<stdio.h>
main()
{

	int s, n;
    s = 0;
	while (n != -999)
	{
		s += n;
		printf("��������");
		scanf("%d",&n);
	}
	printf("���v��%d", s);
}