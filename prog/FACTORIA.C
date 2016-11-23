#include<stdio.h>
#include<conio.h>
void main()
{
	int a,f;
	clrscr();
	printf("Enter any number");
	scanf("%d",&a);
	f=1;
	while(a>=1)
	{
		f=f*a;
		a--;
	}
	printf("Factorial=%d",f);
	getch();
}