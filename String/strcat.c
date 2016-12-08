#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_string(char *str);

int main(int argc, char** argv) {

    
    char string[20] = "lazy yellow ";
    strcat(string,"cat");
    print_string(string);
    
    return 0;
}

void print_string(char *str) {

    printf("%s\n", str);
}

