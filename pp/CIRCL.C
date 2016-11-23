		 #include<stdio.h>
		 #include<conio.h>
		 #include<graphics.h>
void main()
 {
	int gm,gd,x=0,y=240,i,r=1,z=10;
	clrscr();
	gm=DETECT;
	gd=DETECT;
	initgraph(&gm,&gd,"x:\\bgi");
	for(i=0;i<160;i++,x=x+2)
	{
		setfillstyle(5,7);
		circle(x,y,10);
		delay(30);
		cleardevice();

	}
	for(i=0;i<10;i++,z--)
	{
		cleardevice();
		circle(320,240,z);
		delay(50);

	}
	for(i=0;i<200;i++,r++)
	{
		cleardevice();
		circle(320,240,r);
		delay(50);

	}


	getch();
	closegraph();

 }