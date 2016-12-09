#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct person_s {
    char name[20];
    char family[20];
    int id;
    void (*println)( struct person_s person);
} person_t;

void print(person_t person) {

    printf("Name %s \n", person.name);
    printf("Last Name %s \n", person.family);
    printf("ID %d \n", person.id);

}

int main() {
    person_t person = {"Mahdi", "Robatipoor", 34, print};

    person.println(person);
    return 0;
}

