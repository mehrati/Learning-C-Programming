#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{

time_t rawtime;
char timestring[80];
time( &rawtime );
strftime(timestring,sizeof timestring,"%Y - %m - %d , %H:%M:%S",localtime(&rawtime));
printf("%s\n",timestring);

return 0;
}
