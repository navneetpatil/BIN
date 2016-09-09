#include<stdio.h>
#include<conio.h>
void main()
{
int a=1;
me:
printf("%d\t",a);
a++;
if(a<=10) goto me;
getch();

}