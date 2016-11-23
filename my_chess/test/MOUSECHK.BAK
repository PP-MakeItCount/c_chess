#include<stdio.h>
#include<conio.h>
#include<mouse1.h>
#include<graphics.h>

void main()
{
	int a=0,x,y,x1,y1;
	clrscr();
	initgraph(&a,&a,"x:\\bgi");
	initializemouse();
	//showmouse();
	while(!kbhit())
	{
		showmouse();
		a=buttonstatus();
		if(a)
		{
			if(pressrel_info())
			{
				line(X_press,Y_press,X_rel,Y_rel);
			}
		}
	}
}
