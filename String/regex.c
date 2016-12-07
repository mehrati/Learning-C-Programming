#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <regex.h>

int main() {

    regex_t regex;
    int ret;
    char msg[100];

    /* Compile regular expression */
    ret = regcomp(&regex, "^ab$", 0);
    //int regcomp(regex_t *preg, const char *regex, int cflags);
    if (ret) {
        fprintf(stderr, "Could not compile regex\n");
        exit(1);
    }

    /* Execute regular expression */
    ret = regexec(&regex, "ab", 0, NULL, 0);
    //int regexec(const regex_t *preg, const char *string, size_t nmatch,regmatch_t pmatch[], int eflags);
    if (!ret) {
        puts("Match");
    } else if (ret == REG_NOMATCH) {
        puts("No match");
    } else {
        regerror(ret, &regex, msg, sizeof (msg));
        //size_t regerror(int errcode, const regex_t *preg, char *errbuf,size_t errbuf_size);   
        fprintf(stderr, "Regex match failed: %s\n", msg);
        exit(1);
    }

    /* Free memory allocated to the pattern buffer by regcomp() */
    regfree(&regex);
    //void regfree(regex_t *preg);

    return 0;
}
