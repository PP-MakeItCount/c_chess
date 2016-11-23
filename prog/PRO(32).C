/*Enter any number and print fiboneci series*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,i,n;
	clrscr();
	a=0;
	b=1;
	printf("enter any number");
	scanf("%d",&n);
	printf("%d %d ",a,b);
	for(i=2;i<n;i++)
	{
	   c=a+b;
	   a=b;
	   b=c;
	   printf("%d ",c);
	}
	getch();
}