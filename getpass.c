#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(){

char *password = getpass("Enter New Password : ");

printf("your passwored is :%s ",password);

free(password);

return 0;
}
