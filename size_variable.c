#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    bool b = true;
    int a;
    char str[6] = "mahdi";
    char *pc = (char *) malloc(6);
    int *pi;
    char s;
    int **pp;
    bzero(pc, 6);
    strcpy(pc, str);
    printf("size bool %ld\n", sizeof (b));
    printf("size int %ld\n", sizeof (a));
    printf("size int pointer %ld\n", sizeof (pi));
    printf("size char %ld\n", sizeof (s));
    printf("size char pointer %ld\n", sizeof (pc));
    printf("size element %c pointer %ld\n", *(pc + 0), sizeof (*(pc + 0)));
    printf("size pointer to pointer %ld\n", sizeof (pp));

    free(pc);

    return 0;

}
