#include<stdio.h>
main()
{
	int a = 50, b = 10, c;
	int * p_a = &a, * p_b = &b;
	
	c = *p_a + *p_b;

	printf("%d + %d = %d\n", *p_a, *p_b, c);
	printf("&a=%p &b=%p &c=%p\n", &a, &b, &c);
	printf("p_a=%d p_b=%d\n", p_a, p_b);
}