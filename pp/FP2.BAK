#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
 {
	FILE *fp,*fw;
	char ch,chr;
	clrscr();
	fp=fopen("x:\\pp\\dos1.c","r");
	if(fp==NULL)
	{
		printf("\n\nFILE creation error") ;
		exit(0);
	}
	fw=fopen("x:\\pp\\wten.c","w+");
	if(fw==NULL)
	{
		printf("\n\nFILE creation error") ;
		exit(0);
	}


	while(!feof(fp))
	{

		ch=fgetc(fp);
		printf("%c",ch);
		fputc(ch,fw);
	}
	puts("File written to new file..\n\n\nDisplaying it \n\n\n");
	rewind(fw);
	while(!feof(fw))
	{
		ch=fgetc(fw);
		printf("%c",ch);

	}

	getch();
	getch();
	fclose(fp);
	fclose(fw);

 }