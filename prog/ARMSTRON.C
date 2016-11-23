/*enter any number & cheak it is armstrong number or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int a,t,n;
  clrscr();
  printf("Enter any number");
  scanf("%d",&a);
  n=a;
  t=0;
  while(a>0)
  {
   t=t+(a%10)*(a%10)*(a%10);
   a=a/10;
  }
  if(t==n)
  printf("%d is an armstrong number",n);
  else
  printf("%d is not an armstrong number",n);
  getch();
}