#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>//mkdir
#include <sys/stat.h> //mkdir
#include <unistd.h>

int main(int argc,char *argv[]){

int mod_rwx=0755;// S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH

char buffer[100];

memset(buffer,0,sizeof(buffer));
if(argc==2){

strcpy(buffer,argv[1]);

}
else{
printf("Enter Name Directory or Full Path Direcory \n");
}

int a=mkdir(buffer,mod_rwx);


if(a>=0){

    printf("Ok maked!!!\n");
}
else{
    printf("cannot make!!!\n");
}









return 0;
}
