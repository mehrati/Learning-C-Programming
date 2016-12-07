#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

FILE *pp;

char c;

pp=popen("ifconfig","r");

while( !feof(pp) ){
c=fgetc(pp);//fgets(c,512,pp);
printf("%c", c);

}

pclose(pp);

return 0;
}
