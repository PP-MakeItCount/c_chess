#include<stdio.h>
#include<conio.h>
/*struct stud
{
	int roll;
	float per;
}s; **/

void main()
 {
	int i,roll,per;
	FILE *fp;
	clrscr();
      /*	printf("\n\nEnter number of students: ");
	scanf("%d",&n); */
	fp=fopen("x:\\pp\\students.txt","w+");
	if(fp==NULL)
	{
		printf("\n\nFile creation error");
		exit(0);
	}

	for(i=0;i<3;i++)
	{
	     printf("Enter roll and percentage:  ");
	     scanf("%d%d",&roll,&per);
	     fprintf(fp,"%d%d",roll,per);
	}
	fclose(fp);
	getch();
 }
  /*	rewind(fp);

/*	while(!feof(fp))
	{
	     fscanf(fp,"%d%f",&roll,per);
	     printf("Roll=%d\tPercent=%f",roll,per);
	}

	getch();
	fclose(fp);



 }*/