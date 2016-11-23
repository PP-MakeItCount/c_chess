#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
 {
	FILE *fp;
	char ch;
	clrscr();
	fp=fopen("x:\\bin\\pp.c","r");
	if(fp==NULL)
	{
		printf("\n\nFILE creation error") ;
	}

	while(!feof(fp))
	{

		ch=fgetc(fp);
		printf("%c",ch);
	}
	getch();
	fclose(fp);

 }