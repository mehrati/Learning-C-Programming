#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct status{

int a:2;//2bit
unsigned int b:1;//1bit
char c:8;//8bit


}s1;


int main(){

s1.a=1;

printf("a=%d\n",s1.a);
s1.b=0;

printf("a=%d\n",s1.b);
s1.c='x';

printf("b=%c\n",s1.c);





return 0;

}
