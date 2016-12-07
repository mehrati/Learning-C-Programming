/* gcc fmod.c -o fmod  -lm*/
#include <stdio.h>
#include <math.h>

int main() {

    int num1 = 245;
    int num2 = 30;
    float result = fmod(num1, num2); //equal with -> float result = num1%num2;
    printf("%f\n", result);

    return 0;
}
