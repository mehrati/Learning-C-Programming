
#include <stdio.h>
#include <stdlib.h>
#include <termcap.h>
int main(){

int a=0;

lable:


printf("%d\n",a);
a++;


if(a<100) goto lable;



return 0;
}
