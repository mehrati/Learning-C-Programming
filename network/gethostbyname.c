#include<stdio.h> //printf
#include<string.h> //memset
#include<stdlib.h> //for exit(0);
#include<sys/socket.h>
#include<errno.h> //For errno - the error number
#include<netdb.h> //hostent
#include<arpa/inet.h>

int main(int argc , char *argv[])
{

   struct hostent *hs;

   struct in_addr **addr_list;

   if(argc == 2)
   {

   hs=gethostbyname(argv[1]);

   }
   else
   {
    printf("Enter hostname");
   }
   addr_list=(struct in_addr **)hs->h_addr_list;


   printf("ip address %s\n",inet_ntoa(*addr_list[0]));
   printf("h_length %d\n",hs->h_length);
   printf("h_name %s\n",hs->h_name);
   printf("h_addrtype %d\n",hs->h_addrtype);
   return 0;

}
