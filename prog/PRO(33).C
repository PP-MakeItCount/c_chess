/*calculate simple interest for 3 sets  p n r;*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int P,N,R,i;
   float si;
   clrscr();
   for(i=1;i<=3;i++)
   {
	  printf("\nEnter value Princple=");
	  scanf("%d",&P);
	  printf("\nEnter value N=");
	  scanf("%d",&N);
	  printf("\nEnter value Rate=");
	  scanf("%d",&R);
	  si=P*N*R/100.0;
	  printf("\nsmiple interst=%f\n",si);
   }
   getch();
}