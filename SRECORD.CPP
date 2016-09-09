#include<stdio.h>
//#include<conio.h>
int main()
{
	char sid[20],sname[20];
	int marks,count=1,sub,tomarks=0;
	float per; 
	//clrscr();
	printf("\nEnter student name:");
	scanf("%s",&sname);
	printf("Enter student id:");
	scanf("%s",&sid);
	printf("Enter No. of subject:");
	scanf("%d",&sub);
	printf("Enter marks out of 100 only");
	marks:
	printf("\nsub %d marks:",count);
	scanf("%d",&marks);
	count++;
	tomarks+=marks;

	if(count<=sub)	goto marks;
    printf("Total marks:%d\t",tomarks);
	per=(float)tomarks/(100*sub)*100;
	printf("Result is %.2f % \t",per);
	if(per>=75) printf("You got Distinction!!!");
	else if(per>=60) printf("You got first class!!!");
	else if(per>=50) printf("You got second class!!!");
	else if(per>=35) printf("You are pass!!!");
	else if(per<35) printf("Sorry you are Fail!!!");
}
	
	//getch();


	

