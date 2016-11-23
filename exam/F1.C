#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *fp;
  char ch;
  clrscr();
  fp=fopen("x:\\exam\\chess.c","r");
  if(fp==NULL)
  {
	printf("file not found");
	exit(0);
  }
  while(!feof(fp))
  {
	ch=fgetc(fp);
	printf("%c",ch);


  }
  getch();
  fclose(fp);


}