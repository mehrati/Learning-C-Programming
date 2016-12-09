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

    var_t var, *pvar;
    var.i = 4576;
    var.f = 4576.8765;
    var.d = 4576.5336122;
    var.l = 4576L;
    var.c = 'c';
    pvar = &var;
    printf("int %i \n", (*pvar).i); // or pvar->i
    printf("float %f \n", pvar->f);
    printf("double %f \n", (*pvar).d);
    printf("long %ld \n", (*pvar).l);
    printf("char %c \n", (*pvar).c);
    printf("sizeof(var) %ld \n", sizeof(var));
    printf("sizeof(pvar) %ld \n", sizeof(pvar));
    
    
    return 0;
}

