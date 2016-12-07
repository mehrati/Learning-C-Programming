
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct bit_field {

	int number :2; //2 bit memory
	unsigned int unumber :1; //1 bit memory
	char charecter :8; //8 bit memory

} b1;

int main() {

	b1.number= 1;
	printf("namber = %d\n", b1.number);

	b1.unumber = 1;
	printf("unamber = %d\n", b1.unumber);

	b1.charecter = 'x';
	printf("charecter = %c\n", b1.charecter);

	return 0;

}


