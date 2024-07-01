#include<stdio.h>
main()
{
	int i, s, date[11] = { 10,5,30,77,16,3,47,29,37,33 };

	printf("’Tõ’l‚“‚ğ“ü—Í");
	scanf("%d", &s);

	date[10] = s;

	for (i = 0; date[i] != s; i++);

	if (i == 10)
	{
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½");
	}
	else
	{
		printf("date[%d]‚É‚ ‚Á‚½", i);
	}
}