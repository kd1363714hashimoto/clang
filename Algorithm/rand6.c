#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int n,i,te;

	printf("�����o���܂����H");
	scanf("%d", &te);

	srand(time(0));

	rand();

	n = rand() % 3 ;

	switch(te)
	{
	case 1:
		printf(�v���C���[�̓O�[�ł��B);
		break;
	case 2:
		printf(�v���C���[�̓p�[�ł��B);
		break;
	case 3:
		printf(�v���C���[�̓`���L�ł��B);
		break;
	default:
		break;
	}


	switch(n)
	{
	case 1:
		printf(�R���s���[�^�[�̓O�[�ł��B);
		break;
	case 2:
		printf(�R���s���[�^�[�̓p�[�ł��B);
		break;
	case 3:
		printf(�R���s���[�^�[�̓`���L�ł��B);
		break;
	default:
		break;
	}

	if (te == n)
	{
		printf("�v���C���[�̏����ł��B")
	}
	else if 
	

	printf("�����̂��Ȃ��̉^���́A");
	
	for (i = 1; i <= 100;i++)
	{
		
		printf("%d\n",n);
	}
	

}