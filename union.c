#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union status{

int a;
char b[10];
char c[10];


}s1;


int main(){

s1.a=230;

printf("a=%d\n",s1.a);

strcpy(s1.b,"hassan");

printf("b=%s\n",s1.b);

strcpy(s1.c,"ali");

printf("c=%s\n",s1.c);

printf("b=%s\n",s1.b);





return 0;

}
