#include<stdio.h>
main()
{
	char c[31];
	int i;

	printf("•¶š—ñ‚ÍH");
	scanf("%s", &c[0]);

	for (i = 0; c[i] != '\0'; i++);

	printf("•¶š—ñF%s\n", c);
	printf("•¶š”=%d", i);
}