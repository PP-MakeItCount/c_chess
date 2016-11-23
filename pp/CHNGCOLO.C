#include<conio.h>
#include<stdio.h>
#include<graphics.h>

void main()
 {
	int i=0,gd=0,gm=0;
	char ch;
	clrscr();
	initgraph(&gd,&gm,"x:\\bgi");
	circle(320,240,5);
	while(ch!='x')
	{
		if(kbhit())
		{
			i=i++;
			setbkcolor(i);
		}
		getch();
	}
     //	closegraph();
 }