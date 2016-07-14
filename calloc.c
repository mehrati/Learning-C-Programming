#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){


int *pc;

pc=calloc(10,4);

for (int i= 0;i < 10 ;i++) {

    if( i%2 == 0) {
        pc[i]= i;
    }

}

for (int i= 0;i < 10 ;i++) {

    printf("pc=%d\n",pc[i]);

}

free(pc);

return 0;
}
