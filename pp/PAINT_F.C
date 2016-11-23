

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<mouse.h>
#include<stdlib.h>
#include<alloc.h>
//#pragma warn -aus

FILE *fp;
struct shape
{
	int id;
	//int color;
	int x1,y1,x2,y2;
	struct shape *next;
	struct shape *prev;
}*start=NULL,*last=NULL,*ptr,*temp;

struct button
{
	int id;
	int x1,y1,x2,y2;
}but[10];

void addshape(int,int,int,int,int);
void display_all_shapes();
void draw(int,int,int,int,int);
int diff(int,int);

int x,y,ID=0;
int N=4;
int count=0;
void init()
{
	int gd,gm;
	gd=0;
	gm=0;
	initgraph(&gd,&gm,"x:\\BGI");
}

void showcursor()
{
	/* setcolor(BLACK);
	line(x+10,y,x-10,y);
	line(x,y+10,x,y-10); */
	x=getxpos();
	y=getypos();
	setcolor(WHITE);
	line(x+10,y,x-10,y);
	line(x,y+10,x,y-10);
}

void addshape(int id,int x1,int y1,int x2,int y2)
{
	temp=(struct shape *)malloc(sizeof(struct shape));
	temp->id=id;
	temp->x1=x1;
	temp->x2=x2;
	temp->y1=y1;
	temp->y2=y2;

	if(start==NULL)
	{
		start=temp;
		last=temp;
		start->next=NULL;
		start->prev=NULL;
	}
	else
	{
		last->next=temp;
		temp->prev=last;
		last=temp;
		last->next=NULL;
	}
}


void display_all_shapes()
{
	if(start!=NULL)
	{
		ptr=start;
		while(1)
		{
			draw(ptr->id,ptr->x1,ptr->y1,ptr->x2,ptr->y2);
			//if(ptr->next==NULL)
			if(ptr==last)
			break;
			ptr=ptr->next;
		}
	}
}

void draw(int id,int x1,int y1,int x2,int y2)
 {

	switch(id)
	{
		case 0 : line(x1,y1,x2,y2);break;
		case 1 : rectangle(x1,y1,x2,y2);break;
		case 2 : //setfillstyle(EMPTY_FILL,BLACK);
				 ellipse(x1,y1,0,360,diff(x2,x1)/*x radius*/,diff(y2,y1)/*y radius*/);break;
		case 3 : setfillstyle(SOLID_FILL,x1);
				 floodfill(x2,y2,WHITE);
				 break;
	}
}

int diff(int a,int b)
{
	if(a>b)
	{
		return (a-b);
	}
	else
	{
		if(a<b)
		{
			return (b-a);
		}
		else
		{
			return 0;
		}
	}
}

void save()
{
	if(start!=NULL)
	{
		fp=fopen("C:\\TEST.TXT","w+");
		if(fp==NULL)
		{
			printf("File Creation Error");
		}
		else
		{
			ptr=start;
			while(1)
			{
				fwrite(ptr,sizeof(struct shape),1,fp);
				if(ptr->next==NULL)
				break;
				else
				ptr=ptr->next;
			}
		}
		fclose(fp);
	}
	else
	{
		printf("\nERROR : Screen Empty!!!");
	}
}

void initiatetoolbar()
{
	int i=0;
	but[0].id=0;
	but[0].x1=5;
	but[0].y1=5;
	but[0].x2=25;
	but[0].y2=25;

	for(i=1;i<=N-1;i++)
	{
		but[i].id=i;
		but[i].x1=5;
		but[i].y1=but[i-1].y1+25;
		but[i].x2=25;
		but[i].y2=but[i-1].y2+25;
	}
}

void drawtoolbar()
{
	//int N=4;
	int i=0;
	rectangle(0,0,30,479);


	for(i=0;i<=N-1;i++)
	{
		rectangle(but[i].x1,but[i].y1,but[i].x2,but[i].y2);
	}

	line(but[0].x1+5,but[0].y1+5,but[0].x2-5,but[0].y2-5);
	rectangle(but[1].x1+3,but[1].y1+5,but[1].x2-3,but[1].y2-5);
	ellipse(but[2].x1+10,but[2].y1+10,0,360,7,5);
}

void count_()
{
	if(start!=NULL)
	{
		ptr=start;
		count=1;
		if(ptr!=last)
		//break;
		while(1)
		{
			ptr=ptr->next;
			count++;
			if(ptr==last)
			break;
		}
	}
	else
	count=0;
}

void main()
{
	int xpos,ypos,p_flag=0,flag=0;
	int x1,y1,x2,y2;
	int i;
	//int count=0;
	init();
	initiatetoolbar();
	detectmouse();
	showmouse();
	//hidemouse();
	//showcursor();
	//setfillstyle(0,0);
	while(!kbhit())
	{
		//showcursor();


		//if(count<=1)
		//{
			display_all_shapes();
			drawtoolbar();
		//}
		//count++;

		p_flag=0;
		if(getpressstatus())
		{
			for(i=0;i<=N-1;i++)
			{
				if(inblock(but[i].x1,but[i].y1,but[i].x2,but[i].y2))
				{
					ID=but[i].id;
					ID=i;
					p_flag=1;
					break;
				}
				if(p_flag==1)
				break;
			}
			//if(flag==0)	//for polygon
			//{

				x1=X_PRESS;
				if(ID==3)
				x1=RED;
				y1=Y_PRESS;
			//}
			//if(p_flag==0)
			while(p_flag==0)
			{
				setcolor(BLACK);
				if(ID!=3)
				draw(ID,x1,y1,x2,y2);
				//fillellipse(x1,y1,diff(x2,x1),diff(y2,y1));
				if(ID!=3)
				{
					x2=getxpos();
					y2=getypos();
				}
				setcolor(WHITE);
				if(ID!=3)
				draw(ID,x1,y1,x2,y2);
				//fillellipse(x1,y1,diff(x2,x1),diff(y2,y1));
				delay(40);
				display_all_shapes();
				drawtoolbar();
				//delay(1);
				//fillellipse(x1,y1,(x2-x1),(y2-y1));
				//showcursor();
				//delay(1);
				//cleardevice();				//SUCCESSFULLY WORKS WITH RECTANGLE,CIRCLE/ELLIPSE AND LINE
				if(!getpressstatus())
				{
					//getpressstatus();
					x2=X_REL;
					//if(ID==3)
					//x2=RED;
					y2=Y_REL;
					if(ID==3)
					x1=RED;
					addshape(ID,x1,y1,/* diff( */x2/* ,x1) */,/* diff( */y2/* ,y1) */);
					//count=0;
					//setcolor(WHITE);
					//line(x1,y1,x2,y2);
					//fillellipse(x1,y1,(x2-x1),(y2-y1));

					cleardevice();
					//hidemouse();
					display_all_shapes();
					//showmouse();
					drawtoolbar();
					p_flag=1;
				}
			}
		}
		//setcolor(WHITE);
		//line(x1,y1,x2,y2);
		//fillellipse(x1,y1,(x2-x1),(y2-y1));
		//x1=x2;
		//y1=y2;	//for polygon
		//delay(40);
		//cleardevice();
		count_();

	}
	save();

}