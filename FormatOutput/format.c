#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a = 10;
    float f = 457.4426739;
    char *s = "THE BIG STORY";
    // %d or %i decimal integer
    // \n represent newline
    printf("decimal number: %d\n", a);
    // %6d decimal with a width of at least 6 wide
    printf("decimal number: %6d\n", a);
    //%f floating point 
    printf("Float number: %f\n", f);
    //%.4f floating point with a precision of four characters 
    printf("Float number: %.4f\n", f);
    //%3.2f floating point at least 3 wide and a precision of 2)
    printf("Float number: %3.2f\n", f);
    // %s prints the string 
    printf("The color: %s\n", s);
    // %s prints the Hexadecimal 
    printf("Hexadecimal: %x\n", 255);
    // %s prints the Octal 
    printf("Octal: %o\n", 255);
    // %s prints the Unsigned value 
    printf("Unsigned value: %u\n", 150);
    // %s prints the percentage sign
    printf("print the percentage sign %%\n");


    return 0;
}


