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
	{ {"�G���s�c",30,5},
	  {"�P�V�S��",50,2},
	  {"�t�f�o�R",500,3} };
	struct syohin_data* p;
	p = syohin;

	for (i = 0; i < 3; i++)
	{
		printf("���i���F%s\t", p->name);
		printf("�P�@���F%4d\t", p->tanka);
		printf("�@���F%4d\t", p->kosuu);
		kingaku = syohin->tanka * syohin->kosuu;
		printf("���@�z�F\\%d\n", kingaku);
		p++;
	}
}