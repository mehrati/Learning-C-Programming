#include <stdio.h>


int main()
{
   FILE *stream;
   char c;
   stream = fopen("MYFILE.TXT", "r");
    while(feof(stream)==0)
    {
        
        c=getc(stream);
        printf("%c",c);
    }

   fclose(stream);
   return 0;
}
