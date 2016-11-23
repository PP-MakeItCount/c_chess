#include<stdio.h>
#include<conio.h>
void main()
	{
		int b,h;
		float a;
		clrscr();
		printf("Breath=");
		scanf("%d",&b);
		printf("Height=");
		scanf("%d",&h);
		a=(float)1/2.0* b*h;
		printf("breath=%d,height=%d,area=%f",b,h,a);
		getch();
	}
