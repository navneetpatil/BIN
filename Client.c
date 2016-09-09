#include<stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<string.h>
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
	int clientSocket,portNum,bytes;
	char buffer[1024];
	struct sockaddr_in serverAddr;
	socklen_t addr_size;
	printf("Enter IP Header:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&buff[i]);
	}
	buff[5]=0x0000;
	clientSocket=socket(AF_INET,SOCK_DGRAM,0);
	serverAddr.sin_family=AF_INET;
	serverAddr.sin_port=htons(7891);
	serverAddr.sin_addr.s_addr=inet_addr("127.0.0.1");
	memset(serverAddr.sin_zero,'\0',sizeof serverAddr.sin_zero);
	addr_size=sizeof severAddr;
	checks=chksm(buff);
	buff[5]=checks;
	sendto(clientSocket,buff,sizeof(buff),0,(struct sockaddr*)&serverAddr,addr_size);
	return 0;
}
