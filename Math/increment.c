#include <stdio.h>

int main() {

    int a = 10;
    int b = a++;
    int c = ++a;
    
    printf(" a=%d b=%d c=%d \n", a, b, c);

    return 0;
}
