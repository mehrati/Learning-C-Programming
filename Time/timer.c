#include <time.h>
#include <stdio.h>

int main(){

clock_t start, end;

double cpu_time_used;

start = clock();

for(int i=0;i<1000000000;i++);
 /* Do the work. */

end = clock();

cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;



printf("the is : %0.2f\n ",cpu_time_used );










return 0;
}
