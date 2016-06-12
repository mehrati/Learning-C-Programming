#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char *func_m(char *str);
char *func_s(char *str);

char str1[20]="HELLO WORLD!!!";
char str2[20]="HELLO !!!";

int main(){

char *pm=func_s(str1);

printf("%s\n",pm);

char *ps=func_s(str2);

printf("%s\n",ps);

return 0;
}


char *func_m(char *str){


char *p=(char *)malloc(20);

memset(p,0,20);

strcpy(p,str);
/* or ->
p=str;
*/
return  p;
}

char* func_s(char *str){


static char var[20];

memset(var,0,20);

strcpy(var,str);
/* or ->

for(int i=0;i<strlen(str);i++){

var[i]=str[i];
}

*/

return  var;
}
