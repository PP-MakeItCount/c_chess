#include<stdio.h>
#include<conio.h>
void main()
{
	int BS,HRA,DA,GS;
	clrscr();
	printf("Enter BS=");
	scanf("%d",&BS);
	printf("Enter HRA=");
	scanf("%d",&HRA);
	printf("Enter DA=");
	scanf("%d",&DA);
	GS=BS+HRA+DA;
	printf("Gross salary=%d",GS);
	getch();
}