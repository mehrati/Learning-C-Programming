#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <errno.h>
#include <pthread.h>

int main(int argc ,char **argv){

FILE *pf;

if (argc == 2)
{

pf=fopen(argv[1],"r");

}
else 
{
printf("Enter ./size_copy /path/namefile \n");
exit(0);

}

fseek(pf, 0L, SEEK_END);

int sz = ftell(pf);

fseek(pf, 0L, SEEK_SET);



printf("size %d bytes\n",sz);
fclose(pf);
return 0;
}
