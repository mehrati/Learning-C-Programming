#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

char buffer[18]="HELLO I AM MAHDI";
char s='M';
int c=18;
void *p=memchr(buffer,s,c);


printf("%s\n",(char*)p);







return 0;
}
