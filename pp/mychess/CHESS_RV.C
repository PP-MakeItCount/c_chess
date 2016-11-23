#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<mouse1.h>
void *ptr;
void init()
{
	int gd=0,gm=0;
	initgraph(&gd,&gm,"x:\\bgi");
}
void board()
{
	int x1=120,y1=60,x2=480,y2=420,i,yy,xx,xx2,j;
	char a[2]={'a',NULL},b[2]={'8',NULL};
	yy=y1; xx=x1;xx2=x2;
	setcolor(14);
	setfillstyle(1,3);
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
	for(x1=138,y1=45,y2=430;x1<480;x1+=45)
	{
		outtextxy(x1,y1,a);
		outtextxy(x1,y2,a);
		a[0]++;
	}

	for(x1=110,x2=498,y1=78;y1<420;y1+=45)
	{
		outtextxy(x1,y1,b);
		outtextxy(x2,y1,b);
		b[0]--;
	}
}
void p_img()
{
	FILE *fp;
	int x;
	ptr = malloc(imagesize(0,0,20,30));

			fp=fopen("x:\\pieces\\ROOK_R.TXT","r");
			fread(ptr,imagesize(0,0,20,30),1,fp);
			putimage(448,67,ptr,0);
			fclose(fp);
			fp=fopen("x:\\pieces\\bishp_R.TXT","r");
			fread(ptr,imagesize(0,0,20,30),1,fp);
			putimage(358,67,ptr,0);
			fclose(fp);
			fp=fopen("x:\\pieces\\knigt_R.TXT","r");
			fread(ptr,imagesize(0,0,20,30),1,fp);
			putimage(177,67,ptr,0);
			fclose(fp);
			fp=fopen("x:\\pieces\\queen_R.TXT","r");
			fread(ptr,imagesize(0,0,20,30),1,fp);
			putimage(267,67,ptr,0);
			fclose(fp);
			fp=fopen("x:\\pieces\\pawn_R.TXT","r");
			fread(ptr,imagesize(0,0,20,30),1,fp);
			for(x=136;x<480;x+=90)
			{
				putimage(x,115,ptr,0);
			}
			fclose(fp);

			fp=fopen("x:\\pieces\\rook_RB.TXT","r");
			fread(ptr,imagesize(0,0,20,30),1,fp);
			putimage(132,67,ptr,0);
			fclose(fp);
			fp=fopen("x:\\pieces\\bishp_RB.TXT","r");
			fread(ptr,imagesize(0,0,20,30),1,fp);
			putimage(222,67,ptr,0);
			fclose(fp);
			fp=fopen("x:\\pieces\\knigt_RB.TXT","r");
			fread(ptr,imagesize(0,0,20,30),1,fp);
			putimage(402,67,ptr,0);
			fclose(fp);
			fp=fopen("x:\\pieces\\king_RB.TXT","r");
			fread(ptr,imagesize(0,0,20,30),1,fp);
			putimage(312,67,ptr,0);
			fclose(fp);
			fp=fopen("x:\\pieces\\pawn_RB.TXT","r");
			fread(ptr,imagesize(0,0,20,30),1,fp);
			for(x=181;x<480;x+=90)
			{
				putimage(x,115,ptr,0);
			}
			fclose(fp);

			fp=fopen("x:\\pieces\\rook_GB.TXT","r");
			fread(ptr,imagesize(0,0,20,30),1,fp);
			putimage(448,382,ptr,0);
			fclose(fp);
			fp=fopen("x:\\pieces\\bishp_GB.TXT","r");
			fread(ptr,imagesize(0,0,20,30),1,fp);
			putimage(358,382,ptr,0);
			fclose(fp);
			fp=fopen("x:\\pieces\\knigt_GB.TXT","r");
			fread(ptr,imagesize(0,0,20,30),1,fp);
			putimage(177,382,ptr,0);
			fclose(fp);
			fp=fopen("x:\\pieces\\king_GB.TXT","r");
			fread(ptr,imagesize(0,0,20,30),1,fp);
			putimage(267,382,ptr,0);
			fclose(fp);
			fp=fopen("x:\\pieces\\pawn_GB.TXT","r");
			fread(ptr,imagesize(0,0,20,30),1,fp);
			for(x=136;x<480;x+=90)
			{
				putimage(x,340,ptr,0);
			}
			fclose(fp);

			fp=fopen("x:\\pieces\\rook_G.TXT","r");
			fread(ptr,imagesize(0,0,20,30),1,fp);
			putimage(132,382,ptr,0);
			fclose(fp);
			fp=fopen("x:\\pieces\\bishp_G.TXT","r");
			fread(ptr,imagesize(0,0,20,30),1,fp);
			putimage(222,382,ptr,0);
			fclose(fp);
			fp=fopen("x:\\pieces\\knigt_G.TXT","r");
			fread(ptr,imagesize(0,0,20,30),1,fp);
			putimage(402,382,ptr,0);
			fclose(fp);
			fp=fopen("x:\\pieces\\queen_G.TXT","r");
			fread(ptr,imagesize(0,0,20,30),1,fp);
			putimage(312,382,ptr,0);
			fclose(fp);
			fp=fopen("x:\\pieces\\pawn_G.TXT","r");
			fread(ptr,imagesize(0,0,20,30),1,fp);
			for(x=181;x<480;x+=90)
			{
				putimage(x,340,ptr,0);
			}
			fclose(fp);

}
void main()
{
	init();
	board();
	p_img();
	initializemouse();
	showmouse();
	getch();
}