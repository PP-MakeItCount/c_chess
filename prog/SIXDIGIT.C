#include<stdio.h>
#include<conio.h>
void main()
{
	int Fd,Sd,Td,Ld;
	float N;
	printf("Enter Six Digit Number  ");
	scanf("%ld=",&N);
	Fd=N/100000;
	Sd=(N/10000)%10;
	Td=(N/1000)%10;
	Ld=N%10;
	printf("Number=%ld,First digit=%d,Second digit=%d,Third digit=%d,Last digit=%d",N,Fd,Sd,Td,Ld);
	getch();
}