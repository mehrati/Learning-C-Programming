#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {

    char str[40] = "freeBSD Operating System";
    FILE *pf;

    pf = fopen("freeBSD.md", "w+");
    fwrite(str, sizeof (str), 1, pf);
    fclose(pf);

    return (0);
}
