#include<stdio.h>
int main()
{
int i;
printf("Enter a number 1,2,3,4 ");
scanf("%d",&i);
switch(i)
{
	case 1:
		printf("One");
		goto exit;
	case 2:
		printf("Two");
		goto exit;
	case 3:
		printf("three");
		goto exit;
	case 4:
		printf("four");
		goto exit;
	default:
		printf("Enetr valid input");
		break;
}
exit:
	printf("\nExited group");
}

