#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct person_s {
    char name[20];
    char family[20];
    int id;
} person_t;

int main() {
    person_t person = {"Mahdi" , "Robatipoor" , 34};

    printf("name %s \n" , person.name);
    printf("family %s \n" , person.family);
    printf("id %d \n" , person.id);

    return 0;
}

