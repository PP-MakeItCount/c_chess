#include<dos.h>

union REGS _IN,_OUT;
int X_press,Y_press,X_rel,Y_rel;

int initializemouse()
{
	_IN.x.ax=0;
	int86(0x33,&_IN,&_OUT);
	if(_OUT.x.ax)
	return 1;
	else
	return 0;
}
int showmouse()
{
	_IN.x.ax=1;
	int86(0x33,&_IN,&_OUT);
	return 1;
}
int hidemouse()
{
	_IN.x.ax=2;
	int86(0x33,&_IN,&_OUT);
	return 1;
}
int getpos_x()
{
	_IN.x.ax=3;
	int86(0x33,&_IN,&_OUT);
	return _OUT.x.cx;
}

int getpos_y()
{
	_IN.x.ax=3;
	int86(0x33,&_IN,&_OUT);
	return _OUT.x.dx;
}
int buttonstatus()
{
	_IN.x.ax=3;
	int86(0x33,&_IN,&_OUT);
	 _OUT.x.bx;
}
int setpos_xy(int x, int y)
{
	_IN.x.ax=4;
	_IN.x.cx=x;
	_IN.x.dx=y;
	int86(0x33,&_IN,&_OUT);
	return 1;
}
int pressrel_info()  //press,realiz;
{
	int PRESS=0;
	_IN.x.ax=5;
	int86(0x33,&_IN,&_OUT);
	PRESS=1;
	X_press=_OUT.x.cx;
	Y_press=_OUT.x.dx;

	_IN.x.ax=6;
	int86(0x33,&_IN,&_OUT);
	X_rel=_OUT.x.cx;
	Y_rel=_OUT.x.dx;
	return PRESS;
}

int restrictmouse(int x1, int y1, int x2, int y2)
{
	_IN.x.ax=7;
	_IN.x.cx=x1;
	_IN.x.dx=x2;
	int86(0x33,&_IN,&_OUT);

	_IN.x.ax=8;
	_IN.x.cx=y1;
	_IN.x.dx=y2;
	int86(0x33,&_IN,&_OUT);
	return 1;
}