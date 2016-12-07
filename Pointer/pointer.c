#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int *pointer;
    int value = 25;
    printf("value : %d \n", value);
    pointer = &value;
    printf("pointer = &value; value : %d and pointer : %d \n", value, *pointer);
    value++; 
    printf("value++; value : %d and pointer : %d \n", value, *pointer);
    (*pointer)++;
    printf("(*pointer)++; value : %d and pointer : %d \n", value, *pointer);
    return 0;
}

