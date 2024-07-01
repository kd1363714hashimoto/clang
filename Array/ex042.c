#include<stdio.h>
main()
{
	char data[] = "Apple";
	int i;
	

	printf("1•¶Žš‚¸‚Â•\Ž¦\n");

	for (i = 0; data[i] != '\0'; i++)
	{
		printf("%c", data[i]);
	}
	printf("\n•¶Žš—ñ‚ð•\Ž¦\n");
	printf("%s\n", &data[0]);
}