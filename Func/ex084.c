#include<stdio.h>
void str_Revers(char* p_1,char *p_2);

main()
{
	char str1[99],str2[99];

	printf("•¶Žš—ñHF");
	gets(str1);
	str_Revers(str1,str2);
	printf("str1: %s\nstr2: %s", str1,str2);
}

void str_Revers(char* p_1,char *p_2)
{
	int i, j;
	for (i = 0; *(p_1 + i) != '\0'; i++);
		for (i--, j = 0; i >= 0; i--, j++)
		{
			*(p_2 + j) = *(p_1 + i);
		}
		*(p_2 + j) = '\0';
}
