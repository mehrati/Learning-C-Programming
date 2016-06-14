#define _XOPEN_SOURCE  500 /* Enable certain library functions (strdup) on linux.  See man page feature_test_macros */
#include <stdio.h>
#include <string.h>


int main(){
    
    
    char t[5]="Hello";
    
    char *a;
    /*The  strdup() function returns a pointer to a new string which is a duplicate of the string s.  Memory
       for the new string is obtained with malloc(3), and can be freed with free(3).*/
    a=strdup(t);
    //duplicate string of stack memory to heap memory
    
    printf("%s\n",a);
    
    free(a);
    
    printf("%s\n",a);
    
    
    return 0;
}
