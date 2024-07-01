#include<stdio.h>
main()
{
	int score = 0,maxscore;
	char ch, name[20],maxname[20];
	FILE* fp;

	fp = fopen("score01.txt", "r");
	fscanf(fp, "%s%d", maxname,&maxscore);
	fclose(fp);

	printf("ハイスコア名前:%s スコア:%d\n", maxname, maxscore);

	printf("プレイヤーの名前:");
	scanf("%s", name);
	while (1)
	{
		printf("現在のスコア:%d ('e'で終了)\n", score);
		ch = getch();
		if (ch == 'e')
		{
			break;
		}
		score++;
	};
	if (score >= maxscore)
	{
		printf("ハイスコア更新");
		fp = fopen("score01.txt", "w");
		fprintf(fp, "%s\n%d\n", name, score);
		fclose(fp);
	}
}