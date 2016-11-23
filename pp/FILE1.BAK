#include<stdio.h>
#include<conio.h>

void main()
 {
	char ch[10];
	FILE *fp,*fw;

	fp=fopen("x:\\pp\\FILE1.c","r");
	fw=fopen("x:\\pp\\FILE2.c","w");
	if(fp==NULL || fw==NULL)
	 printf("\n\nfile creation error!!!!!!!!!!");

	while(!feof(fp))
	{
		fgets(ch,10,fp);
		fputs(ch,fw);
	}
		fclose(fw);
	fw=fopen("x:\\pp\\FILE2.c","r");

	while(!feof(fw))
	{
		fgets(ch,10,fp);
		printf("%s",ch);

	}
	getch();
	fclose(fp);
	fclose(fw);

 }