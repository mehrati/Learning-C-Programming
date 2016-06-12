#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define COLOR_RED     "\x1b[31m"
#define COLOR_GREEN   "\x1b[32m"
#define COLOR_YELLOW  "\x1b[33m"
#define COLOR_BLUE    "\x1b[34m"
#define COLOR_MAGENTA "\x1b[35m"
#define COLOR_CYAN    "\x1b[36m"
#define COLOR_RESET   "\x1b[0m"

typedef enum color{
blue=1,cyan,green,magenta,red,yellow,
}color_t;


int main(){

int ch;
color_t n_color;

printf("Select color:\n1.blue 2.cyan 3.green 4.magenta 5.red 6.yellow \n$");

scanf("%i",&ch);

n_color=ch;

switch(n_color){
   case red :
     printf(COLOR_RED "RED!" COLOR_RESET "\n");
   break;
   case green :
     printf(COLOR_GREEN "GREEN!" COLOR_RESET "\n");
   break;
   case yellow :
     printf(COLOR_YELLOW  "YELLOW!" COLOR_RESET "\n");
   break;
   case blue :
     printf(COLOR_BLUE "BLUE!" COLOR_RESET "\n");
   break;
   case magenta :
     printf(COLOR_MAGENTA "MAGENTA!" COLOR_RESET "\n");
   break;
   case cyan:
     printf(COLOR_CYAN "CYAN!" COLOR_RESET "\n");
   break;








}








return 0;

}
