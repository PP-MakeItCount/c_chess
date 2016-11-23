/*1 10 2 9 3 8..........................................10 1*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j;
   clrscr();
   for(i=1,j=10;i<=10;i++,j--)
   printf("%d %d ",i,j);
   getch();
}