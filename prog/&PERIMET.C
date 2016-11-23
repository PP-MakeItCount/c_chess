#include<stdio.h>
#include<conio.h>
void main()
{
	int r;
	float a,p;
	printf("Enter radius\nr=");
	scanf("%d",&r);
	a=3.14*r*r;
	p=2*3.14*r;
	printf("area=%f,perimeter=%f",a,p);
	if(a>p)
		{
			printf("\narea is greater\nperimeter is smaller\n");
		}
	else
		{
			printf("\"perimeter\" is greater");
		}
	getch();
}