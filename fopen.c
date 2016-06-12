#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main()
{

  char str[40]="free BSD";
  FILE *pf;

  pf=fopen("dada.md","w+");

  fwrite(str,sizeof(str),1,pf);


fclose(pf);

   return(0);
}
