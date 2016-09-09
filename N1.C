#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
	void main()
	{
	clrscr();
	start:
	textcolor(random(16));
	textbackground(random(16));
	cprintf("Navneet\n");
	goto start;

	}