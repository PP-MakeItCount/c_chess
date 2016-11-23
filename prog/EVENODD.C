#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter value of a\na=");
	scanf("%d",&a);
	if(a%2==0)
	printf("Number is even");
	else
	printf("Number is odd");
	getch();
}