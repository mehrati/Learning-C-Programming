#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char str[2][15];
    strcpy(str[0], "Netbeans-IDE");
    strcpy(str[1], "Eclipse-IDE");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 15; j++) {
            printf("%c", str[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

