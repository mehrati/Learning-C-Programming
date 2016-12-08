#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_string(char *str);

int main(int argc, char** argv) {

    int len = 100;
    char *string = malloc(sizeof(char) * len);
    char *str = "love Programming";
    sprintf(string, "Mahdi %s", str);
    print_string(string);
    free(string);
    
    return 0;
}

void print_string(char *str) {

    printf("%s\n", str);
}

