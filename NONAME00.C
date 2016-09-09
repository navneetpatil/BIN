#include<stdio.h>
#include<conio.h>
int main()
{
int n1,n2,x,y,gcd,lcm;
printf("enter two no : ");
scanf("%d%d",&n1,&n2);
while(n1==n2)
{
if(n1>n2)
{
n1=n1-n2;
}
else
{
n2=n2-n1;
}
printf("%d = this is the gcd",n1);
lcm=(x*y)/gcd;
printf("%d = this is lcm",lcm);
}
return 0;
}