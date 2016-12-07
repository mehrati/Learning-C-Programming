#include <stdio.h>

int main() {
    FILE *stream;
    char ch;
    stream = fopen("note.txt", "r");
    while (feof(stream) == 0) {

        ch = getc(stream);
        printf("%c", ch);
    }

    fclose(stream);
    return 0;
}
