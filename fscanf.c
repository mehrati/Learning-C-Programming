#include <stdio.h>
#include <stdlib.h>  /* For exit() function */
int main()
{
   char c[16];
   FILE *fptr;
   fptr=fopen("mah.txt","a+");
   fscanf(fptr,"%s",c);
   printf("%s",c);
   fclose(fptr);
   return 0;
}
