#include<stdio.h>
#include<string.h>
#include<conio.h>

void main( int argc,char *argv[])

 {

	char s[10];
	int i;

	clrscr();
	if(argc==2)
		printf("the argument supplied is %s ",argv[1]);
	else
		printf("\nOnly one argument expected");

	strcpy(s,argv[1]);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=65&&s[i]<=90)
			printf("%c",s[i]+32);
		else if(s[i]>=97&&s[i]<=122)
			printf("%c",s[i]-32);

	}
	getch();
 }