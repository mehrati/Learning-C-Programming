#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <crypt.h>
//gcc pass.c -lcrypt
int main(int argc, char **argv){

  char username[BUFSIZ], *password;  /* User input buffers         */
  char buf[BUFSIZ];                  /* File input buffer          */
  char *user_file, *pass_file;       /* Buffers for values in file */
  char filename[BUFSIZ];             /* Filename buffer            */
  FILE *infile;                      /* File handle                */

  /* Get the filename */
  printf("Enter Password Filename: ");
  scanf("%s", filename);

  /* Get the username from the user */
  printf("Username: ");
  scanf("%s", username);

  /* Get the password from the user */
  password = getpass("Password: ");

  /* Open the file */
  if((infile = fopen(filename, "r")) == NULL){

    printf("\nFile error!\nAborting...\n");

  } else {

  /* Loop throught the file */
  while (!feof(infile)) {

      /* Initialize with empty string */
      buf[0] = '\0';

      /* Read in one line */
      fscanf(infile, "%s", buf);

      /* If it's an empty line, continue */
      if(strlen(buf) == 0) continue;

      /* Point to the buffer */
      user_file = buf;

      /* Point to the delimiter in the buffer */
      pass_file = strchr(buf, ':');

      /* Change the delimiter to a nul character */
      pass_file[0] = '\0';

      /* Move to the next character */
      pass_file++;

      /* See if this matches the name the user entered */
      if(strcmp(user_file, username) == 0){

        /* See if the passwords match */
        if(strcmp(crypt(password, pass_file), pass_file) == 0){

          printf("Correct password...\n");

        } else {

          printf("Invalid password!\n\n");

        }  /* End if */

        /* We found what we wanted; get out of loop */
        break;

      }  /* End if */

    }  /* End while */

  }  /* End if */

  /* Close the file */
  fclose(infile);

}  /* End main() */
