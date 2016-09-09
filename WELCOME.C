#include<stdio.h>
#include<string.h>
int main()
{
char uname[20],pswd[20],captcha[20];
printf("Enter user name:");
scanf("%s",&uname);
if(strcmp(uname,"navneet")==0) 
{
	printf("Eneter password:");
	scanf("%s",&pswd);
	if(strcmp(pswd,"123")==0)
	{
		printf("Enter captcha:");
		scanf("%s",&captcha);
		if(strcmp(captcha,"sillod")==0) printf("welcome!!!");
		else printf("Invalid captcha!!!");
    }
	
	else printf("Invalid Password!!!");
}
	else printf("Invalid username!!");
}
	



