#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<mouse.h>
void main()
{
	int gd=0,gm=0,i,x=40,y=200;
	clrscr();
	initgraph(&gd,&gm,"x:\\bgi");
	showmouse();
	restrictmouse(10,10,20,20);
	while(!kbhit())
	{
	x=getxpos();
	y=getypos();
	clrscr();
	printf("\n\nposition(%d,%d)",x,y);
	delay(100);
	}
	getch();
}