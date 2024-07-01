#include<stdio.h>
main()
{
	int i;
	char d[99];

	printf("•¶Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%s",&d[0]);

	for (i = 0; d[i] != '\0'; i++)
	{
		d[i]= d[i] --;
	}
	printf("%s", &d[0]);
}