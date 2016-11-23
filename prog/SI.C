	#include<stdio.h>
	#include<conio.h>
	void main()
	{
		int p,n,r;
		float si;
		clrscr();
		printf("enter value of p=");
		scanf("%d",&p);
		printf("enter value of n=");
		scanf("%d",&n);
		printf("enter value of r=");
		scanf("%d",&r);
		si=p*n*r/100.0;
		printf("simple intrest=%f",si);
		getch();
		}