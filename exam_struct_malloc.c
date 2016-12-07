#include<stdio.h> 
#include<string.h>
#include<stdlib.h> 

struct value_s{

char *str;

int number;

char **arr_str;

};


int main()
{
struct value_s *sample;

sample=(struct value_s*)malloc(sizeof(struct value_s));

sample->number=356;

sample->str="just str";

sample->arr_str=(char**)malloc(100);

sample->arr_str[0]="newstring1";
sample->arr_str[1]="newstring2";

printf("sample->number %d \n",sample->number);

printf("sample->str %s \n",sample->str);

printf("sample->arr_str[0] %s\n",sample->arr_str[0]);

printf("sample->arr_str[1] %s\n",sample->arr_str[1]);


free(sample);
free(sample->arr_str);


    return 0;
}
