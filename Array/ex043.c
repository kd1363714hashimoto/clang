#include<stdio.h>
main()
{

	char data[] = "orange";
	int i,cnt;

	for (i = 0; data[i] != '\0'; i++);
	
	printf("�������\��\n%s\n",&data[0]);
	printf("��������%d�����ł�", i);
}