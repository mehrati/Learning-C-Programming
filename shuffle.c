#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main(){

int arr[10]={1,2,3,4,5,6,7,8,9};

srand((unsigned)time(NULL));

int len=(sizeof(arr)/4);

for(int i=0; i < len ; i++){

long int a=rand()%len;
int tmp=arr[a];
long int b=rand()%len;
arr[a]=arr[b];
arr[b]=tmp;
}

for (int i=0;i<len;i++){
printf("arr[%d]=%d \n",i,arr[i]);
}




return 0;
}
