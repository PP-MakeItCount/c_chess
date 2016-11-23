#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *fp,*fw;
  char ch;
  clrscr();
  fp=fopen("x:\\exam\\chess.c","r");
  if(fp==NULL)
  {
	printf("file not found");
	exit(0);
  }
  fw=fopen("x:\\exam\\chess1.c","w");
  if(fw==NULL)
  {
	printf("file not found");
	exit(0);
  }

  while(!feof(fp))
  {
	ch=fgetc(fp);
	fputc(ch,fw);
	printf("%c",ch);
  }
  getch();
  fclose(fp);
}