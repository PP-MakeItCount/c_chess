#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void init()
{
	int gd=0,gm=0;
	initgraph(&gd,&gm,"x:\\bgi");
}
void board()
{
	int x1=120,y1=60,x2=480,y2=420,i,yy,xx,xx2,j,asc=65;
	rectangle(x1,y1,x2,y2);
	yy=y1; xx=x1;xx2=x2;
	for(i=0;i<8;i++)
	{

		x1+=45; yy=yy+45;
		line(x1,y1,x1,y2) ;
		line(xx,yy,xx2,yy) ;
	}

	y1=65;
	printf("chess board");
	for(j=0;j<4;j++)
	{
	 x1=125;
	 for(i=0;i<4;i++)
	 {
	   floodfill(x1,y1,4);
	   x1+=90;
	 }
	 y1+=90;
	}



	     y1=115;
	for(j=0;j<4;j++)
	{
	 x1=175;
	 for(i=0;i<4;i++)
	 {
	   floodfill(x1,y1,4);
	   x1+=90;
	 }
	 y1+=90;
	}

}
void main()
{
	init();
	setcolor(4);
	board();
	getch();
}