#include<stdio.h>
#define SX 1
#define SY 1

#define GX 8
#define GY 1

int map[7][10] =
{
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,1,0,0,1},
	{1,0,1,0,1,0,0,0,1,1},
	{1,0,0,1,0,0,0,1,0,1},
	{1,1,0,1,0,1,0,1,0,1},
	{1,0,0,0,0,1,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1}
};

#define STACKSIZE 46
int stack[STACKSIZE];
int sp = 0;

void DrawMaze(void)
{
	int i, j;

	for (i = 0; i < 7; i++)
	{
		for(j=0;j<10;j++)
	}
}