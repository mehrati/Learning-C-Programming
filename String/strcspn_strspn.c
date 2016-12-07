#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char String[20] = "HELLO GREAT IRAN";
    char S1[10] = "G";

    int find1 = strcspn(String,S1);
    /* Return the length of the initial segment of String which
   consists entirely of characters in S1.  */
    printf("%d\n", find1);

    char S2[10] = "HELLO";
    int find2 = strspn(String, S2);
    /* Find the first occurrence in String of any character in S2 .  */
    printf("%d\n", find2);
    return 0;
}
