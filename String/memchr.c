#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int N = 6;
    char String[30] = "Good Computer World";
    char ch = 'C';
    int size = sizeof (char) * strlen(String);
    
    /* Search N bytes of String for ch.  */
    if (N <= size) {
        void *p = memchr(String, ch, 10);
        printf("%s\n", (char*) p);
    }


    return 0;
}
