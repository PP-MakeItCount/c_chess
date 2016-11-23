#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void init()
{
	int gd=0,gm=0;
	initgraph(&gd,&gm,"x:\\bgi");
}
void board()
{

	int x1=120,y1=60,x2=480,y2=420,i,yy,xx,xx2,j;
	rectangle(x1,y1,x2,y2);
	yy=y1; xx=x1;xx2=x2;

	for(i=0;i<8;i++)
	{

		x1+=45; yy=yy+45;
		line(x1,y1,x1,y2) ;
		line(xx,yy,xx2,yy) ;
	}

	y1=65;
     //	printf("chess board");
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
       // piecebord
       rectangle(10,105,55,375);
       for(y1=150;y1<375;y1+=45)
	  line(10,y1,55,y1);

}
void p_img()
{

	int i,j,x=137,y=115;
	void *ptr;
	unsigned int size;
	size = imagesize(0,0,40,30);
	ptr = malloc(size);
	// get pawn
	getimage(15,16,25,40,ptr);
	for(j=0;j<8;j++)
	{
	 putimage(x,y,ptr,0);
	 x+=45;
	}
	x=137;y=340;
	getimage(35,16,45,40,ptr);
	for(j=0;j<8;j++)
	{
	 putimage(x,y,ptr,0);
	 x+=45;
	}

	//get rook
	getimage(70,10,90,40,ptr);
	putimage(132,67,ptr,0);
	putimage(448,67,ptr,0);

	getimage(100,10,120,40,ptr);
	putimage(132,383,ptr,0);
	putimage(448,383,ptr,0);

	//get bishop
	getimage(130,10,150,40,ptr);
	putimage(222,67,ptr,0);
	putimage(358,67,ptr,0);

	getimage(160,10,180,40,ptr);
	putimage(222,383,ptr,0);
	putimage(358,383,ptr,0);
}
void pawn()
{

       int arr1[8]={20,20,15,40,25,40,20,20};
       int arr2[8]={40,20,35,40,45,40,40,20};
       setfillstyle(1,4);
	pieslice(20,20,0,360,3);
	fillpoly(4,arr1);
       setfillstyle(1,10);
	pieslice(40,20,0,360,3);
	fillpoly(4,arr2);

}

void rook()
{       //rook_red
	setfillstyle(1,4);
	rectangle(70,10,90,14);
	floodfill(71,11,14);
	rectangle(70,36,90,40);
	floodfill(71,39,14);
	rectangle(74,14,86,36);
	floodfill(75,15,14);
	//rook_green
	setfillstyle(1,10);
	rectangle(100,10,120,14);
	floodfill(101,11,14);
	rectangle(100,36,120,40);
	floodfill(101,39,14);
	rectangle(104,14,116,36);
	floodfill(105,15,14);
}
void bishop()
{
	setfillstyle(1,4);
	pieslice(140,12,0,360,2);
	ellipse(140,28,0,180,7,14);
	line(133,28,147,28);
	floodfill(140,27,14);
	arc(140,40,0,180,10);
	line(130,40,150,40);
	floodfill(140,38,14);

	setfillstyle(1,10);
	pieslice(170,12,0,360,2);

	ellipse(170,28,0,180,7,14);
	line(163,28,177,28);
	floodfill(170,27,14);
	arc(170,40,0,180,10);
	line(160,40,180,40);
	floodfill(170,38,14);

}
void queen()
{


	arc(170,40,0,180,10);
	line(160,40,180,40);
	floodfill(170,38,14);
}

void main()
{

	init();
	setcolor(14);
	pawn();
	rook();
	bishop();
	setfillstyle(1,3);
	board();

	p_img();
	getch();
	exit(0);
}