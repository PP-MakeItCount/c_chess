#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
 {
	int gd=0,gm=0,i,j=25;
	clrscr();
	initgraph(&gd,&gm,"x:\\bgi");

	for(i=5;i>0;i--,j=j-5)
	{
		setfillstyle(7,i);
		pieslice(320,240,0,360,j);
		getch();
	}

	closegraph();

 }