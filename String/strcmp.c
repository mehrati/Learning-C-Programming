
#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char str1[30]="mahdi";
char str2[30]="ali";

int main(){

int n=6;

int result=strncmp(str1,str2,n);//strcmp(str1,str2);

if(result==0){
printf("equal string\n");
}
else{

printf("not equal string \n");
}



return 0;
}
