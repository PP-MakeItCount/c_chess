#include<stdio.h>
#include<alloc.h>
#include<graphics.h>
#include<conio.h>

void pawn()
{
	int arr1[8]={32,118,27,138,37,138,32,118};
	circle(32,118,3);
	drawpoly(4,arr1);
}
void rook()
{
	rectangle(22,157,42,161);
	rectangle(22,183,42,187);
	rectangle(26,161,38,183);
}
void bishop()
{
	circle(32,204,2);
	ellipse(32,220,0,180,7,14);
	line(25,220,39,220);
	arc(32,232,0,180,10);
	line(22,232,42,232);
}
void knight()
{
	int k[14]={24,265,40,265,34,247,25,250,22,254,28,256,24,265};
	drawpoly(7,k);
	arc(32,277,0,180,10);
	line(22,277,42,277);
}
void queen()
{
	line(25,310,39,310);
	line(25,310,22,298);
	line(22,298,27,305);
	line(27,305,26,292);
	line(26,292,32,307);
	line(39,310,42,298);
	line(42,298,37,305);
	line(37,305,38,292);
	line(38,292,32,307);
	arc(32,322,0,180,10);
	line(22,322,42,322);
}
void king()
{
	arc(32,367,0,180,10);
	line(22,367,42,367);
	rectangle(24,349,40,355);
	arc(32,349,0,180,3);
	rectangle(31,337,33,346);
	rectangle(28,339,36,341);
}
void main()
{
	FILE *fp;
	void *ptr;
	int a=0;
	initgraph(&a,&a,"x:\\bgi");
	fp=fopen("x:\\img.TXT","w");
	ptr=malloc(imagesize(0,0,40,40));
	rectangle(10,105,55,375);
       for(y1=150;y1<375;y1+=45)
	  line(10,y1,55,y1);
	getimage(0,0,40,40,ptr);
	fwrite(ptr,imagesize(0,0,40,40),1,fp);
	getch();
}