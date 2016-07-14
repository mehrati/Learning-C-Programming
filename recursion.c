#include <stdio.h>
#include <stdlib.h>


void foo();

int num=100;
int main(){

foo();




return 0;
}



void foo(){
num--;

printf("%d\n",num);

if (num==0) exit(0);


foo();
}
