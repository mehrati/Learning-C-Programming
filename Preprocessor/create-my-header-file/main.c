#include "header.h"

int main() {

    extern int number;
    print_power(3,2);
    printf("external number = %d \n", number);

    return 0;
}
