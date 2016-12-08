#include <stdio.h>
#include <stdlib.h>

void print_2D_array(int array[][2], int col, int row);

int main(int argc, char** argv) {

    /* or array[][2]*/
    int array[5][2] = {
        {2, 4},
        {6, 8},
        {10, 12},
        {14, 16},
        {18, 20}};
    int total_len = (sizeof (array) / sizeof (array[0][0]));
    int col_len = (sizeof (array) / sizeof (array[0]));
    int row_len = (sizeof (array[0]) / sizeof (array[0][0]));
    print_2D_array(array, col_len, row_len);

    return 0;
}

void print_2D_array(int array[][2], int col, int row) {
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf("array[%d][%d] = %d \n", i, j, array[i][j]);
        }
    }
}

