#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <crypt.h>
//gcc pass.c -lcrypt
int main(int argc, char **argv){

  char salt[2];                                          /* Salt for the crypt() function  */
  const char *salt_chars = "abcdefghijklmnopqrstuvwxyz"  /* Range of character supported   */
                           "ABCDEFGHIJKLMNOPQRSTUVWXYZ"  /* as a value for salt in crypt() */
                           "0123456789";

  char username[BUFSIZ],  password1[BUFSIZ],    /* Buffers for user input and comparison    */
       password2[BUFSIZ], *buf;
  char filename[BUFSIZ]="/home/alien/Desktop/pass.txt"; /* Buffer for filename  */
  FILE *outfile;                                        /* File handle   */

  /* Build salt */
  srand(time(NULL));
  salt[0] = salt_chars[rand() % 62];
  salt[1] = salt_chars[rand() % 62];

  /* Get the filename */
  printf("Enter Password Filename: ");
 // scanf("%s", filename);

 

  /* Get the username */
  printf("Username: ");
  scanf("%s", username);

  do {

    /* Get the password */
    buf = getpass("Password: ");

    /* Copy to a "stable" pointer */
    sprintf(password1, "%s", buf);

    /* Get the password */
    buf = getpass("Enter Again: ");

    /* Copy to a "stable" pointer */
    sprintf(password2, "%s", buf);

    /* See if the passwords are the same */
    if(strcmp(password1, password2) != 0)
      printf("\nPasswords do not match!\nTry again.\n\n");

  } while(strcmp(password1, password2) != 0);

  /* Encrypt the password */
  buf = crypt(password1, salt);

  /* Open the output file for append */
  if((outfile = fopen(filename, "a+")) == NULL){

    printf("\nFile error!\nAborting...\n");

  } else {

    /* Print the record to the file */
    fprintf(outfile, "%s:%s\n", username, buf);

  }  /* End if */

  /* Close the file */
  fclose(outfile);

}  /* End main() */
