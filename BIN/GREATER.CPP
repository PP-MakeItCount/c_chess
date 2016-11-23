#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
printf("Enter square side");
scanf("%d",&a);
b=4*a;
c=a*a;
if(b>c)
{
printf("perimeter is greater");
}
else
{
printf("area is greater");
}
getch();
}