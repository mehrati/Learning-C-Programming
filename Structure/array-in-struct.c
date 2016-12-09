#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct var_s {
    int x[5];
} var_t;

void print_arr(int *arr, int len);

int main() {
    int len = 5;
    int i[5] = {1, 2, 3, 4, 5};

    var_t *var = (var_t *) malloc(sizeof (var_t));
    memcpy(var->x, i, sizeof (var_t));
    print_arr(var->x, len);

    free(var);
    return 0;
}

void print_arr(int *arr, int len) {
    for (int i = 0; i < len; i++) {
        printf("arr[%d] = %d \n", i, arr[i]);
    }
}
