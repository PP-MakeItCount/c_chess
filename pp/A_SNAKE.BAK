#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>

void add_point();
void gameover();
void pause();
char ch;
int active=0,obj_x,obj_y,obj_flag=0,obj_pattern,obj_color;
int score=0,kb=0;
struct points
  {
	int x,y,flag;
	char dir_flag;
  }a[50];
void init()
{
	int gd=0,gm=0;
	initgraph(&gd,&gm,"x:\\BGI");
}

void drawframe()
{
	rectangle(1,1,480,479);
	rectangle(490,1,639,479);
	rectangle(500,11,629,100);
}

void drawsnake()
{
	//char ch;
	int i,j;
	a[0].flag=1;
	if(active==0)
	for(i=1;i<=4;i++)
	{
		a[i].x=240;
		a[i].y=240+(i*10);
		a[i].flag=1;
		a[i].dir_flag='u';
		active++;
	}

	i=1;
	while(a[i].flag==1)
	{
	 circle(a[i].x,a[i].y,5);
	 i++;
	}


}
void getkey()
{
	ch=getch();
	if(ch=='w'&&a[0].dir_flag=='d')
	return;
	if(ch=='a'&&a[0].dir_flag=='r')
	return;
	if(ch=='s'&&a[0].dir_flag=='u')
	return;
	if(ch=='d'&&a[0].dir_flag=='l')
	return;
	switch(ch)
	{
		case'w' :a[0].dir_flag='u';break;
		case's' :a[0].dir_flag='d';break;
		case'a' :a[0].dir_flag='l';break;
		case'd' :a[0].dir_flag='r';break;
		case'p' :pause();break;
	}
	kb=1;
}

void assign_dir()
{
	int j=active;


	while(j>=1)
	{
		a[j].dir_flag=a[j-1].dir_flag;
		j--;
	}


}

void movesnake()
{
	int i=0;
	while(a[i].flag==1)
	{
		switch(a[i].dir_flag)
		{
			case 'u' : a[i].y=a[i].y-10;break;
			case 'd' : a[i].y=a[i].y+10;break;
			case 'l' : a[i].x=a[i].x-10;break;
			case 'r' : a[i].x=a[i].x+10;break;
		}

		i++;
	}
}

void drawobj()
{
	circle(obj_x,obj_y,5);
	setfillstyle(obj_pattern,obj_color);
	floodfill(obj_x,obj_y,15);
}

void createobj()
{
	obj_x=rand()%470;
	obj_y=rand()%470;
	if((obj_x%10)!=0)
	obj_x=((obj_x-(obj_x%10))+(obj_x%10)+(10-(obj_x%10)));
	if((obj_y%10)!=0)
	obj_y=((obj_y-(obj_y%10))+(obj_y%10)+(10-(obj_y%10)));
	obj_pattern=1;
	obj_color=random(getmaxcolor());
	obj_flag=1;
}

void check_obj_head()
{
   if(obj_x==a[1].x&&obj_y==a[1].y)
   {
	 obj_flag=0;
	 add_point();
	 score++;
   }
}
void add_point()
{
  a[active+1].flag=1;
  a[active+1].dir_flag=a[active].dir_flag;
  switch(a[active].dir_flag)
  {
	case 'u' :  a[active+1].x=a[active].x;
				a[active+1].y=a[active].y+10;
				break;
	case 'd' :  a[active+1].x=a[active].x;
				a[active+1].y=a[active].y-10;
				break;

	case 'l' :  a[active+1].x=a[active].x+10;
				a[active+1].y=a[active].y;
				break;

	case 'r' :  a[active+1].x=a[active].x-10;
				a[active+1].y=a[active].y;
				break;
  }
  active++;
}

void check_head_fence()
{
   if(a[1].x<5||a[1].y<5||a[1].x>475||a[1].y>475)
   gameover();
}

void gameover()
{
  cleardevice();
  settextstyle(4,0,4);
  outtextxy(220,220,"GAMEOVER");
  getch();
  exit(0);
}

void displayscore()
{
	char scr[3];
	char a,b;
	b=(score%10)+48;
	a=(score/10)+48;

	scr[0]=a;
	scr[1]=b;
	scr[2]=NULL;
	settextstyle(4,0,4);
	outtextxy(505,14,"SCORE");
	outtextxy(540,54,scr);
	if(score>45)
	{
	  outtextxy(400,480,"LIMIT REACHED!!!");
	  getch();
	  exit(0);
	}
}

void check_head_snake()
{
  int i;
  for(i=2;i<=active;i++)
  {
	if(a[1].x==a[i].x&&a[1].y==a[i].y)
	gameover();
  }
}

void startscreen()
{
  settextstyle(4,0,7);
  outtextxy(210,200,"SNAKE");
  settextstyle(4,0,4);
  outtextxy(160,280,"Press any key to Start!");
  getch();
}

void pause()
{
  settextstyle(4,0,3);
  outtextxy(505,104,"Game Paused");
  getch();
}

void main()
{
	flushall();
	init();
	startscreen();
	while(ch!='x')
	{
		randomize();
		drawframe();
		drawsnake();
		check_head_fence();
		if(kb==1)
		check_head_snake();
		check_obj_head();
		displayscore();
		if(kbhit())
		getkey();
		delay(100);
		cleardevice();
		assign_dir();
		if(obj_flag==0)
		createobj();
		drawobj();
		movesnake();
	}
	closegraph();
	printf("Press any key to exit!");
	getch();
}