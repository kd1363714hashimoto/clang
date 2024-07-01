#include<stdio.h>
struct fruit
{
	char name[30];
	int price;
	int point;
	int number;
	int total;
};
main()
{
	int i;
	struct fruit fruit1, fruit2;
	strcpy(fruit1.name, "peach");
	fruit1.price = 300;
	fruit1.point = 5;
	fruit1.number = 3;
	fruit1.total;

	fruit1.total = fruit1.price * fruit1.number;

	printf("¤•i–¼F\t%s\n", fruit1.name);
	printf("‰¿ŠiF\t\t%d‰~\n", fruit1.price);
	printf("‚¨‘E‚ß“xF\t", fruit1.point);
	for (i = 0; i <= fruit1.point; i++)
	{
		printf("š");
	}
	printf("\n");
	printf("ŒÂ”F\t\t%dŒÂ\n",fruit1.number);
	printf("‹àŠzF\t\t\\%d-\n", fruit1.total);
}