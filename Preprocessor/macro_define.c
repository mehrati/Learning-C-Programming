#include <stdio.h>

#define MIN(x,y) ((x)<(y)?(x):(y))
#define MULT(x,y) (x*y)
#define INT_TO_STR(INT) ( #INT)
#define ME "I AM MAHDI"

int main() {

    printf("%d\n", MIN(34, 56));
    printf("%d\n", MULT(34, 56));
    printf("%s\n", INT_TO_STR(34));

#ifdef ME
    printf("yes defined ME macro \n");
    printf("%s\n", "Hello "ME);
#endif

#ifndef STRING
#define STRING "Iranian Good Pepole "
#endif
    printf(STRING);

    return 0;
}
