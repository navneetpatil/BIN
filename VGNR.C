/*Program for Vignere cipher: */
#include<stdio.h>
#include<string.h>
int main()
{
{
int i,c,x,n,v;
char p[20];
char k[20];
char e[20];
char d[20];
//char v[20]
printf("\n Enter the plain text: \n");
gets(p);
printf("\n Enter the key text: \n");
gets(k);
n=strlen(k);
v=strlen(p);
//char e[v];
//char d[v];
for(i=0;i<strlen(p);i++)
{
x=k[i%n];
c=p[i];
c=(c+x)%123;
if(c<'a')
c=c+26;
e[i]=(char)c;
}
e[v]=' ';
printf("\nEncrypted message is :%s \n",e);
for(i=0;i<strlen(e);i++)
{
x=k[i%n];
c=e[i];
c=(c-x)%123;
if(c<'a')
c=c+123;
if(c>'z')
c=c-26;
d[i]=(char)c;
}
d[v]=' ';
printf(" \n Decrypted message is: %s \n",d);
}
return 0;
}
		 /*
Output:
E:\>gcc c.c
E:\>a.exe
Enter the plain text:
nitesh
Enter the key text:
nicky
Encrypted msg is :
decrypted msg is:*/