#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PI 3.14
#define SQUARE(num) (num * num)
#define AREA(r) (r * r * PI)

int main(){

int r=34;

printf("SQUARE %i = %d \n",r,SQUARE(r));

printf("AREA %i = %f \n",r,AREA(r));



return 0;
}
