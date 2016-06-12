#include <stdio.h>
#include <unistd.h> //sleep function -> unistd.h 
#include <stdlib.h>//atoi function ->stdlib.h
int main(int argc,char *argv[]){


if(argc==2){
  
  int num;
  char str[5];
  num=atoi(argv[1]);
  sleep(num);
}

return 0;
}
