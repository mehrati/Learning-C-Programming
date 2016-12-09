#include "header.h"

int main() {

    extern int num;

    func();
    printf("extern num = %d\n", num);

    return 0;
}
