#include <stdio.h>


int main(){


int num=100;
int *p1,*p2;
p1=&num;
printf("p1=&num; num=%d p1=%d p2=%d\n",num,*p1,*p2);

num++;

printf("num++; num=%d p1=%d p2=%d\n",num,*p1,*p2);

*p2=*p1;

printf("*p2=*p1; num=%d p1=%d p2=%d\n",num,*p1,*p2);

(*(p1))++;

printf("(*(p1))++; num=%d p1=%d p2=%d\n",num,*p1,*p2);

 p1=p2;(*(p1))--;

printf(" p1=p2;(*(p1))--; num=%d p1=%d p2=%d\n",num,*p1,*p2);


return 0;

}
