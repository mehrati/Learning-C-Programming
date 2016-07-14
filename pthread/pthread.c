#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
void *fuc1();
void *fuc2();  

int main(){

pthread_t pt1,pt2;

int re1=pthread_create(&pt1,NULL,&fuc1 , NULL);
int re2=pthread_create(&pt2,NULL,&fuc2 , NULL);

pthread_join( pt1, NULL);
pthread_join( pt2, NULL);
pthread_exit(0);
return 0;
}


void *fuc1(){

for (int i=0 ; i < 1000 ; i++) {

printf("fuc1 %d\n",i);

}

return NULL;
}

void *fuc2(){

for (int i=0 ; i<1000 ; i++) {

printf("fuc2 %d\n",i);

}

return NULL;
}
