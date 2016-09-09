#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter a b and c  ");
scanf("%d %d %d",&a,&b,&c);
printf("%s",a==b&&a==c?"All are Equal":a>b&&a>c?"A is big":a==b&&a>c?"A & B are big":a==c&&a>b?"A & c are big":b==c&&b>a?"b & c are big":b>c?"b is big":"c is big");
}

