/* gcc sqrt.c -lm -o sqrt*/
#include <stdio.h>
#include <math.h>
int main ()
{
	// double sqrt(double x) returns the square root of x.
	printf("Square root of %d is %.1lf\n", 4, sqrt(4) );
	printf("Square root of %d is %.1lf\n", 9, sqrt(9) );
	
        return(0);
}
