	#include<stdio.h>
	#include<conio.h>
	void main()
	{
		long bs,hra,da,gs;
		clrscr();
		printf("enter bs=");
		scanf("%ld",&bs);
		printf("enter hra=");
		scanf("%ld",&hra);
		printf("enter da=");
		scanf("%ld",&da);
		gs=bs+hra+da;
		printf("gross salary=%ld",gs);
		getch();
	}