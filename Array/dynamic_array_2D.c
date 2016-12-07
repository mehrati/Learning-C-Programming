#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int row = 10;
    int columns = 10;
    int count = 0;
    int **array = (int **) malloc(columns * sizeof (int *));
    for (int i = 0; i <= row; i++) {
        array[i] = (int *) malloc(sizeof (int));
    }

    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < row; j++) {
            array[i][j] = count;
            count++;
        }
    }

    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d \n", array[i][j]);
        }
    }

    free(array);

    return 0;
}
