#include <stdio.h>
#include <stdlib.h>

void print_array(int array[], int len);

int main(int argc, char** argv) {

    int array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int len1 = (sizeof (array1) / sizeof (array1[0]));
    int len2 = (sizeof (array2) / sizeof (array2[0]));
    print_array(array1,len1);
    print_array(array2,len2);

    return 0;
}

void print_array(int array[], int len) {
    for (int i = 0; i < len; i++) {

        printf("array[%d] = %d\n", i, array[i]);

    }
}

