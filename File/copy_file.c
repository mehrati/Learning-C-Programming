#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {

    FILE *fpr;
    FILE *fpw;
    char ch;
    
    if (argc != 2) {
        printf("Error");
        exit(0);
    }

    if ((fpr = fopen(argv[1], "rb")) == NULL) {
        printf("Cannot open Source file.\n");
        exit(1);
    }

    fpw = fopen("file_copy", "wb");

    while ((ch = fgetc(fpr)) != EOF) {

        fputc(ch, fpw);
    }

    fclose(fpr);
    fclose(fpw);

    return 0;
}
