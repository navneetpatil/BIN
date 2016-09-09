#include<stdio.h>
#include<conio.h>
int main()
{
	int pinNo,count=0;clrscr();
	pin:
	printf("\nEnter PIN:");

	scanf("%d",&pinNo);
	if(pinNo==6823) printf("\nWelcome to SBI!!!");
	else 
	{
		printf("\nInvalid pin");
		count++;
		printf("\nIt is your %d Attemp!!!  ",count);
		if(count>=3) printf("\nYour card is blocked due to reaching maximum wrong attemp!!!");
		else goto pin;
	}
	getch();
}
	
