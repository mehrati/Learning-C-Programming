#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char String1[20] = "Linux System";
    printf("String1 = %s \n", String1);
    
    char *String2 = "GitHub";
    printf("String2 = %s \n", String2);
    
    char *String3;
    String3 = String2;
    printf("String3 = %s\n", String3);
    
    char *Sub_String1 = &String1[5];
    printf("Sub_String1 = %s\n", Sub_String1);
    
    printf("char_of_String1 = %c\n", String1[0]);
    printf("char_of_String1 = %c\n", *String1);
    return 0;

}
