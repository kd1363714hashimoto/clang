#include<stdio.h>
struct plofile
{
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct plofile plof;
	struct plofile* p;
	p = &plof;

	printf("名前を入力：");
	scanf("%s", p->name);
	printf("生年月日を区切って入力：");
	scanf("%d%d%d", &p->birth[0],  &p->birth[1] , &p->birth[2] );
	printf("血液型を入力：");
	scanf("%s", p->blood);
	printf("%s--%d 年 %d 月 %d日生 血液型--%s型", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
}