#include <stdio.h>
#include <unistd.h>  
#include <stdlib.h>  /* For exit() function */
int main() {

    /* uid root user is 0 */

    if (geteuid() != 0) {

        printf("Must run as root !!!\n");

        exit(-1);
    }

    return 0;
}
