#include<stdio.h>
#include<conio.h>
void main()
{
	int a,s;
	a=1;
	s=0;
	clrscr();
	while(a<=10)
	{
		s=s+a;
		a++;
	}
	printf("Addtion=%d",s);
	getch();
}