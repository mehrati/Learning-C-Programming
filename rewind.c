#include <stdio.h>

int main ()
{
   FILE *fp;

   char s[10];
   fp = fopen("file.txt","r+");
   
  while(!feof(fp)){

   
  fgets(s,10,fp);

  printf("%s",s);


  /* fseek( fp, 0, SEEK_SET ); equal to ->*/rewind(fp);
}

   fclose(fp);
   
   return(0);
}
