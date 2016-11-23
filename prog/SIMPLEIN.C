#include<stdio.h>
#include<conio.h>
void main()
{
	int P,N,R;
	float SI;
	clrscr();
	printf("Enter P=");
	scanf("%d",&P);
	printf("Enter N=");
	scanf("%d",&N);
	printf("Enter R=");
	scanf("%d",&R);
	SI=(P+N+R)/100.0;
	printf("Simple Interest=%f",SI);
	getch();
}