#include<stdio.h>
main()
{

	int s, n;
    s = 0;
	while (n != -999)
	{
		s += n;
		printf("数を入れて");
		scanf("%d",&n);
	}
	printf("合計＝%d", s);
}