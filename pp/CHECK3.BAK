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
	fp=fopen("x:\\img.TXT","r");
	ptr=malloc(imagesize(0,0,40,40));
	fread(ptr,imagesize(0,0,40,40),1,fp);
	putimage(50,50,ptr,1);
	getch();
}