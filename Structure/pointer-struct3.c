#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct var_s {
    int *x;
} var_t;

void print_arr(int *arr, int len);

int main() {

    int len = 5;
    int i[5] = {1, 2, 3, 4, 5};

    var_t *var;
    var->x = (int *) malloc(sizeof (int) * len);
    memcpy(var->x, i, sizeof (int) * len);
    print_arr(var->x, len);
    printf("sizeof(var) = %d \n",(int)sizeof(var));

    free(var->x);
    return 0;
}

void print_arr(int *arr, int len) {
    for (int i = 0; i < len; i++) {
        printf("arr[%d] = %d \n", i, arr[i]);
    }
}

