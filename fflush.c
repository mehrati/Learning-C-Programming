#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main()
{


  char str[50];

  bzero(str,50);

  FILE *pf;
  
  pf=fopen("log.md","a+");

while(1){

  fgets(str,50,stdin);

  fwrite(str,strlen(str),1,pf);

  fflush(pf);

  bzero(str,50);

}

fclose(pf);

   return(0);
}
