#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int **matrix;
    int count = 0;
    int rows = 10;
    int columns = 10;
    // allocate memory to matrix
    matrix = (int **) malloc(columns * sizeof (int *));
    for (int i = 0; i < columns; i++) {
        matrix[i] = (int *) malloc(rows * sizeof (int));
    }

    // initialization memory to array 2D
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            matrix[i][j] = count;
            count++;
        }
    }
    // print array
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            printf(" matrix[%d][%d] = %d \n", i, j, matrix[i][j]);
        }
    }



    free(matrix);
    return 0;
}

