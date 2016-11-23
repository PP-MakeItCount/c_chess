#include<graphics.h>
#include<conio.h>
#include<stdio.h>

void main()
 {
	int gd,gm;
	gd=DETECT;
	gm=DETECT;
	clrscr();
	initgraph(&gm,&gd,"c:\\tc\\bgi");
	outtext("WE ARE IN GRAPHICS>> I DONE IT");
	getch();

 }