#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM 3

int main(){


#if NUM == 1

printf("eq 1\n");

#elif NUM == 2

printf("eq 2\n");

#elif NUM == 3

printf("eq 3\n");

#else

printf("not eq \n");

#endif

#undef NUM    //delete NUM

#ifndef NUM 

printf("not exist NUM\n");  

#endif


return 0;
}
