#include<stdio.h>
main()
{
	char data[] = "Apple";
	int i;
	

	printf("1�������\��\n");

	for (i = 0; data[i] != '\0'; i++)
	{
		printf("%c", data[i]);
	}
	printf("\n�������\��\n");
	printf("%s\n", &data[0]);
}