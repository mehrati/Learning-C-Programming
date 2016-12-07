/* gcc clearscreen.c -o clearscreen -l termcap*/
#include <stdio.h>
#include <stdlib.h>
#include <termcap.h>
int main(){

char buf[1024];
char *str;

tgetent(buf, getenv("TERM"));
str = tgetstr("cl", NULL);
fputs(str, stdout);
//system ("clear");

return 0;
}
