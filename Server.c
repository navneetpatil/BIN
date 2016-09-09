#include<stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<string.h>
#include<stdlib.h>
int chksm(int buff[])
{
	int chksm=0,i=0;
	for(i=0;i<10;i++)
	{
		chksm+=buff[i];
	}
	chksm=(chksm>>16)+(chksm & 0xffff);
	chksm+=(chksm>>16);
	chksm=0xffff-chksm;
	printf("Checksum=%04x\n",chksm);
	return chksm;
}
int main()
{
	int i,checks,buff[10];
	int sockudp,bytes;
	char buffer[1024];
	struct sockaddr_in serverAddr,clientAddr;
	struct sockaddr_storage serverStorage;
	socklen_t addr_size,client_addr_size;
	sockudp=socket(AF_INET,SOCK_DGRAM,0);
	serverAddr.sin_family=AF_INET;
	serverAddr.sin_port=htons(7891);
	serverAddr.sin_addr.s_addr=inet_addr("127.0.0.1");
	memset(serverAddr.sin_zero,'\0',sizeof serverAddr.sin_zero);
	bind(sockudp,(struct sockaddr*)&severAddr,sizeof(serverAddr));
	bytes=recvfrom(sockudp,buff,sizeof(buff),0,(struct sockaddr*)&serverStorage,&addr_size);
	printf("IP Header received:");
	for(i=0;i<10;i++)
	printf("%04x",buff[i]);
}
checks=chksm(buff);
if(ckecks==0x0000)printf("\n No Error..\n");
else printf("Error..");
return 0;
}
