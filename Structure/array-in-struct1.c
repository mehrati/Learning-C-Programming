#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct var_s {
    int *arr;
} var_t;

void print_arr(int *arr, int len);

int main() {
    int len = 5;
    int i[len] = {1, 2, 3, 4, 5};
    var_t *var;
    var->arr = (int*) malloc(sizeof (int) *len);
    memcpy(var->arr, i, sizeof (int) *len);
    printf("%d \n", var->arr[0]);
    print_arr(var->arr, len);
    free(var->arr);
    return 0;
}

void print_arr(int *arr, int len) {
    for (int i = 0; i < len; i++) {
        printf("arr[%d] = %d \n", i, arr[i]);
    }
}


