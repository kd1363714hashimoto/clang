#include<stdio.h>
main()
{
	int a;
	while (a != -1)
	{
		printf("文字コード(-1 で入力終了)？");
		scanf("%d", &a);
		printf("%c\n", a);
	}
}