#include<stdio.h>
main()
{
	char moji1[31], moji2[31], w[31];
	int i;

	printf("文字列1を入力：");
	scanf("%s", &moji1[0]);
	printf("文字列2を入力：");
	scanf("%s", &moji2[0]);

	printf("moji1=%s ", &moji1[0]);
	printf("moji2=%s\n ", &moji2[0]);

	for (i = 0; moji1[i] != '\0'; i++)
	{
		w[i] = moji1[i];
		moji1[i] = moji2[i];
	}
	printf("moji1=%s ", &moji1[0]);
	printf("moji2=%s ", &w[0]);

}