#include <stdio.h>
#include <string.h>

void addone(int *n);

int main(int argc, char** argv) {
    
    int n = 10;
    printf("Before: %d\n", n);
    addone(&n);
    printf("After: %d\n", n);

    return 0;
}

void addone(int * n) {
    (*n)++;
}


