#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // chdir

int main(int argc, char *argv[]) {

    if (argc == 2) chdir(argv[1]);

    return 0;
}
