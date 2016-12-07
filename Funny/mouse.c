#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <linux/input.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/time.h>
//cat /proc/bus/input/devices 
int main() {
  struct input_event event, event_end;

  int fd = open("/dev/input/event4", O_RDWR);
  if (fd < 0) {
    printf("Errro open mouse:%s\n", strerror(errno));
    return -1;
  }
    int bytes;
    unsigned char data[3];

    int left, middle, right;
    signed char x, y;
    while(1)
    {
        // Read Mouse     
        bytes = read(fd, data, sizeof(data));

        if(bytes > 0)
        {
            left = data[0] & 0x1;
            right = data[0] & 0x2;
            middle = data[0] & 0x4;

            x = data[1];
            y = data[2];
            printf("x=%d, y=%d, left=%d, middle=%d, right=%d\n", x, y, left, middle, right);
        }   
    }
    return 0; 
}
