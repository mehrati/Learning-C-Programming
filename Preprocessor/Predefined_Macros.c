#include <stdio.h>

int main(){
printf("File :%s\n", __FILE__ );
printf("Date :%s\n", __DATE__ );
printf("Time :%s\n", __TIME__ );
printf("Line :%d\n", __LINE__ );
printf("ANSI :%d\n", __STDC__ );//if eq to 1 standard or eq to 0 not standard c lang
printf("TIME&DATE :%s\n", __TIMESTAMP__ );




return 0;
}
