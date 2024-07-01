#include<stdio.h>
struct syohin_data
{
	char name[20];
	int tanka;
};


void display3(char c[20], int n);

main()
{
	int a = 10;
	struct syohin_data syohin = { "ƒPƒVƒSƒ€",50 };
	struct syohin_data* p;
	p = &syohin;
	display3(p->name,p->tanka);
}

void display3(char c[20], int n)
{
	printf("%s  %d", c, n);
}