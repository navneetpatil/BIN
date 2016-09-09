#include<stdio.h>
int main()
{
int i,n;
printf("Enter a No:");
scanf("%d",&n);
printf("%d factors:",n);
for(i=1;i<=n;i++)
{
	if(n%i==0)
	printf("%4d",i);

}
}

