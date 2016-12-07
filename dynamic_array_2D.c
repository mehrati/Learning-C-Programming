#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

int elem1=10;
int elem2=10;


int **arr=(int**)malloc(elem1 * sizeof(int*));
for(int i=0;i<10;i++)
   arr[i]=(int*)malloc(10);

for(int i=0;i<elem1;i++){
    for(int j=0;j<elem2;j++){
arr[i][j]=i+j;

    }

}

for(int i=0;i<elem1;i++){
    for(int j=0;j<elem2;j++){
printf("%d\n",arr[i][j]);

    }

}




free(arr);


return 0;
}
