#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<mouse.h>

unsigned int size;
void *ptr;
void init()
{
	int gd=0,gm=0;
	initgraph(&gd,&gm,"x:\\bgi");
}
void board()
{
	int x1=120,y1=60,x2=480,y2=420,i,yy,xx,xx2,j;
	yy=y1; xx=x1;xx2=x2;
	for(i=0;i<9;i++)
	{
		line(x1,y1,x1,y2) ;
		line(xx,yy,xx2,yy) ;
		x1+=45; yy=yy+45;
	}
	y1=65;
	for(j=0;j<4;j++)
	{
	 x1=125;
	 for(i=0;i<4;i++)
	 {
	   floodfill(x1,y1,14);
	   x1+=90;
	 }
	 y1+=90;
	}
	     y1=115;
	for(j=0;j<4;j++)
	{
	 x1=175;
	 for(i=0;i<4;i++)
	 {
	   floodfill(x1,y1,14);
	   x1+=90;
	 }
	 y1+=90;
	}
       rectangle(10,105,55,375);
       for(y1=150;y1<375;y1+=45)
	  line(10,y1,55,y1);
}
void p_img()
{
	int i,j,x=137,y=115,c[10]={9,104,9,376,56,376,56,104,9,104};
	size = imagesize(0,0,40,30);
	ptr = malloc(size);
       /*	get = malloc(size); */
	for(i=0;i<4;i++)
	{
		if(i==0)
		{
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

			getimage(22,157,42,187,ptr);
			putimage(448,67,ptr,0);
			getimage(22,202,42,232,ptr);
			putimage(358,67,ptr,0);
			getimage(22,247,42,277,ptr);
			putimage(177,67,ptr,0);
			getimage(22,292,42,322,ptr);
			putimage(267,67,ptr,0);
			getimage(26,115,38,140,ptr);
			//getimage(22,117,42,142,ptr);
			for(x=136;x<480;x+=90)
			{
				putimage(x,115,ptr,0);
			}
		}
		else if(i==1)
		{
			setfillstyle(1,3);
			for(y=106;y<375;y+=45)
			{
				floodfill(11,y,14);
			}
			getimage(22,157,42,187,ptr);
			putimage(132,67,ptr,0);
			getimage(22,202,42,232,ptr);
			putimage(222,67,ptr,0);
			getimage(22,247,42,277,ptr);
			putimage(402,67,ptr,0);
			getimage(22,337,42,367,ptr);
			putimage(312,67,ptr,0);
			getimage(26,115,38,140,ptr);
			//getimage(22,117,42,142,ptr);
			for(x=181;x<480;x+=90)
			{
				putimage(x,115,ptr,0);
			}
		}
		else if(i==2)
		{
			setfillstyle(1,10);
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

			getimage(22,157,42,187,ptr);
			putimage(448,382,ptr,0);
			getimage(22,202,42,232,ptr);
			putimage(358,382,ptr,0);
			getimage(22,247,42,277,ptr);
			putimage(177,382,ptr,0);
			getimage(22,292,42,322,ptr);
			putimage(267,382,ptr,0);
			getimage(26,115,38,140,ptr);
			//getimage(22,117,42,142,ptr);
			for(x=136;x<480;x+=90)
			{
				putimage(x,340,ptr,0);
			}
		}
		else if(i==3)
		{
			setfillstyle(1,0);
			for(y=106;y<375;y+=45)
			{
				floodfill(11,y,14);
			}
			getimage(22,157,42,187,ptr);
			putimage(132,382,ptr,0);
			getimage(22,202,42,232,ptr);
			putimage(222,382,ptr,0);
			getimage(22,247,42,277,ptr);
			putimage(402,382,ptr,0);
			getimage(22,337,42,367,ptr);
			putimage(312,382,ptr,0);
		      //	getimage(22,117,42,142,ptr);
			getimage(26,115,38,140,ptr);
			for(x=181;x<480;x+=90)
			{
				putimage(x,340,ptr,0);
			}
			setcolor(0);
			fillpoly(5,c);
		}
	}
}
void pawn()
{
/*int arr1[8]={32,122,22,142,42,142,32,122};
	circle(32,122,5);
	drawpoly(4,arr1);
		  getimage(22,117,42,142,ptr);*/
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

	init();
	setcolor(14);
	pawn();
	rook();
	bishop();
	knight();
	queen();
	king();
	setfillstyle(1,3);
	board();
	p_img();
	setcolor(14);
	getch();
}