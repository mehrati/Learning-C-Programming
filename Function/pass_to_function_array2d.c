#include <stdio.h>
#include <stdlib.h>

void print_2D_array(int **array, int col, int row);

int main(int argc, char** argv) {

    int **array;
    int count = 0;
    int rows = 10;
    int columns = 10;
    
    // allocate memory to matrix
    array = (int **) malloc(columns * sizeof (int *));
    for (int i = 0; i < columns; i++) {
        array[i] = (int *) malloc(rows * sizeof (int));
    }

    // initialization memory to array 2D
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            array[i][j] = count;
            count++;
        }
    }
    print_2D_array(array, columns, rows);
    
    free(array);
    return 0;
}

void print_2D_array(int **array, int col, int row) {
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf("array[%d][%d] = %d \n", i, j, array[i][j]);
        }
    }
}

