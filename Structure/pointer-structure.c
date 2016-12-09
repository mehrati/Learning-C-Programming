#include <stdio.h>
#include <stdlib.h>

typedef struct var_s {
    int x;
    int y;
} var_t;

void print_val(var_t *var);

int main() {

    var_t *var = (var_t *)malloc(sizeof(var_t));
    var->x = 23;
    var->y = 63;
    print_val(var);
    free(var);
    return 0;
}

void print_val(var_t *var) {
    printf("var.x = %d \n", var->x);
    printf("var.y = %d \n", var->y);
}
