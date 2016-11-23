#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	clrscr();
	printf("Enter any character");
	scanf("%c",&a);
	if(a<=90&&a>=65)
	printf("It is capital");
	else
	printf("It is not capital");
	getch();
}