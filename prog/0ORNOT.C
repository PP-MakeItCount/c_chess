#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter value of a\na=");
	scanf("%d",&a);
	if(a==0)
	printf("Value of a=0");
	else
	printf("Value of a=%d",a);
	getch();
}