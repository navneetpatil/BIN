#include<stdio.h>
int main()
{
int p,c,m,Sid,tot;
float avg;
char name[20];
printf("Enter Sid, Name, 3 Sub marks :\n  ");
scanf("%d %s %d %d %d",&Sid,&name,&p,&c,&m);
tot=m+p+c;
avg=tot/3.0;
printf("Sid\t Sname\t Total\t Avg\t Result\n");
printf("---------------------------------------\n");
printf("%d\t %s %d   %.2f\t ",Sid,name,tot,avg);
if(m>35&&p>35&&c>35)
{
	if(avg>=60) printf("1st");
	else if(avg>=50) printf("2nd");
	else printf("3rd");
}
else printf("fail");
}

