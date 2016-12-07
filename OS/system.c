#include <stdio.h>
#include <stdlib.h>// system()

int main() {
    
    char command[40] = "ls -ltrh";
    system(command);

    return 0;
}
