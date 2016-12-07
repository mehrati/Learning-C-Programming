#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM 3

int main() {


#if NUM == 1

    printf("NUM equal 1\n");

#elif NUM == 2

    printf("NUM equal 2\n");

#elif NUM == 3

    printf("NUM equal 3\n");

#else

    printf("some \n");

#endif

#undef NUM    //delete NUM

#ifndef NUM 

    printf("not exist NUM\n");

#endif


    return 0;
}
