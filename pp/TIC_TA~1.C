#include <conio.h>
#include <stdio.h>
#include <dos.h>
#include <graphics.h>
#include <stdlib.h>

int gm=0,gd=0;
int mx,my;
int x,y,button;
static int sx[10],so[10];
int win=2;

void board();
void score();
void turn();
void cross();
void x1();
void x2();
void x3();
void x4();
void x5();
void x6();
void x7();
void x8();
void x9();
void nuts();
void o1();
void o2();
void o3();
void o4();
void o5();
void o6();
void o7();
void o8();
void o9();
void wins();
void xwins();
void owins();
void draw();

void main()
{
	union REGS o,i;
	initgraph(&gm,&gd,"x:\\bgi");

	mx = getmaxx() / 2;
	my = getmaxy() / 2;

	i.x.ax=0;
	int86(0x33,&i,&o);

	if(o.x.ax==0)
	outtext("MOUSE NOT DETECTED...");


	i.x.ax=1;
	int86(0x33,&i,&o);


	while(!kbhit())
	{
	i.x.ax=3;
	int86(0x33,&i,&o);
	x=o.x.cx;
	y=o.x.dx;
	button=o.x.bx;
	board();
	score();

	turn();

	nuts();
	cross();

	if(x<=625 && x>=430 && y<=470 && y>=425 && button==1)
	exit(0);
	}

}

void board()
{
	setcolor(RED);
	setlinestyle(0, 0, 1);
	rectangle(0,0,420,420);
	setcolor(GREEN);
	setlinestyle( 3, 0, 0);
	line(140,0,140,420);
	line(280,0,280,420);
	line(0,140,420,140);
	line(0,280,420,280);
}

void x1()
{
	line(10,10,130,130);
	line(130,10,10,130);
	sx[1]=1;
}

void x2()
{
	line(150,10,270,130);
	line(270,10,150,130);
	sx[2]=1;
}

void x3()
{
	line(290,10,410,130);
	line(410,10,290,130);
	sx[3]=1;
}
void x4()
{
	line(10,150,130,270);
	line(130,150,10,270);
	sx[4]=1;
}
void x5()
{
	line(150,150,270,270);
	line(270,150,150,270);
	sx[5]=1;
}
void x6()
{
	line(290,150,410,270);
	line(410,150,290,270);
	sx[6]=1;
}

void x7()
{
	line(10,290,130,410);
	line(130,290,10,410);
	sx[7]=1;
}

void x8()
{
	line(150,290,270,410);
	line(270,290,150,410);
	sx[8]=1;
}

void x9()
{
	line(290,290,410,410);
	line(410,290,290,410);
	sx[9]=1;
}

void cross()
{
	setcolor(LIGHTBLUE);
	setlinestyle(2,0,1);
	if(button==2)
	{
	sound(90);
	if(x<=140 && y<=140 && button==2 && sx[1]!=1 && so[1]!=1)
	x1();

	if(x<=280 && x>=140 && y<=140 && button==2 && sx[2]!=1 && so[2]!=1)
	x2();

	if(x>=280 &&x<=420 && y<=140 && button==2 && sx[3]!=1 && so[3]!=1)
	x3();

	if(x<=140 && y>=140 &&y<=280 && button==2 && sx[4]!=1 && so[4]!=1)
	x4();

	if(x>=140 && x<=280 && y>=140 && y<=280 && button==2 && sx[5]!=1 && so[5]!=1)
	x5();

	if(x>=280 && x<=420 && y>=140 && y<=280 && button==2 && sx[6]!=1 && so[6]!=1)
	x6();

	if(x<=140 && y>=280 && y<=420 && button==2 && sx[7]!=1 && so[7]!=1)
	x7();

	if(x>=140 && x<=280 && y>=280 && y<=420 && button==2 && sx[8]!=1 && so[8]!=1)
	x8();

	if(x>=280 && x<=420 && y>=280 && y<=420 && button==2 && sx[9]!=1 && so[9]!=1)
	x9();

	setcolor(YELLOW);
	outtextxy(50,430,"O 's TURN");
	setcolor(BLACK);
	outtextxy(50,430,"X 's TURN");
	}

	if(sx[1]==1 && sx[5]==1 && sx[9]==1)
	xwins();

	if(sx[3]==1 && sx[5]==1 && sx[7]==1)
	xwins();

	if(sx[1]==1 && sx[4]==1 && sx[7]==1)
	xwins();

	if(sx[2]==1 && sx[5]==1 && sx[8]==1)
	xwins();

	if(sx[3]==1 && sx[6]==1 && sx[9]==1)
	xwins();

	if(sx[1]==1 && sx[2]==1 && sx[3]==1)
	xwins();

	if(sx[4]==1 && sx[5]==1 && sx[6]==1)
	xwins();

	if(sx[7]==1 && sx[8]==1 && sx[9]==1)
	xwins();



}

void nuts()
{
	setcolor(MAGENTA);
	setlinestyle(2,0,1);
	if(button==1)
	{
	sound(70);
	if(x<=140 && y<=140 && button==1 && sx[1]!=1 && so[1]!=1)
	o1();

	if(x<=280 && x>=140 && y<=140 && button==1 && sx[2]!=1 && so[2]!=1)
	o2();

	if(x>=280 &&x<=420 && y<=140 && button==1 && sx[3]!=1 && so[3]!=1)
	o3();

	if(x<=140 && y>=140 &&y<=280 && button==1 && sx[4]!=1 && so[4]!=1)
	o4();

	if(x>=140 && x<=280 && y>=140 && y<=280 && button==1 && sx[5]!=1 && so[5]!=1)
	o5();

	if(x>=280 && x<=420 && y>=140 && y<=280 && button==1 && sx[6]!=1 && so[6]!=1)
	o6();

	if(x<=140 && y>=280 && y<=420 && button==1 && sx[7]!=1 && so[7]!=1)
	o7();

	if(x>=140 && x<=280 && y>=280 && y<=420 && button==1 && sx[8]!=1 && so[8]!=1)
	o8();

	if(x>=280 && x<=420 && y>=280 && y<=420 && button==1 && sx[9]!=1 && so[9]!=1)
	o9();

	setcolor(YELLOW);
	outtextxy(50,430,"X 's TURN");
	setcolor(BLACK);
	outtextxy(50,430,"O 's TURN");
	}

	if(so[1]==1 && so[5]==1 && so[9]==1)
	owins();

	if(so[3]==1 && so[5]==1 && so[7]==1)
	owins();

	if(so[1]==1 && so[4]==1 && so[7]==1)
	owins();

	if(so[2]==1 && so[5]==1 && so[8]==1)
	owins();

	if(so[3]==1 && so[6]==1 && so[9]==1)
	owins();

	if(so[1]==1 && so[2]==1 && so[3]==1)
	owins();

	if(so[4]==1 && so[5]==1 && so[6]==1)
	owins();

	if(so[7]==1 && so[8]==1 && so[9]==1)
	owins();




}

void o1()
{
	circle(70,70,65);
	so[1]=1;
}

void o2()
{
	circle(210,70,65);
	so[2]=1;
}

void o3()
{
	circle(350,70,65);
	so[3]=1;
}

void o4()
{
	circle(70,210,65);
	so[4]=1;
}

void o5()
{
	circle(210,210,65);
	so[5]=1;
}

void o6()
{
	circle(350,210,65);
	so[6]=1;
}

void o7()
{
	circle(70,350,65);
	so[7]=1;
}

void o8()
{
	circle(210,350,65);
	so[8]=1;
}

void o9()
{
	circle(350,350,65);
	so[9]=1;
}

void score()
{
	setcolor(BROWN);
	setlinestyle(0,0,1);
	rectangle(425, 0, 630,475);
	setlinestyle(2,0,1);
	rectangle(430,425,625,470);
	settextstyle(7,0,5);
	outtextxy(455,420,"EXIT");
}

void turn()
{
	setcolor(BROWN);
	setlinestyle(0,0,1);
	rectangle(0,425,420,475);
}

/*void wins()
{
	int a=430,b=400;
	char c;

	if(win==1)
	{

	}
	else
	{

	}


	outtextxy(a,b+10,"PRESS X KEY TO CONTINUE");
	c=getch();
	if(c=='x')
	exit(0);
}       */

void xwins()
{
	int i;
	textcolor(BLINK+YELLOW);
	for(i=10;i<=150;i=i+10)
	{
	setlinestyle(0,0,3);
	rectangle(mx-i-20,my-i,mx+i+20,my+i);
	delay(50);
	}
	cleardevice();
	rectangle(mx-i-20,my-i,mx+i+20,my+i);
	outtextxy(430,0,"X WINS !!! :)");
}

void owins()
{

	outtextxy(430,0,"O WINS !!! :)");
}

void draw()
{
	int a=0,b=0;
	char c;
	if(win==2)
	for(a=0;a<=320;a=a+5)
	{
	outtextxy(a,b,"X WINS !!! :)");
	delay(50);
	cleardevice();
	b=b+5;
	}
	outtextxy(a,b+10,"PRESS X KEY TO CONTINUE");
	c=getch();
	if(c=='x')
	exit(0);

}





