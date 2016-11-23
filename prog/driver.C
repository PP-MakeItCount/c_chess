/*case(1)Driver is marrid
	  (2)driver is unmarrd,male &above age of 30 years
	  (3)driver is unmarrid,female &above age of 25 years */

#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	char Ms,G;
	clrscr();
	printf("Enter age a=");
	scanf("%d",&a);
	printf("Enter Marital status Ms=");
	fflush(stdin);
	scanf("%c",&Ms);
	printf("Enter Gender\nG=");
	fflush(stdin);
	scanf("%c",&G);
	if(Ms=='m')
	{
		printf("Driver is insured");
	}
	else
	{
		   if(G=='m')
		   {
				if(a>30)
				{
						printf("Driver is insure");
				}
				else
				{
					printf("driver is not insured");
				}
		   }
		  else
		  {
				 if(a>25)
				 {
					printf("driver is insured");
				 }
				 else
				 {
					printf("driver is not insured");
				 }
		  }
	}
getch();
}