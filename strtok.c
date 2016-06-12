#include <stdio.h>
#include <string.h>

int main ()
{
 
char sample[25]="this is a txt string.";

char *tok;

tok=strtok(sample," ");

while(tok!=NULL){

printf("%s\n",tok);

tok=strtok(NULL," ");

}




  return 0;
}
