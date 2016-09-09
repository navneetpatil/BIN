#include<stdio.h>
int main()
{
int a;
me:
printf("Please Enter A no above 1 only ");
scanf("%d",&a);
if(a==1) goto me;
printf("%s",a%2?"no is odd":"no is even");
}

