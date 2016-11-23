#include<stdio.h>
#include<alloc.h>
#include<graphics.h>
#include<conio.h>

void pawn()
{
	int arr1[8]={32,122,22,142,42,142,32,122};
	circle(32,122,5);
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
void img()
{
	int y;
			setfillstyle(1,4);
			floodfill(30,118,14);
			floodfill(32,130,14);
			floodfill(23,158,14);
			floodfill(27,162,14);
			floodfill(40,185,14);
			floodfill(32,204,14);
			floodfill(32,218,14);
			floodfill(32,230,14);
			floodfill(25,264,14);
			floodfill(32,275,14);
			floodfill(32,320,14);
			floodfill(32,309,14);
			floodfill(32,366,14);
			floodfill(32,348,14);
			floodfill(32,350,14);
			setfillstyle(1,3);
		     /*	for(y=106;y<375;y+=45)
			{
				floodfill(11,y,14);
			}

		       /*	getimage(22,157,42,187,ptr);
		       /*	putimage(448,67,ptr,0);
			getimage(22,202,42,232,ptr);
			putimage(358,67,ptr,0);
			getimage(22,247,42,277,ptr);
			putimage(177,67,ptr,0);
			getimage(22,292,42,322,ptr);
			putimage(267,67,ptr,0);
			int arr1[8]={32,122,22,142,42,142,32,122};
	circle(32,122,5);
			getimage(22,117,42,142,ptr);
			for(x=136;x<480;x+=90)
			{
				putimage(x,115,ptr,0);
			}
			getimage(22,337,42,367,ptr);   king
			*/
}
void main()
{
	FILE *fp;
	void *ptr;
	int a=0,y1;
	initgraph(&a,&a,"x:\\bgi");
	setcolor(14);
       //	fp=fopen("x:\\pieces\\bishp_R.TXT","w");
	fp=fopen("x:\\pieces\\knigt_R.TXT","w");
	ptr=malloc(imagesize(0,0,20,30));
	rectangle(10,105,55,375);
       for(y1=150;y1<375;y1+=45)
	  line(10,y1,55,y1);
	  pawn();
	  rook();
	  bishop();
	  knight();
	  queen();
	  king();
	  img();
	  getimage(22,247,42,277,ptr);
	// getimage(22,202,42,232,ptr);
		   fwrite(ptr,imagesize(0,0,20,30),1,fp);
	getch();
}