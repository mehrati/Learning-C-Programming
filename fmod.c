/* gcc fmod.c -o fmod  -lm*/
#include <stdio.h>
#include <math.h>

int main(){

int num1=2435;
int num2=3;
float result=fmod(num1,num2);//equla with -> float result = num1%num2;
printf("%f\n",result);


return 0;
}
