#include<stdio.h>
main()
{
	float s, box[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("実数を入力：");
		scanf("%f", &box[i]);
		s += box[i];

	}
	printf("合計%.2fです\n平均は%.2fです\n",s,s/3.0);

}