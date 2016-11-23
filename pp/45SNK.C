#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>

int x=320,y=240,flag;
char ch;
void getkey();
void move();
void draw();
void frame();
/*void food();
void getfood();  */
void head();

void grap()
{   int gd=0,gm=0;
    initgraph(&gd,&gm,"x:\\bgi ");
}
void main()
{

	clrscr();
	grap();

	 //getfood();
	while(tolower(ch)!='x')
	{
       //	food();
	frame();
	if(kbhit())
		getkey();

	move();
	}

}
void getkey()
 {
	ch=getch();
	switch(ch)
	{
		case 'a':flag=1;move();break;
		case 's':flag=4;move();break;
		case 'w':flag=3;move();break;
		case 'd':flag=2;move();break;
	}
 }
 void move()
 {
   if(x>=35 && y>=35 && x<=385 && y<=405)
   {
	switch(flag)
	{
	case 1: x=x-2;draw();head();break;
	case 2: x=x+2;draw();head();break;
	case 3: y-=2;draw();head();break;
	case 4: y=y+2;draw();head();;break;

	}
   }
   else
      exit(0);
 }

 void draw()
 {
   circle(x,y,3);
   delay(25);
   cleardevice();
 }

 void frame()
  {

	rectangle(20,20,400,420) ;
  }

 /* void getfood()
  {
	int f=0,d=0;
	//circle(f,d,3);
	f=random(380);
	d=random(400);

 }
 void food()
 {
	if(f>40 && d>40)
	{
	circle(f,d,3);
	delay(500);
	}
 } */

 void head()
 {
	int h1,h2;
	switch(flag)
	{
	case 1: h1=x-9;circle(h1,y,5);break;
	case 2: h1=x+9;circle(h1,y,5);break;
	case 3: h2=y-9;circle(x,h2,5);break;
	case 4: h2=y+9;circle(x,h2,5);break;
	}
 }