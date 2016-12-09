#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ** create_dynamic_array_string(int index, int lenstr);

int main() {

    int index = 5;
    int lenstr = 10;
    char ** string;
    string = create_dynamic_array_string(index, lenstr);
    strcpy(string[0],"Python");
    printf("%s \n",string[0]);


    free(string);
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
