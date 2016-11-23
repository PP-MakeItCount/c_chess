#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	a=1;
	while(a<=100)
	{   if(a%2==0)
		printf("%d ",a);
		a++;
	}
	getch();
}