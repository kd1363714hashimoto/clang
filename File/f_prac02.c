#include<stdio.h>
main()
{
	int score = 0,maxscore;
	char ch, name[20],maxname[20];
	FILE* fp;

	fp = fopen("score01.txt", "r");
	fscanf(fp, "%s%d", maxname,&maxscore);
	fclose(fp);

	printf("�n�C�X�R�A���O:%s �X�R�A:%d\n", maxname, maxscore);

	printf("�v���C���[�̖��O:");
	scanf("%s", name);
	while (1)
	{
		printf("���݂̃X�R�A:%d ('e'�ŏI��)\n", score);
		ch = getch();
		if (ch == 'e')
		{
			break;
		}
		score++;
	};
	if (score >= maxscore)
	{
		printf("�n�C�X�R�A�X�V");
		fp = fopen("score01.txt", "w");
		fprintf(fp, "%s\n%d\n", name, score);
		fclose(fp);
	}
}