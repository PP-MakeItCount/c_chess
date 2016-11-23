#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	while(ch!='\r')
	{
	   printf("%c",ch) ;
	   ch=getch();
	}
	printf("done!!!!!!!!!!!!!!");
	getch();
}