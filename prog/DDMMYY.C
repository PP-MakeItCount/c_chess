/*Enter date of birth and find its lucky number*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int dd,mm,yy,a,t;
	clrscr();
	printf("Enter Date \t");
	scanf("%d",&dd);
	printf("Enter Month\t");
	scanf("%d",&mm);
	printf("Enter Year \t");
	scanf("%d",&yy);
	t=dd+mm+yy;
	while(t>9)
	{
	 a=0;
	 while(t>0)
	 {
		a=a+t%10;
		t=t/10;
	 }
	 t=a;
	}
	 printf("Your lucky number =%d",t);
	 getch();
}

