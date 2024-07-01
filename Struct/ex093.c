#include<stdio.h>
struct syohin_data
{
	char name[20];
	int tanka;
	int kosuu;
};

main()
{
	int i,kingaku;
	struct syohin_data syohin[3] =
	{ {"エンピツ",30,5},
	  {"ケシゴム",50,2},
	  {"フデバコ",500,3} };
	struct syohin_data* p;
	p = syohin;

	for (i = 0; i < 3; i++)
	{
		printf("商品名：%s\t", p->name);
		printf("単　価：%4d\t", p->tanka);
		printf("個　数：%4d\t", p->kosuu);
		kingaku = syohin->tanka * syohin->kosuu;
		printf("金　額：\\%d\n", kingaku);
		p++;
	}
}