#include <stdio.h>
#include <ctype.h>

int main() {

    char c = 'r';

    printf("toupper %c\n", toupper(c));
        
    printf("tolower %c\n", tolower(c));

    printf("isxdigit %d\n", isxdigit(c));

    printf("isupper %d\n", isupper(c));

    printf("isspace %c\n", isspace(c));

    printf("ispunct %c\n", ispunct(c));

    printf("isprint %c", isprint(c));

    printf("isgraph %c\n", isgraph(c));

    printf("islower %c\n", islower(c));

    printf("isdigit %c\n", isdigit(c));

    printf("iscntrl %c\n", iscntrl(c));

    printf("isascii %d\n", isascii(5));

    printf("isalpha %c\n", isalpha(c));

    printf("isalnum %c\n", isalnum(c));



    return 0;

}
