#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct person{

char name[20];
char family[20];
int age;

};

struct student{

int id;
char degree[20];
struct person ps;

};

int main(){

struct student std;


std.id=3443;
strcpy(std.ps.name,"bela");
strcpy(std.ps.family,"vela");

printf("id :%d\n",std.id);
printf("family :%s\n",std.ps.family);



//***************************************************
struct student *pstd;

pstd=&std;//save to stsck

pstd->ps.age=22; //(*pstd).ps.age=22;                                                     
strcpy(pstd->degree,"Dr.");//strcpy((*pstd).degree,"Dr.");
printf("age :%d\n",pstd->ps.age);//printf("age :%d\n",(*pstd).ps.age);
printf("degree :%s\n",pstd->degree); //printf("degree :%s\n",(*pstd).degree);

//***************************************************
struct student *pstd2;
pstd2=(struct student*)malloc(sizeof(struct student*));//save to heap

pstd2->ps.age=22;                                                   
strcpy(pstd2->degree,"Dr.");
printf("age :%d\n",pstd2->ps.age);
printf("degree :%s\n",pstd2->degree);


free(pstd2);

return 0;
}

//struct student *func(struct student*){








//}
