#include<stdio.h>
#include<alloc.h>
#include<graphics.h>
#include<conio.h>


void main()
{
	FILE *fp;
	void *ptr;
	int a=0;
	initgraph(&a,&a,"x:\\bgi");
	setcolor(14);
	fp=fopen("x:\\pieces\\king_R.TXT","r");
	ptr=malloc(imagesize(0,0,20,30));
	fread(ptr,imagesize(0,0,20,30),1,fp);
	putimage(320,240,ptr,0);
	getch();
}