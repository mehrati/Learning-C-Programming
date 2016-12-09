#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char str1[3][8] = {"Linux", "OpenBSD", "FreeBSD"};
    char str2[][8] = {"Linux", "OpenBSD", "FreeBSD"};
    char *str3[8] = {"Linux", "OpenBSD", "FreeBSD"};
    char *str4[] = {"Linux", "OpenBSD", "FreeBSD"};
   
    printf("sizeof(str1) = %ld \n", sizeof(str1));
    printf("sizeof(str2) = %ld \n", sizeof(str2));
    printf("sizeof(str3) = %ld \n", sizeof(str3));
    printf("sizeof(str4) = %ld \n", sizeof(str4));
    
    return 0;
}

