#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

    char String[30] = "Debian Linux";
    int size = sizeof (char) * strlen(String);
    printf("%ld\n", size);
    
    return 0;
}
