#include <stdio.h>
#include <stdlib.h>
#include <string.h>  

int main() {

    char ch[100];
    FILE *fptr;

    fptr = fopen("file.txt", "r+");
    while (feof(fptr) == 0) {
        fscanf(fptr, "%s", ch);
        printf("%s", ch);
        bzero(ch,100);
    }

    fclose(fptr);

    return 0;
}
