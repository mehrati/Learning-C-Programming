#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    int **matrix;
    int **array;
    int count = 0;
    int rows = 5;
    int columns = 5;
    // allocate Memory to matrix
    matrix = (int **) malloc(columns * sizeof(int *));
    for(int i=0;i < columns; i++){
        matrix[i] = (int *) malloc(rows * sizeof(int));
    }
    // allocate Memory to array 2D
    array = (int **) malloc(columns * sizeof(int *));
    for(int i=0;i < columns; i++){
        array[i] = (int *) malloc(rows * sizeof(int));
    }
    // initialization Memory to array 2D
    for(int i=0;i < columns; i++){
        for(int j=0;j < rows; j++){
        array[i][j] = count;
        count++;
    }
    }
    //copy array to matrix
    memcpy(matrix,array,sizeof(int)*columns*rows);
    
    printf("Number matrix[%d][%d] = %d ",4,4,matrix[4][4]);
    
    free(matrix);
    free(array);
    return 0;
}

