#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* get_name_of_path(char* file_path);

int main(int argc,char *argv[]){

int m=0;

char *name;

name=get_name_of_path(argv[0]);

while(m<100){

char command[22];

sprintf(command,"cp %s %s%d",name,name,m);

system(command);

m++;

}

//printf("%s\n",name);


free(name);

return 0;
}


char* get_name_of_path(char* file_path){

int len=strlen(file_path);

char result[20];
char *p=(char *)malloc(20);

int count=-1;

int j=0;
for(int i=len;i>=0;i--){

   if(file_path[i]=='/' || i==0){
     
      j=i;
      if(file_path[i]=='/') 
      {
      j++; 
      }
      
      for(j;j<=len;j++){count++;result[count]=file_path[j];}

      break;
}
}
memset(p,0,20);
strcpy(p,result);
return p;
}







