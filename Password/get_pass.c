#include <stdio.h>
#include <termios.h>
#include <unistd.h>   

#define SIZE 100

void getPassword(char password[])
{
    static struct termios oldt, newt;
    int i = 0;
    int c;

    /*saving the old settings of STDIN_FILENO and copy settings for resetting*/
    tcgetattr( STDIN_FILENO, &oldt);
    newt = oldt;

    /*setting the approriate bit in the termios struct*/
    newt.c_lflag &= ~(ECHO);          

    /*setting the new bits*/
    tcsetattr( STDIN_FILENO, TCSANOW, &newt);

    /*reading the password from the console*/
    while ((c = getchar())!= '\n' && c != EOF && i < SIZE){
        password[i++] = c;
    }
    password[i] = '\0';

    /*resetting our old STDIN_FILENO*/ 
    tcsetattr( STDIN_FILENO, TCSANOW, &oldt);

}


int main(void)
{
    char password[SIZE];
    printf("please enter password\n");
    getPassword(password);

    printf("Do something with the password <<%s>>\n", password);
    return 0;
}
