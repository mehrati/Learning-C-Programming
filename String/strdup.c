#define _XOPEN_SOURCE  500 /* Enable certain library functions (strdup) on linux.  See man page feature_test_macros */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    
    
    char str[6]="Hello";
    
    char *ac;
    /*The  strdup() function returns a pointer to a new string which is a duplicate of the string s.  Memory
       for the new string is obtained with malloc(3), and can be freed with free(3).*/
    ac=malloc(6);
    ac=strdup(str);
    //duplicate string of stack memory to heap memory
    
    printf("%s\n",ac);
    
    free(ac);
    
    return 0;
}
