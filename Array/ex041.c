#include<stdio.h>
main()
{
	float s, box[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("��������́F");
		scanf("%f", &box[i]);
		s += box[i];

	}
	printf("���v%.2f�ł�\n���ς�%.2f�ł�\n",s,s/3.0);

}