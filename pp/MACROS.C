#include<conio.h>
//#define FLAG 0


void main()
{
	clrscr();
	#ifndef FLAG
	#define FLAG 0
	printf("FLAG defined to 0");
	#else
		printf("defined previously!!!!");
	#endif;

	printf("%d",FLAG);
	getch();
}