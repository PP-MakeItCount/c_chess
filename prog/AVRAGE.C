#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	float c;
	clrscr();
	printf("Enter two numbers\n");
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	c=(a+b)/2.0;
	printf("Avrage=%f",c);
	getch();
}