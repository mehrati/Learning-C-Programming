#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <sys/time.h>
#include <getopt.h>
#include <fcntl.h>
#include <unistd.h>
int main(){

int fd;
struct timeval tv;
unsigned int   seed;

if ((fd = open("/dev/hwrng", O_RDONLY)) >= 0)
	{
		read (fd, &seed, sizeof(seed));
                printf("seed 1 is =%d\n",seed);
                 printf("fd %d\n",fd);
		close (fd);
	} else {
		gettimeofday (&tv, NULL);
		seed = (getpid() << 16) ^ tv.tv_sec ^ tv.tv_usec;
printf("seed 2 is =%d\n",seed);
	}

	srandom(seed);
        printf("rand() %d\n",rand());


return 0;
}
