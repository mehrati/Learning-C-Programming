#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int* foo(int *);
int main(){

int (*po)(int *);
po=&foo;
int *e=po(arr);

for(int i=0;i<10;i++)
printf("%d\n",(*e+i));

free(e);

return 0;
}


int* foo(int *arr){

  int *p=(int *)malloc(sizeof(arr));

  memset(p,0,10);

  memcpy(p,arr,sizeof(arr));

  return p;
}
