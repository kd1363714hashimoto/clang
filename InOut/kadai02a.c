#include<stdio.h>
main()
{
	double a, b;
	printf("2�̎����H");
	scanf("%lf %lf", &a, &b);
	printf("������%lf �� %lf �̎l�����Z������\n", a, b);
	printf("�a = %lf\n", a + b);
	printf("�� = %lf\n", a - b);
	printf("�� = %lf\n", a * b);
	printf("�� = %lf\n", a / b);
}