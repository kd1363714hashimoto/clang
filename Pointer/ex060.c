#include<stdio.h>
main()
{
	char data[] = "Language";
	char* p_data,c;
	int i,flg;


	printf("data[] = %s", &data[0]);
	printf("検索文字は？");
	scanf("%c", &c);

	p_data = data;

	printf("検索結果は,");
	for (i = 0; *(p_data + i) != '\0'; i++)
	{
		if (*(p_data+i) == c)
		{
			printf("%d ", i+1);
			flg = 1;
		}
	}

	if (flg == 1)
	{
		printf("文字目です");
	}
	else
	{
		printf("見つかりませんでした");
	}
}