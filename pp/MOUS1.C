#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define pf printf
union REGS in,out;
int gd=0,gm=0;
void detectm()
{
     in.x.ax=0;
     int86(0x33,&in,&out);
     if(out.x.ax==0)
      pf("\nMouse not initialized!!!!!!!!!!");
     else
      pf("\nMouse initialized..");
}

void show()
{
	in.x.ax=1;
	int86(0x33,&in,&out);
	pf("\n         \a\a showing mouse......");

}
void pos()
 {
	in.x.ax=3;

	while(!kbhit())
	{
		int86(0x33,&in,&out);
		outtextxy(600,420,"Position(%d,%d)",out.x.cx,out.x.dx);
		delay(50);
		clrscr();
	}
 }

/*void main()
 {
    clrscr();
    detectm();
    show();
    pos();
    getch();
 } */