#include<stdio.h>
main()
{
	int a,sum,cnt;
	a = sum = cnt = 0;
	while (a != -999)
	{
		sum += a;
		cnt++;
		printf("����(-999�ŏI��)�H");
		scanf("%d", &a);
	}
	cnt--;
	printf("���v = %d\n", sum);
	printf("���� = %.2f\n", (float)sum / (float)cnt);
}