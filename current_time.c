#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main(){

 time_t c_time;

 system ("clear");

while(1)
{

 time(&c_time);

 printf("%s\n",ctime(&c_time));

 sleep(1);

 system ("clear");

}

return 0;
}
