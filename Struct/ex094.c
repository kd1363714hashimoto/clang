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
		printf("%d�l�� ",i);
		printf("���O����́F");
		scanf("%s", p->name);
		printf("���N��������؂��ē��́F");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("���t�^����́F");
		scanf("%s", p->blood);
		p++;
	}

	p = pdat;

	for (j = 0; j < 5; j++)
	{
		if(strcmp (p->blood , "A")==0 || strcmp(p->blood, "a") == 0)
		{
			printf("%s--%d �N %d �� %d���� ���t�^--%s�^\n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
		p++;
	}
}