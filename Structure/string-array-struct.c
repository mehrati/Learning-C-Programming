#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct str_s {
    char **string;
} str_t;

char ** create_dynamic_array_string(int index, int lenstr);

int main() {

    str_t *str;
    int index = 5;
    int lenstr = 15;
    str->string = create_dynamic_array_string(index, lenstr);
    strcpy(str->string[0], "Python");
    strcpy(str->string[1], "C language");
    printf("sizeof (str->string) = %ld \n", sizeof (str->string));
    printf("%s \n", str->string[0]);
    printf("%s \n", str->string[1]);

    free(str->string);
    return 0;
}

char ** create_dynamic_array_string(int index, int lenstr) {
    char **string = (char**) malloc(sizeof (char*) * index);
    if (string) {
        for (int i = 0; i < index; i++) {
            string[i] = (char*) malloc(sizeof (char) * lenstr);
        }
    }
    return string;
}



