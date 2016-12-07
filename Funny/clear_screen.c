/* gcc clear_screen.c -o clear_screen -l termcap*/
#include <stdio.h>
#include <stdlib.h>
#include <termcap.h>

int main() {

    char buf[1024];
    char *str;

    tgetent(buf, getenv("TERM"));
    str = tgetstr("cl", NULL);
    fputs(str, stdout);
    // or system ("clear");

    return 0;
}
