#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {

    int *p;

    pc = calloc(10, sizeof(int));

    for (int i = 0; i < 10; i++) {

        if (i % 2 == 0) {
            p[i] = i;
        }

    }

    for (int i = 0; i < 10; i++) {

        printf("p = %d\n", p[i]);

    }

    free(p);

    return 0;
}



