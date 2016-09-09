#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
char uname[20],pswd[20],captcha[20];
printf("Enter user name:");
scanf("%s",&uname);
if(strcmp(uname,"navneet")==0)
printf("Eneter password:");
scanf("%s",&pswd);
if(strcmp(pswd,"Nano@123")==0);
printf("Enter captcha:");
scanf("%s",&captcha);
if(strcmp(captcha,"sillod")==0)
pritf("welcome");
else printf("invalid captcha");
}

