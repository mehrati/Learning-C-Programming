#include<stdio.h>

int main() {

    long int decimal, remainder, quotient;

    int binary[100], i = 0;


    printf("Enter any decimal number :");

    scanf("%ld", &decimal);


    quotient = decimal;


    while (quotient != 0) {

        binary[i++] = quotient % 2;

        quotient = quotient / 2;

    }


    printf("dec %ld => bin ", decimal);

    for (int j = i - 1; j >= 0; j--) {

        printf("%d", binary[j]);
    }
    printf("\n");


    return 0;

}
