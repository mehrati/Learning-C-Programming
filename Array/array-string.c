#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char str[5][15];
    array_str_init(str, 5);
    printf("%s \n", str[1]);

    return 0;
}

void array_str_init(char str[][15], int len) {
    for (int i = 0; i < len; i++) {
        strcpy(str[i], "FireFoxBrowser");
        printf("init index %d %s \n", i, str[i]);
    }
}
