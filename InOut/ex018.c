#include<stdio.h>
main()
{
	int a, b, c, goukei;
	printf("�������R����:");
	scanf("%d%d%d", &a, &b, &c);

	goukei = a + b + c;

	printf("���v= %d\n", goukei); //���v��\��
	printf("����= %.2f\n", (float)goukei / 3.0); //���ς�\��
}