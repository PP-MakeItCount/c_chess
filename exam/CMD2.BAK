#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	char ch;
	FILE *fp;
	if(argc!=2)
	 printf("parameters mismatched....") ;


	fp=fopen(argv[1],"r");
	if(fp==NULL)
	 printf("file not found.>>....");

	while(feof(fp))
	{
	       ch=fgetc(fp);
		printf("%c",ch);
	}
	getch();
}
