#include <stdio.h>
#include <unistd.h> // => sleep function 
#include <stdlib.h> // => atoi function 

int main(int argc, char *argv[]) {
    int num;
    
    if (argc == 2) {
        num = atoi(argv[1]);
        sleep(num);
    }

    return 0;
}
