#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct date_s {
    int year;
    int month;
    int day;
} date_t;

typedef struct person_s {
    char name[20];
    char family[20];
    int id;
    date_t *birthday;
} person_t;

int main() {
    person_t *person1 = (person_t *) malloc(sizeof (person_t));
    strcpy(person1->name, "Ali");
    strcpy(person1->name, "Gholizade");
    person1->id = 4;
    person1->birthday = (date_t *) malloc(sizeof (date_t));
    person1->birthday->year = 1395;
    person1->birthday->month = 10;
    person1->birthday->day = 1;

    printf("%d \n", person1->birthday->day);

    return 0;
}

