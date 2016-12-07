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





int size_file(char *path){

FILE *pf;
pf=fopen(path,"r");
fseek(pf, 0L, SEEK_END);
int sz = ftell(pf);
fseek(pf, 0L, SEEK_SET);
fclose(pf);

  return sz;
}





int main(int argc , char **argv){


if (argc != 2) {
printf("Error");
exit(0);
}

FILE *fp;
FILE *fpw;


if((fp = fopen(argv[1],"rb"))==NULL) {
printf("Cannot open Source file.\n");
exit(1);
}

fpw = fopen("file_(copy).jpg","wb");

int zs = size_file(argv[1]);

char *ch_read=malloc(zs);
fread(ch_read,sizeof (char),zs,fp);
fflush(fp);
fwrite(ch_read,sizeof (char),zs,fpw);





fclose(fp);
fclose(fpw);
free(ch_read);


return 0;
}
