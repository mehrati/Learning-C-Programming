#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
//man daemon
int main(){

int count=0;

FILE *fp;

/*int daemon(int nochdir,int noclose);*/

int stat=daemon(1,1);

printf("%d\n",stat);

fp = fopen ("Daemon_Log.txt", "w+");

while (count < 100)
{
//Dont block context switches, let the process sleep for some time
sleep(1);
fprintf(fp, "Logging info...%d\n",count);
fflush(fp);
// Implement and call some function that does core work for this daemon.
count++;
}
fclose(fp);


return 0;
}







