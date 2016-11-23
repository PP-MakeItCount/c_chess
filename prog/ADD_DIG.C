#include<stdio.h>
#include<conio.h>
void main()
{
	int a,s;
	clrscr();
	printf("Enter any number");
	scanf("%d",&a);
	s=0;
	while(a>0)
	{
		s=s+a%10;
		a=a/10;
	}
	printf("Addtion=%d",s);
	getch();
 }