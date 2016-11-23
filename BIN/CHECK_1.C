#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int bcolor;

void red()
{
	setfillstyle(2,4);
	bcolor=4;
	circle(120,120,10);
	floodfill(121,121,15);
	outtextxy(20,20,"pramod");
}
void green()
{
	setfillstyle(3,10);
	bcolor=10;
	circle(20,20,10);
	floodfill(21,21,15);
	}
void main()
{
	int gd=0,gm=0;
	initgraph(&gd,&gm,"x:\\bgi");
	if(bcolor=4)
	{
	red();}
	else
	{
	green();
	}
	getch();
}