/*
int fseek(FILE *stream, long int offset, int whence);

Value	Description
SEEK_SET	The new file position will be the beginning of the file plus offset (in bytes).
SEEK_CUR	The new file position will be the current position plus offset (in bytes).
SEEK_END	The new file position will be the end of the file plus offset (in bytes).
*/
#include <stdio.h>

int main ()
{
   FILE *fp;

   fp = fopen("file.txt","w+");
   fputs("C programming Lamnguage 1", fp);
  
   fseek( fp, 50, SEEK_END );
   fputs(" C Programming Language 2", fp);
   fclose(fp);
   
   return(0);
}
