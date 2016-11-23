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
void border()
{
	setcolor(14);
	rectangle(115,55,485,425);
	setfillstyle(1,6);
	floodfill(117,58,14);
}

void board()
{
	int x1,y1,x2,y2,count=1;
	char a[2]={'a',NULL}, b[2]={'8',NULL};
	setcolor(14);
	setfillstyle(1,3);
	for(x1=120,y1=60,y2=420;x1<=480;x1+=45)
	  line(x1,y1,x1,y2) ;

	for(x1=120,y1=60,x2=480;y1<=420;y1+=45)
	  line(x1,y1,x2,y1) ;

	for(y1=65;y1<=420;y1+=50)
	{
		count++;
		if(count%2==0)
		{
			for(x1=125;x1<480;x1+=90)
			floodfill(x1,y1,14);
		}
		else
		{
			for(x1=170;x1<480;x1+=90)
				floodfill(x1,y1,14);
		}
	}

	setcolor(5);
	for(x1=138,y1=430;x1<480;x1+=45)
	{
		outtextxy(x1,y1,a);
		a[0]++;
	}
	for(x1=490,y1=78;y1<420;y1+=45)
	{
		outtextxy(x1,y1,b);
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
	border();
	p_img();
	initializemouse();
	showmouse();
	getch();
}