/*gcc pow.c -lm -o pow*/
#include <stdio.h>
#include <math.h>
int main ()
{       
	printf("8 ^ 3 = %.1lf\n", pow(8,3));
	printf("3 ^ 9 = %.1lf\n", pow(3,9));

	return(0);
}
