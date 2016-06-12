/* gcc -Wall Message_Digest.c -o Message_Digest -lcrypto -lssl */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/md5.h>
 
 
int main()
{
  const unsigned char msg[20]="Hello World";

//  const unsigned char *p= msg;

  unsigned char md[MD5_DIGEST_LENGTH];
 
  MD5(msg, sizeof(msg), md);
 
  for(int i = 0; i < MD5_DIGEST_LENGTH; i++){

    printf("%02x", md[i]);

}

  printf("\n");
 
  return EXIT_SUCCESS;
}
