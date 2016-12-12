#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *x, int *y);

int main() {
    int x = 50, y = 100;
    printf("before swap: x = %d y = %d\n", x, y);
    swap(&x, &y);
    printf("after swap: x = %d y = %d\n", x, y);

    return 0;
}

void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

