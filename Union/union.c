#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union names_u {
    char a[10];
    char b[10];
    char c[10];
} name;

int main() {

    strcpy(name.a, "ALI");
    printf("name.a = %s\n", name.a);

    strcpy(name.b, "GHOLI");
    printf("name.b = %s\n", name.b);
    printf("name.a = %s\n", name.a);

    strcpy(name.c, "HOSSEIN");
    printf("name.c = %s\n", name.c);
    printf("name.b = %s\n", name.b);

    return 0;

}
