#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char ch;
	clrscr();
	printf("Enter a character:");
	ch=getchar();
	if(is alpha(ch))
	{
		ch=tolower(ch);
		switch(ch)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
		printf("Vowel");
		break;
		default:
		printf("Consonant");
		}
	}
	else if(isdigit(ch))
	printf("Digit");
	else printf("Special character");
	getch();
}
