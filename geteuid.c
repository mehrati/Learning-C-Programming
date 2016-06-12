#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  

int main(){

        //uid root is 0

   if (geteuid() != 0)
      {

      printf("Must run as root !!!\n");

      exit(-1);
      }





return 0;
}
