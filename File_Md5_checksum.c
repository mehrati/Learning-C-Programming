
/*gcc -Wall File_Md5_checksum.c -o File_Md5_checksum -lcrypto -lssl*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <openssl/md5.h>

void get_name_of_path(char* file_path);

int main(int argc ,char *argv[])
{
    
    MD5_CTX md5Context;

    int length;

    unsigned char c[MD5_DIGEST_LENGTH];

    unsigned char buffer[1024];
    
    char *file_path;
    
    if(argc==2){
        
      file_path=argv[1];  
    }
    else{
        exit(0);
    }
    

    FILE *pointer_File = fopen (file_path, "rb");


    if (pointer_File == NULL)
    {
        printf ("%s can't be opened \n", file_path);

        return 0;
    }
    
    /*
     * Start MD5 accumulation.Set bit count to 0 and buffer to mysterious initialization constants.
     */
    MD5_Init (&md5Context);

    while ((length = fread (buffer, 1, 1024,pointer_File)) != 0){
    /*
     * Update context to reflect the concatenation of another buffer full of bytes.
     */
    MD5_Update (&md5Context,buffer, length);

    }
     /*
      * Final wrapup - pad to 64-byte boundary with the bit pattern 1 0
      * (64-bit count of bits processed, MSB-first)
      */
    MD5_Final (c,&md5Context);
    

    for(int i = 0; i < MD5_DIGEST_LENGTH; i++)
    {
    
    printf("%02x", c[i]);
    
    }

    get_name_of_path(file_path);

    fclose (pointer_File);

    return 0;
}

//************************************************************************************************
//************************************************************************************************
void get_name_of_path(char* file_path){

int len=strlen(file_path);

char result[20];

int count=-1;

int j=0;
for(int i=len;i>=0;i--){

   if(file_path[i]=='/' || i==0){
     
      j=i;
      if(file_path[i]=='/') 
      {
      j++; 
      }
      
      for(j;j<=len;j++){count++;result[count]=file_path[j];}

      break;
}
}

printf("\nName_File : %s\n",result);
}
