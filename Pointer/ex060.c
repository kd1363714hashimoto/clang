#include<stdio.h>
main()
{
	char data[] = "Language";
	char* p_data,c;
	int i,flg;


	printf("data[] = %s", &data[0]);
	printf("ŒŸõ•¶š‚ÍH");
	scanf("%c", &c);

	p_data = data;

	printf("ŒŸõŒ‹‰Ê‚Í,");
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
		printf("•¶š–Ú‚Å‚·");
	}
	else
	{
		printf("Œ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½");
	}
}