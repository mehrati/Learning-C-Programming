#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
int main(int argc,char *argv[]){

   char cwd[100];

   if (getcwd(cwd, sizeof(cwd)) != NULL){

       printf("Current working dir: %s\n", cwd);
     }
   else{

       perror("getcwd() error");
     }

return 0;
}
