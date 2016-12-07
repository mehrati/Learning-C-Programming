#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <errno.h>
#include <pthread.h>

#define PORT 5051

typedef struct data_s {
  int val;
} data_t;

int isquit(char *buffer);

void *print_receive_msg(void* new_sockfd);

char buffer_read[256];

char buffer_write[256];

int main(int argc,char *argv[]){

int sockfd,result;

pthread_t thread1;

struct sockaddr_in serv_addr;

sockfd=socket(AF_INET,SOCK_STREAM,0);

if(sockfd<0){
    perror("no socket");
    exit(1);
}

bzero((char *)&serv_addr,sizeof(serv_addr));

serv_addr.sin_family=AF_INET;
if(argc == 2){

serv_addr.sin_addr.s_addr=inet_addr(argv[1]);

}else{

perror("Enter ip adderss");

exit(0);
}


serv_addr.sin_port=htons(PORT);

result=connect(sockfd,(struct sockaddr *)&serv_addr,sizeof(serv_addr));

if(result<0)
{ 
    perror("connect");
    exit(1);
}

printf("**** Connection accepted *****\n");

printf("write your message : ");

    pthread_create(&thread1,NULL,print_receive_msg,&sockfd);
    while(1){
      
    bzero(buffer_write,256);

    fgets(buffer_write,256,stdin);
    
    if(isquit(buffer_write)==0)
    {
        write(sockfd,buffer_write,strlen(buffer_write));
        pthread_cancel(thread1);
        close(sockfd);
        break;
    }
    
    write(sockfd,buffer_write,strlen(buffer_write));
    
    }
    
    
printf("you disconnected :O \n ");

pthread_exit(0);
close(sockfd);

return EXIT_SUCCESS;
}



void *print_receive_msg(void* new_sockfd){
    
    bzero(buffer_read,256);
    
    data_t *newsockfd=(data_t *)new_sockfd;

    
    while(1){

    bzero(buffer_read,256);
    read(newsockfd->val,buffer_read,256);
    printf("\n");
    printf("other say : %syou answer : \n" ,buffer_read);
    if(isquit(buffer_read)==0){
       close(newsockfd->val);
       close(sockfd);
       break;
    }

}}
    
    
}

int isquit(char *buffer){

char QUIT[5]="quit";

for(int i=0 ; i<5 ;i++ ){

if(buffer[i]!=QUIT[i]){

   return -1;
};

return 0;
}

}
