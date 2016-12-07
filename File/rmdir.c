#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h> 
#include <dirent.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    char buffer[100];
    memset(buffer, 0, sizeof (char) * 100);
    if (argc == 2) {
        strcpy(buffer, argv[1]);
    } else {
        printf("Enter directory \n");
    }

    int result = rmdir(buffer);
    
    if (result >= 0) {
        printf("Ok removed!\n");
    } else {
        printf("not removed!!!\n");
    }

    return 0;
}
