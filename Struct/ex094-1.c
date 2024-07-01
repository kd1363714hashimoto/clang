#include<stdio.h>
#include<string.h>
struct day
{
	int nen;
	int tuki;
	int hi;
};

struct plofile
{
	char name[20];
	struct day birth;
	char blood[5];
};

main()
{
	int i;
	struct plofile pdat[5] ={
	 {"a",{2000,1,1},	"A"},
	 {"b",{2000,2,1},	"A"},
	 {"c",{2000,3,1}  ,"A"},
	 {"d",{2000,11,1} ,"A"},
	 {"e",{2000,2,1},	"A"}
	};
	struct plofile* p;
	p = pdat;

	for (i = 0; i < 5; i++)
	{
		if (p->birth.tuki==2)
		{
			printf("%s--%d ”N %d ŒŽ %d“ú¶ ŒŒ‰tŒ^--%sŒ^\n", p->name, p->birth.nen,p->birth.tuki,p->birth.hi, p->blood);
		}
		p++;
	}
}