#include<stdio.h>
main()
{
	char c[31];
	int i;

	printf("������́H");
	scanf("%s", &c[0]);

	for (i = 0; c[i] != '\0'; i++);

	printf("������F%s\n", c);
	printf("������=%d", i);
}