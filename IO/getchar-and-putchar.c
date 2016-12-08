#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {

    int c;

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }


    return 0;
}


