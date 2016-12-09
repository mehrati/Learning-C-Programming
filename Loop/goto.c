#include <stdio.h>
#include <stdlib.h>

int main() {

    int count = 0;

lable:
    printf("%d\n", count);
    count++;
    if (count <= 100) goto lable;

    return 0;
}
