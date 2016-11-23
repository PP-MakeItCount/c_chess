#include<stdio.h>
#include<conio.h>

void main()
{
	unsigned a=0;
	char c,d;
	clrscr();
	printf("\n\nPassed ssc: (y/n) ");
	scanf("%c",&c);
	if(tolower(c)=='y')
	       {	a=a|1;   }


	printf("\n\nPassed HSC: (y/n) ");
	scanf("%c",&d);
	if(tolower(d)=='y')
       {	a=a|2;   }

	printf("\n\nPassed B.E: (y/n) ");
	scanf("%c",&c);
	if(tolower(c)=='y')
       {	a=a|4; }

	if(a&7==7)
	 printf("\n\nALL conditions true!");

	if(a&1==1)
	 printf("\n\nssc passed: yes");

	if(a&2==2)
	 printf("\n\nhsc passed: yes");

	if(a&4==4)
	 printf("\n\nb.e passed: yes");

	getch();

}
