#include <stdio.h>
#include <math.h>
float power(float a,float b);
int main(){


float res=power(-60,4);

printf("result is : %f\n",res);
return 0;

}

float power(float a,float b){

float base=a;

if(b > 0){
  for(int i=1;i<b;i++){
   a*=base;
     }
return a;
}
else if(b < 0)
{
    for(int i=b;i<=0;i++){
       a/=base;
      }
return a;
}
else{
    return 1;
}


return 0;

}
