/* gcc effect_funny.c -o effect_funny.c -l termcap*/
#include <stdio.h>
#include <stdlib.h>
#include <termcap.h>
#include <unistd.h>

int main() {

    char buf[1024];
    char *str;
    while (1) {
        tgetent(buf, getenv("TERM"));
        str = tgetstr("cl", NULL);
        fputs(str, stdout);

        printf("/");
        sleep(0.9);
        tgetent(buf, getenv("TERM"));
        str = tgetstr("cl", NULL);
        fputs(str, stdout);

        printf("-");
        sleep(0.9);
        tgetent(buf, getenv("TERM"));
        str = tgetstr("cl", NULL);
        fputs(str, stdout);

        printf("\\");
        sleep(0.9);
    }



    return 0;
}
