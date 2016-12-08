#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {

    char string1[] = "Hello World 1";
    char *string2 = "Hello World 2";
    printf("%s\n", string1);
    printf("%s\n", string2);
    printf("%c\n", string1[2]); // get character of string
    printf("%ld\n", strlen(string2)); // get length of string
    return 0;
}




