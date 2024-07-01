#include<stdio.h>
main()
{
	int a, s, m, h;

	printf("•b”‚ð“ü—ÍF");
	scanf("%d", &s);

if (s >= 0)
{
	if (s < 5000) 
	{
		h = s / 3600;
		s = s % 3600;
		m = s / 60;
		s = s % 60;
		printf("%dŽžŠÔ%d•ª%d•b", h, m, s);
	}
	else
	{
		printf("error");
	}
}

else
{
	printf("error");
}

}