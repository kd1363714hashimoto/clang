#include<stdio.h>
main()
{
	char a;
	int su1,su2,su3,s;

	printf("���������");
	scanf("%c", &a);

	printf("���������");
	scanf("%d %d %d", &su1,&su2,&su3);

	s = su1 + su2 + su3;
	switch (a)
	{
		
	case 'd':
	case 'D':
		if (su1>su2)
		{
			printf("�ő�l��%d�ł�", su1);
		}
		else if (su2>su3)
		{
			printf("�ő�l��%d�ł�", su2);
		}
		else
		{
			printf("�ő�l��%d�ł�", su3);
		}
		break;
	case 's':
	case 'S':
	{
		if (su1 > su2)
		{
			printf("�ŏ��l��%d�ł�", su2);
		}
		else if (su1 > su3)
		{
			printf("�ŏ��l��%d�ł�", su3);
		}
		else
		{
			printf("�ŏ��l��%d�ł�", su1);
		}
		break;
	}
	case 'g':
	case 'G':
	{
		printf("���v��%d�ł�", s);
		break;
	}
	case 'h':
	case 'H':
	{
		printf("���ς�%.2f�ł�", s / 3.0);
		break;
	}
	default:
		printf("error");
		break;
	}
}