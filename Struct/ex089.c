#include<stdio.h>

struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	int i;
	struct profile pdat;
	printf("���O����́F");
	scanf("%s", &pdat.name[0]);
	printf("���N��������؂��ē��́F");
	scanf("%d%d%d", &pdat.birth[0], &pdat.birth[1], &pdat.birth[2]);
	printf("���t�^����́F");
	scanf("%s", &pdat.blood);
	printf("%s--%d �N %d �� %d���� ���t�^--%s�^", pdat.name, pdat.birth[0], pdat.birth[1], pdat.birth[2], pdat.blood);
}