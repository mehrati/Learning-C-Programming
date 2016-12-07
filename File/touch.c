#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

int main(int argc, char *argv[]) {


    char name[10];
    char cwd[40];
    FILE *pf;

    if (argc == 2) {

        strcpy(name, argv[1]);

        if (getcwd(cwd, sizeof (cwd)) != NULL) {

            char str[100];

            sprintf(str, "%s/%s", cwd, name);

            pf = fopen(str, "w");

            printf("%s", str);

        } else {
            perror("error");
        }
    } else {
        printf("Enter name file");
    }

    fclose(pf);
    return 0;
}
