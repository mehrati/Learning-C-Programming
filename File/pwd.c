#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

int main(int argc, char *argv[]) {

    char cwd[100];

    if (getcwd(cwd, sizeof (char) * 100) != NULL) {

        printf("Current working directory: %s\n", cwd);

    } else {

        perror("Error!");
    }

    return 0;
}
