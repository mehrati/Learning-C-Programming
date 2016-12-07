#include <stdio.h>
#include <stdlib.h>  

int main() {
    char c[16];
    FILE *fptr;
    fptr = fopen("mahdi.txt", "a+");
    fscanf(fptr, "%s", c);
    printf("%s", c);
    fclose(fptr);
    return 0;
}
