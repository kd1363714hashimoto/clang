#include<stdio.h>
main()
{
	int high, low, mid, i, s, d[11] = { 10,15,18,23,28,35,47,55,68,78,96 };
	low = 0;
	high = 10;

	printf("探索値を入力");
	scanf("%d", &s);

	for (i = 0; low<=high; i++)
	{
		mid = (low + high)/2;

		if (d[mid] == s)
		{
			break;
		}
		else if(d[mid] < s)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	if (low<high)
	{
		printf("見つからなかった");
	}
	else
	{
		printf("d[%d]にあった", mid);
	}

}