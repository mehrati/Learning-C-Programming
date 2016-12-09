#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct date_s {
    int year;
    int month;
    int day;
}date_t;

struct person_s{
    char name[20];
    char family[20];
    int id;
    date_t birthday;
    
}person1;

int main() {
    
    strcpy(person1.name,"Ali");
    strcpy(person1.name,"Gholizade");
    person1.id = 4;
    person1.birthday.year = 1395;
    person1.birthday.month = 10;
    person1.birthday.day = 1;
    
    return 0;
}

