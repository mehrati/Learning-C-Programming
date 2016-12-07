#include <stdio.h>
#include <stdlib.h>

int main(void) {

   FILE *p;
   umask(027);//change permission files
   p=fopen("file.txt","w+");
   fputs("hello",p);
   printf("Ok");
   fclose(p);





  return 0;

}
