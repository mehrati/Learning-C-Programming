#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

char b1[18]="donya salam";
char b2[18]="salam";


int t=strcspn(b1,b2);

printf("%d\n",t);







return 0;
}
