#include<stdio.h>
#include<conio.h>
#include<graphics.h>
init()
{
	int a=0;
	initgraph(&a,&a,"x:\\bgi");
}
void border()
{
	rectangle(118,58,482,422);
	rectangle(115,55,485,425);
	rectangle(110,50,490,430);
	setfillstyle(1,6);
	floodfill(111,51,15);
}

void main()
{
	init();
	border();
	getch();
}