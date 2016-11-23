#include<stdio.h>
#include<conio.h>
#define pf printf
#define swap(a,b) {	\
			a=a^b;\
			b=b^a;\
			a=a^b;\
			\
			}

 void main()
 {
	int a=5,b=6;
	clrscr();
	pf("\n\n\nA=%d\tB=%d",a,b);
	swap(a,b);
	pf("\n\nA=%d\tB=%d",a,b);
	getch();
 }
