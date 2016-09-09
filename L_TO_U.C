#include<stdio.h>
#define SIZE 20
main()
{
char letter[SIZE];
int count;
/*read in the line*/
for(count=0;count<SIZE;++count)
letter[count]=getchar();
for(count=0;count<SIZE;++count)
putchar(toupper(letter[count]));
}