#include<stdio.h>
#include<string.h>
struct plofile
{
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	int i,j;
	struct plofile pdat[5];
	struct plofile* p;
	p = pdat;
	for (i = 1; i <= 5; i++)
	{
		printf("%d人目 ",i);
		printf("名前を入力：");
		scanf("%s", p->name);
		printf("生年月日を区切って入力：");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("血液型を入力：");
		scanf("%s", p->blood);
		p++;
	}

	p = pdat;

	for (j = 0; j < 5; j++)
	{
		if(strcmp (p->blood , "A")==0 || strcmp(p->blood, "a") == 0)
		{
			printf("%s--%d 年 %d 月 %d日生 血液型--%s型\n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
		p++;
	}
}