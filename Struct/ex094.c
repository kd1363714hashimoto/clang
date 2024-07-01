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
		printf("%dl–Ú ",i);
		printf("–¼‘O‚ð“ü—ÍF");
		scanf("%s", p->name);
		printf("¶”NŒŽ“ú‚ð‹æØ‚Á‚Ä“ü—ÍF");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("ŒŒ‰tŒ^‚ð“ü—ÍF");
		scanf("%s", p->blood);
		p++;
	}

	p = pdat;

	for (j = 0; j < 5; j++)
	{
		if(strcmp (p->blood , "A")==0 || strcmp(p->blood, "a") == 0)
		{
			printf("%s--%d ”N %d ŒŽ %d“ú¶ ŒŒ‰tŒ^--%sŒ^\n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
		p++;
	}
}