#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
 {

	FILE *fp;
	char ch[10];
      //	int count=0;
	clrscr();
	fp=fopen("x:\\pp\\name.c","w+");
	if(fp==NULL)
	{
		puts("file creation error");
		getch();

		exit(0);
	}
	while(1)
	{
		puts("Enter name{ * to stop)");
		gets(ch);
		if(ch[0]=='*')
			break;
		fputs(ch,fp);
		fputs("\n\n",fp);
	}
	rewind(fp);
	while(!feof(fp))
	{
		fgets(ch,10,fp);
		printf("%s",ch);
	}
	getch();
	fclose(fp);
 }