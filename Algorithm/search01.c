#include<stdio.h>
main()
{
	int s, i;
	int date[] = { 10,5,30,77,16,3,47,29,37,33 };

	for (i = 0; i < 10; i++)
	{
		if (date[i] == 47)
		{
			break;
		}
	}
	if (i >= 10)
	{
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½");
	}
	else
	{
		printf("date[%d]‚É‚ ‚Á‚½", i);
	}
}