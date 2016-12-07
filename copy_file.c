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


int main(int argc , char **argv){


if (argc != 2) {
printf("Error");
exit(0);
}

FILE *fp;
char ch;
FILE *fpw;


if((fp = fopen(argv[1],"rb"))==NULL) {
printf("Cannot open Source file.\n");
exit(1);
}

fpw = fopen("file_(copy).jpg","wb");

while((ch = fgetc( fp )) != EOF) {

fputc(ch, fpW);
}

fclose(fp);
fclose(fpw);

return 0;
}
