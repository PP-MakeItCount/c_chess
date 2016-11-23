#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	clrscr();
	printf("Enter value of x\nx=");
	scanf("%d",&x);
	printf("Enter value of y\ny=");
	scanf("%d",&y);
	printf("Enter value of z\nz=");
	scanf("%d",&z);
	if(x>y)
	{
		if(x>z)
		printf("x is greater");
		else if(z>x)
		printf("z is greater");
		else
		printf("x & z are equal");
	}
	else
	{
		if(y>z)
		printf("y is greater");
		else if(z>y)
		printf("z is greater");
		else
		printf("x,y,z are equal");
	}
getch();
}