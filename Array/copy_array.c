#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_arr(int *arr,int len) ;

int main() {
    int len = 5;
    int i[len] = {1, 2, 3, 4, 5};
    int j[len];

    memcpy(j, i, sizeof(int) * len);
    print_arr(j,len);

    return 0;
}

void print_arr(int *arr,int len) {
    for (int i =0;i<len;i++) {
        printf("arr[%d] = %d \n", i,arr[i]);
    }
}
