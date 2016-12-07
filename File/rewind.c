#include <stdio.h>
#include <stdlib.h>
#include <string.h>  

int main() {

    FILE *fptr;
    char str[100];
    fptr = fopen("vim.txt", "r+");

    while (!feof(fptr)) {

        fgets(str, 100, fptr);
        printf("%s", str);
        bzero(str,100);
        /* Rewind to the beginning of STREAM.*/
        rewind(fptr);/*equal to -> fseek( fp, 0, SEEK_SET ); */
    }

    fclose(fptr);

    return (0);
}
