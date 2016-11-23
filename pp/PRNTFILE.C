#include<stdio.h>
#include<string.h>
#include<conio.h>

void main( int argc,char *argv[])

 {

	FILE *fp;
	char ch[10]
	int i;

	clrscr();
	if(argc==2)
		printf("the argument supplied is %s ",argv[1]);
	else
		printf("\nOnly one argument expected");

	fp=fopen("prntfile","r");
	while(!feof(fp))
	{
		fgets(ch,10,fp);
		printf("%s",ch)
	}


	}
	getch();
 }