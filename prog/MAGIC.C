/*enter any number and cheak it is magic number or not;*/
#include<stdio.h>
#include<conio.h>
void main()
 {
  int n,r,p;
  clrscr();
  printf("Enter any number");
  scanf("%d",&n);
  p=n;
  while(n>9)
  {
   r=0;
   while(n>0)
   {
	r=r+n%10;
	n=n/10;
   }
   n=r;
  }
  if(r==1)
  printf("%d is a magic number",p);
  else
  printf("%d is a not magic number",p);
  getch();
 }
