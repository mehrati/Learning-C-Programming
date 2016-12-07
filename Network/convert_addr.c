#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <netinet/ip.h>
#include <netinet/ip_icmp.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>


struct sockaddr_in si;


int main(){

    //si.sin_addr.s_addr=inet_addr("192.168.1.1");

    inet_aton("192.168.1.1",&si.sin_addr.s_addr);

    si.sin_family=AF_INET;//ipV4

    si.sin_port=htons(8008);

    char *a;

    a=inet_ntoa(si.sin_addr);

    printf("%ld\n",si.sin_addr);

    printf("%s\n",a);

    printf("%d\n",ntohs(si.sin_port));




return 0;
}

