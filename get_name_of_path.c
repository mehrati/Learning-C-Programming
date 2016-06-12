#include <stdio.h>
#include <string.h>
int main(){

char file_name[50]="home/MAHDI.txt";

int len=strlen(file_name);

char result[20];

int count=-1;

for(int i=len;i>=0;i--){

   if(file_name[i]=='/' || i==0){

      int j=i;

      if(file_name[i]=='/'){ j++; }

      for(j;j<=len;j++){count++;result[count]=file_name[j];}

      result[j+1]='\0';

      break;
}
}

printf("%s\n",result);

return 0;
}
