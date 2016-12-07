#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main(){

 time_t r_time;

 system ("clear");

while(1)
{

 time(&r_time);

 printf("%s\n",ctime(&r_time));

 sleep(1);

 system ("clear");

}

return 0;
}
