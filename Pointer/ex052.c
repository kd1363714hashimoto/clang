#include<stdio.h>
main()
{
	int a, b, w;
	int* p_a = &a, * p_b = &b;

	a = 100;
	b = 200;

	printf("é¿çsëO:a=%d\tb=%d\t", a, b);
	w = *p_a;
	*p_a = *p_b;
	*p_b = w;
	printf("é¿çså„:a=%d\tb=%d\n", a, b);

}