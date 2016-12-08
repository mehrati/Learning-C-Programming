#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char** argv) {

    bool t = true, f = false;

    printf("The value of true is: %d\n", t);
    printf("The value of false is: %d\n", f);
    printf("The value of (t == f) is: %d\n", (t == f));
    printf("The value of (t == t) is: %d\n", (t == t));

    return 0;
}


