#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

    FILE *pf;

    if (argc == 2) {
        pf = fopen(argv[1], "r");
    } else {
        printf("Enter path file \n");
        exit(0);
    }

    fseek(pf, 0, SEEK_END);
    int size = ftell(pf);
    printf("size %d bytes\n", size);
    fclose(pf);

    return 0;
}
