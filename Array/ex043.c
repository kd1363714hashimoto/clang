#include<stdio.h>
main()
{

	char data[] = "orange";
	int i,cnt;

	for (i = 0; data[i] != '\0'; i++);
	
	printf("文字列を表示\n%s\n",&data[0]);
	printf("文字数は%d文字です", i);
}