		 #include<stdio.h>
		 #include<conio.h>
		 #include<graphics.h>
void main()
 {
	int gm,gd,c=1,i=5;
	int arr[12]={320,60,220,150,270,300,370,300,420,150,320,60};
	clrscr();
	puts("\n\nIN Text mode");
	gm=DETECT;
	gd=DETECT;
	initgraph(&gm,&gd,"x:\\bgi");
	outtext("IN GRAPHICS MODE");
	while(i>0)
	{
		setfillstyle(c,i);
		fillpoly(6,arr);
		c++;
		i--;
		getch();
	}

	getch();
	closegraph();
	getch();
 }