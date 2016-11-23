		 #include<stdio.h>
		 #include<conio.h>
		 #include<graphics.h>
		 void get_d();

		 int x=320,y=240,i,r=1,z=10;
			char ch;
void main()
 {
	int gm,gd;
	clrscr();
	gm=DETECT;
	gd=DETECT;
	initgraph(&gm,&gd,"x:\\bgi");

    //	while(1)
      //	{
	       if(kbhit())
		get_d();
	//}
	getch();
 }
void get_d()
{
	char q;
	ch=getch();
	switch(ch)
	{
		case 'q': exit(0);break;

		case 'd': for(i=0;i<30;i++,x=x+2)
			  {
				setfillstyle(5,7);
				circle(x,y,10);
				delay(50);
				cleardevice();
			  }
		case 'a': for(i=0;i<30;i++,x=x-2)
			  {
				setfillstyle(5,7);
				circle(x,y,10);
				delay(50);
				cleardevice();
			  }

		case 'w': for(i=0;i<30;i++,y=y+2)
			  {
				setfillstyle(5,7);
				circle(x,y,10);
				delay(50);
				cleardevice();
			  }

		case 's': for(i=0;i<30;i++,x=x-2)
			  {
				setfillstyle(5,7);
				circle(x,y,10);
				delay(50);
				cleardevice();
			  }

	}
}
