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

const char QUIT[256]="quit";

void *print_receive_msg(void * new_sockfd);

char buffer_read[256];

char buffer_write[256];

int main(){

int sockfd,newsockfd;

pthread_t thread1;

struct sockaddr_in serv_addr,cli_addr;

sockfd=socket(AF_INET,SOCK_STREAM,0);

if(sockfd<0){ perror("no socket"); exit(1);  }

bzero((char *)&serv_addr,sizeof(serv_addr));

serv_addr.sin_family=AF_INET;

serv_addr.sin_addr.s_addr=INADDR_ANY;//inet_addr("17.72.0.197");

serv_addr.sin_port=htons(PORT);

bind(sockfd,(struct sockaddr *)&serv_addr,sizeof(serv_addr));

listen(sockfd,5);

int client=sizeof(cli_addr);

    newsockfd=accept(sockfd,(struct sockaddr*)&cli_addr,&client);
    
    if(newsockfd<0){ perror("not connected"); exit(1);  }

    printf("Connection accepted... ;) \n ");

    pthread_create(&thread1,NULL,print_receive_msg,(void *)newsockfd);  
    
    while(strcmp(buffer_write,QUIT)!=0){
      
    bzero(buffer_write,256);
    
    printf("write your message : ");

    fgets(buffer_write,256,stdin);
    
    if(strcmp(buffer_write,QUIT)==0){write(newsockfd,buffer_write,strlen(buffer_write));break;}
    
    write(newsockfd,buffer_write,strlen(buffer_write));

    }
    
    
 printf("you disconnected :O \n ");
 
 pthread_exit(NULL);
 
 close(newsockfd);
 
 close(sockfd);

 return (EXIT_SUCCESS);
 
}



void *print_receive_msg(void * new_sockfd){
    
    bzero(buffer_read,256);
    
    int newsockfd=(int *)new_sockfd;
    
    while(strcmp(buffer_read,QUIT)!=0){
    
    bzero(buffer_read,256);
    
    read(newsockfd,buffer_read,256);
     
    printf("\t \t \t \t \t answer : ");

    printf("%s  \n" ,buffer_read);
    
    }
    
    
}