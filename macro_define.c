#include <stdio.h>

#define MIN(x,y) ((x)<(y)?(x):(y))
#define MULT(x,y) (x*y)
#define INT_TO_STR(INT) ( #INT)
#define W "WORLD"

int main(){

printf("%d\n",MIN(34,56));
printf("%d\n",MULT(34,56));
printf("%s\n",INT_TO_STR(34));
printf("%s\n","HELLO "W);
#ifdef W
printf("yes defined W macro\n");
#endif

#ifndef W
#define W "my pepole"
#endif
printf("%s\n","HELLO "W);




return 0;
}
