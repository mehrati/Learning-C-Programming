#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    
    int val = 23;
    int * pointer;
    pointer = &val; // or *pointer = val
    //pointer -> val
    (*pointer)++; // val => 24
    val++; // val => 25
    
    printf("Number : %d ",val);
    return 0;
}

