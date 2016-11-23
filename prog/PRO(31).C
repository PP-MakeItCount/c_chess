/*0 4 1 1 3 2 2 2 3 3 1 4............*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	for(a=0,b=4,c=1;a<=3;a++,b--,c++)
	printf("%d %d %d ",a,b,c);
	getch();
}