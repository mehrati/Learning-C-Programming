/* gcc ceil.c -lm -o ceil*/
#include <stdio.h>
#include <math.h>

int main ()
{       //double ceil(double x) returns the smallest integer value greater than or equal to x.
	float value1, value2, value3, value4;
	value1 = 1.6;
	value2 = 1.2;
	value3 = 2.8;
	value4 = 2.3;
	printf ("value1 = %.1lf\n", ceil(value1));
	printf ("value2 = %.1lf\n", ceil(value2));
	printf ("value3 = %.1lf\n", ceil(value3));
	printf ("value4 = %.1lf\n", ceil(value4));

        return(0);
}
