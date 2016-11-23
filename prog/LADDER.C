#include<stdio.h>
#include<conio.h>
void main()
{
	int Eng,HinSank,Mar,Sci,Maths,SoSci,Total;
	float Per;
	clrscr();
	printf("Enter the Marks\n");
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
	printf("Total=%d\n",Total);
	Per=Total/650.0*100.00;
	printf("Percentage=%f\n",Per);
	if(Per>=75)
	printf("Class=Distintion");
	else if(Per>=60)
	printf("Class=First class");
	else if(Per>=50)
	printf("Class=Second class");
	else if(Per>=40)
	printf("Class=Pass");
	else
	printf("\'Fail\'");
	getch();
}