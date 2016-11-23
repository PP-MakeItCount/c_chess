#include<stdio.h>
#include<conio.h>
void main()
{
	int Eng,HinSank,Mar,Sci,Maths,SoSci,Total;
	float Percentage;
	clrscr();
	printf("Enter the Marks");
	printf("English=");
	scanf("%d=",&Eng);
	printf("HindiSanksrit=");
	scanf("%d=",&HinSank);
	printf("Marathi=");
	scanf("%d",&Mar);
	printf("Science=");
	scanf("%d",&Sci);
	printf("Mathematics=");
	scanf("%d",&Maths);
	printf("SoScience=");
	scanf("%d",&SoSci);
	Total=Eng+HinSank+Mar+Sci+Maths+SoSci;
	printf("Total=%d",Total);
	Percentage=Total/650.0*100.00;
	printf("Percentage=%f",Percentage);
	getch();
}