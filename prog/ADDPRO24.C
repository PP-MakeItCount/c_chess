/*enter any number and find addition of each digit in that number*/
#include<stdio.h>
#include<conio.h>
void main()
 {
	int a,s;
	clrscr();
	s=0;
	printf("Enter any number");
	scanf("%d",&a);
	while(a>0)
	{
		s=s+a%10;
		a=a/10;
	}
	printf("Addtion=%d",s);
	getch();
 }