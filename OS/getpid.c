#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  

int main() {

    int pid = getpid();
    printf("Process ID = %d \n", pid);

    return 0;
}
