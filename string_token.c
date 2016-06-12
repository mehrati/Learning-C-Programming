#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char** string_token(const char *str,char ch);
int main ()
{
 
char sample[100]="this is a txt string jadi is good to linux and samir good to ruby i good to c lang.";

char **r=string_token(sample,' ');


for(int i=0;i<10;i++){

  for(int j=0;j<10;j++){

      printf("%c",r[i][j]);

}
printf("\n");
}



  return 0;
}


char** string_token(const char *str,char ch){

int dimen_1=0,dimen_2=0,count_1=0,count_2=-1,len=0;

len=strlen(str);

for(int i=0;i<len;i++){
   
  if(str[i]==ch)dimen_1++;
}

dimen_1++;

dimen_2=(len/dimen_1)+50;

char **new_arr = (char **)malloc(dimen_1 * sizeof(char *));

for (int i=0; i < dimen_1; i++)
    new_arr[i] = (char *)malloc(dimen_2 * sizeof(char));


for(int i=0;i<len;i++){

    if(str[i]==ch){
     count_2++;
     new_arr[count_1][count_2]=str[i];
     count_2++;
     new_arr[count_1][count_2]='\0';
     count_1++;
     count_2=0;
    }else{
     count_2++;
     new_arr[count_1][count_2]=str[i];
     
    }


}




return new_arr;

}
