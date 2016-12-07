#include <stdio.h>    //printf
#include <string.h>   //strncpy
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <net/if.h>   //ifreq
#include <unistd.h>   //close

int main()
{
    unsigned char *str;
    str=calloc(18,1);
    int fd;
    struct ifreq ifr; //Interface request structure
    char *iface = "enp3s0"; //Interface name
    unsigned char mac[6];

    fd = socket(AF_INET, SOCK_DGRAM, 0);

    ifr.ifr_addr.sa_family = AF_INET;
    strncpy(ifr.ifr_name , iface , IFNAMSIZ-1);

    ioctl(fd, SIOCGIFHWADDR, &ifr);

    close(fd);

    //mac = (unsigned char *)ifr.ifr_hwaddr.sa_data;


    strcpy(mac,(unsigned char *)ifr.ifr_hwaddr.sa_data);
    printf("%ld\n",sizeof ((unsigned char *)ifr.ifr_hwaddr.sa_data));
    printf("%ld\n",sizeof mac);
    //display mac address
    //printf("Mac : %.2x:%.2x:%.2x:%.2x:%.2x:%.2x\n" , mac[0], mac[1], mac[2], mac[3], mac[4], mac[5]);
     for (int i=0; i<6; i++) {
		sprintf (&str[i*3], "%.2x%s", mac[i], i < 5?":":"");
     }
    return 0;
}
