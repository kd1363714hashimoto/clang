#include<stdio.h>
main()
{
	char c[31];
	int i;

	printf("文字列は？");
	scanf("%s", &c[0]);

	for (i = 0; c[i] != '\0'; i++);

	printf("文字列：%s\n", c);
	printf("文字数=%d", i);
}