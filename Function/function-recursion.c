#include <stdio.h>
#include <stdlib.h>

void function_recursion(int counter);

int main(int argc, char** argv) {

    function_recursion(100);

    return 0;
}

void function_recursion(int counter) {

    counter--;
    printf("counter = %d \n", counter);

    if (counter == 0) {
        exit(0);
    } else {
        function_recursion(counter);
    }

}
