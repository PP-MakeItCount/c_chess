		 #include<stdio.h>
		 #include<conio.h>
		 #include<graphics.h>
void main()
 {
	int gm,gd;
	clrscr();
	puts("\n\nIN Text mode");
	gm=DETECT;
	gd=DETECT;
	initgraph(&gm,&gd,"x:\\bgi");
	outtext("IN GRAPHICS MODE");
	rectangle(20,80,40,180);
	circle(320,240,200);
	line(34,45,67,78);

	getch();
 }