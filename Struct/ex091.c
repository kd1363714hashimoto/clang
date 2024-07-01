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

	printf("–¼‘O‚ð“ü—ÍF");
	scanf("%s", p->name);
	printf("¶”NŒŽ“ú‚ð‹æØ‚Á‚Ä“ü—ÍF");
	scanf("%d%d%d", &p->birth[0],  &p->birth[1] , &p->birth[2] );
	printf("ŒŒ‰tŒ^‚ð“ü—ÍF");
	scanf("%s", p->blood);
	printf("%s--%d ”N %d ŒŽ %d“ú¶ ŒŒ‰tŒ^--%sŒ^", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
}