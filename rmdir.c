#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h> 
#include <dirent.h>
#include <unistd.h>

int main(int argc,char *argv[]){

char buffer[100];

memset(buffer,0,sizeof(buffer));
if(argc==2){

strcpy(buffer,argv[1]);

}
else{
printf("Enter Name Directory or Full Path Direcory \n");
}

int a=rmdir(buffer);


if(a>=0){

    printf("Ok maked!!!\n");
}
else{
    printf("cannot make!!!\n");
}









return 0;
}
