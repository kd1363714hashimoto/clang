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
	printf("–¼‘O‚ğ“ü—ÍF");
	scanf("%s", &pdat.name[0]);
	printf("¶”NŒ“ú‚ğ‹æØ‚Á‚Ä“ü—ÍF");
	scanf("%d%d%d", &pdat.birth[0], &pdat.birth[1], &pdat.birth[2]);
	printf("ŒŒ‰tŒ^‚ğ“ü—ÍF");
	scanf("%s", &pdat.blood);
	printf("%s--%d ”N %d Œ %d“ú¶ ŒŒ‰tŒ^--%sŒ^", pdat.name, pdat.birth[0], pdat.birth[1], pdat.birth[2], pdat.blood);
}