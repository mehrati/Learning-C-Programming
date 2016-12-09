#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct var_s {
    int i;
    float f;
    double d;
    long l;
    char c;
} var_t;


int main() {

    var_t *pvar = (var_t *) malloc(sizeof (var_t));
    pvar->i = 4576;
    pvar->f = 4576.8765;
    pvar->d = 4576.5336122;
    pvar->l = 4576L;
    pvar->c = 'c';
    printf("int %i \n", (*pvar).i); // or pvar->i
    printf("float %f \n", (*pvar).f);
    printf("double %f \n", (*pvar).d);
    printf("long %ld \n", (*pvar).l);
    printf("char %c \n", (*pvar).c);
    printf("sizeof(var_t) %ld \n", sizeof (var_t));
    printf("sizeof(pvar) %ld \n", sizeof (pvar));

    free(pvar);
    return 0;
}


