#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int string_length(char str[]);

int main(int argc, char** argv) {

    char str[] = "My Dog Very Big";
    printf("%d \n", string_length(str));
    
    return 0;
}

int string_length(char str[]) {
    int i = 0;
    while (str[i] != '\0')
        ++i;
    return i;
}


