#include<stdio.h>
#include<conio.h>
#include<graphics.h>
init()
{
	int a=0;
	initgraph(&a,&a,"x:\\bgi");
}
void border1()
{
	rectangle(118,58,482,422);
	rectangle(115,55,485,425);
	rectangle(110,50,490,430);
	setfillstyle(1,6);
	floodfill(111,51,15);
}

void border()
{
	char z[2]={201,NULL};
	int i;

	outtextxy(115,55,z);
	z[0]=187;
	outtextxy(475,55,z);
	z[0]=200;
	outtextxy(115,425,z);
	z[0]=188;
	outtextxy(475,425,z);

	z[0]=205;
	for(i=122;i<=472;i+=7)
	{
		outtextxy(i,55,z);
		outtextxy(i,425,z);
	}

	z[0]=186;
	for(i=62;i<423;i+=7)
	{
		outtextxy(115,i,z);
		outtextxy(475,i,z);
	}
	getch();
}
void main()
{
	init();
	border();
	getch();
	cleardevice();
	border1();
	getch();
	cleardevice();
	border();
}