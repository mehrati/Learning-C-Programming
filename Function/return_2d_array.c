#include <stdio.h>
#include <stdlib.h>

void print_array(int **array, int col, int row);
int** aggregate_to_array(int **arr, int num, int col, int row);
int** malloc_2d_array(int columns, int rows);

int main(int argc, char** argv) {

    int **array;
    int count = 0;
    int rows = 5;
    int columns = 5;

    // allocate memory to matrix
    array = malloc_2d_array(columns, rows);

    // initialization memory to array 2D
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            array[i][j] = count;
            count++;
        }
    }
    int **array1 = aggregate_to_array(array, 10, columns, rows);
    print_array(array1, columns, rows);

    free(array);
    free(array1);
    return 0;
}

void print_array(int **array, int col, int row) {
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf("array[%d][%d] = %d \n", i, j, array[i][j]);
        }
    }
}

int** aggregate_to_array(int **arr, int num, int col, int row) {
    int **array = malloc_2d_array(col, row);
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            array[i][j] = arr[i][j] + num;
        }
    }
    return array;
}

int** malloc_2d_array(int columns, int rows) {
    int **array;
    array = (int **) malloc(columns * sizeof (int *));
    for (int i = 0; i < columns; i++) {
        array[i] = (int *) malloc(rows * sizeof (int));
    }
    return array;
}
