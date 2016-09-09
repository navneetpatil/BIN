#include<stdio.h>
#define SIZE 10
#include<conio.h>
void main()
{
int i,j;
int a[SIZE];
int swap;
printf("ENTER NO TO SORT");
scanf("%d",&a);
for(i=0;i<=10;i++)
for(j=0;j<=10;j++)
if(a[j]>a[j+1])
swap(a[j],a[j+1]);
for(i=0;i<10;i++)
printf("%d",a);
}