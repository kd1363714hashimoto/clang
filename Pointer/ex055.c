#include<stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 };
	float b[] = { 11.1, 22.2, 33.3, 44.4 };
	int* p_a=a;
	float* p_b = b;
	int i, a_sum;
	float b_sum;
	a_sum = 0;
	b_sum = 0;

	printf("sizeof:%d\n", (sizeof a / sizeof(int)));
	for (i = 0; i < (sizeof a /sizeof(int)); i++)
	{
		a_sum += *p_a;
		p_a++;
	}
	for (i = 0; i < 4; i++) {
		b_sum += *p_b;// 合計用変数に累計していく
		p_b++;
	}
	printf("配列a 合計 = %d\t平均 = %.3f\n", a_sum, (float)a_sum / 6);
	printf("配列b 合計 = %.3f\t平均 = %.3f", b_sum, b_sum / 4);


}