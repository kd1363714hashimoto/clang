#include<stdio.h>
main()
{
	char data[] = "Language";
	char* p_data,c;
	int i,flg;


	printf("data[] = %s", &data[0]);
	printf("���������́H");
	scanf("%c", &c);

	p_data = data;

	printf("�������ʂ�,");
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
		printf("�����ڂł�");
	}
	else
	{
		printf("������܂���ł���");
	}
}