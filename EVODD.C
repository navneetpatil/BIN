#include<stdio.h>
//#include<conio.h>
int main()
{
	int n,a=1,osum=0,esum=0;
//clrscr();
printf("Enter a no ");
scanf("%d",&n);
me:
	if(a%2==0) esum=esum+a;
	else osum=osum+a;
	a++;
	if(a<=n) goto me;
	printf("Odd sum is :%d",osum);
	printf("\nEven sum is:%d",esum);
//getch();
}
