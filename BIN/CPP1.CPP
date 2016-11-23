#include<stdio.h>
#include<conio.h>
#include<iostream.h>

class rect
{
	int a,b,area;
	public:
	rect(int x,int y)
	{
		a=x;
		b=y;
	}
	rect()
	{
		area=a*b;
		cout<<"Area= "<<area;

	}
   /*   void display()
	{
		cout<<"Area= "<<area;
	}  */
};
void main()
{
	clrscr();
	rect r1(20,30);
	rect r2();
	getch();
}