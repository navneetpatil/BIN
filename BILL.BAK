#include<stdio.h>
#include<conio.h>
int main()
{
	long servNo,pre=0,cur=0,units=0;
	char name[20];
	float amt;
	clrscr();
	printf("Enter servNo:"); scanf("%ld",&servNo);
	printf("\nEnter previous Reading:"); scanf("%ld",&pre);
	current:
	printf("\nEnter Current Reading:"); scanf("%ld",&cur);
	units=cur-pre;
	if(units<0)
	{
		printf("\nPlease check current month Reading!!!");
		goto current;

	}
	if(units<=50) amt=units*1.45;
	else if(units<=100)
	{
		amt=units*1.45;
		amt=amt+(units-50)*2.8;
	}
	else if(units<=200)
	{
		amt=amt*1.45;
		amt=amt+50*2.8;
		amt=amt+(units-100)*3.05;
	}
	else if(units<=300)
	{
	amt=amt*1.45;
	amt=amt+50*2.8;
	amt=amt+100*3.05;
	amt=amt+(units-200)*4.75;

	}
	else if(units<=500)
	{
	amt=amt*1.45;
	amt=amt+50*2.8;
	amt=amt+100*3.05;
	amt=amt+100*4.75;
	amt=amt+(units-300)*6;
	}
	else
	{
	amt=amt*1.45;
	amt=amt+50*2.8;
	amt=amt+100*3.05;
	amt=amt+100*4.75;
	amt=amt+200*6.0;
	amt=amt+(units-500)*6.25;
	}
	if(amt<67) amt=67;
	printf("\nBill Amount:  %.2f\n Thank You!!!",amt);
	getch();
}
