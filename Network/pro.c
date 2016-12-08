#include <stdio.h>    //printf
#include <string.h>   //strncpy
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <net/if.h>   //ifreq
#include <unistd.h>   //close
#include <stdlib.h>
typedef struct
{
	unsigned char byte[6];
} mac_t;
void mc_mac_into_string (const mac_t *mac, char *s);
int
mc_mac_read_string (mac_t *mac, char *string);
int main(int argc, char **argv)
{






return 0;
}
void mc_mac_into_string (const mac_t *mac, char *s)
{
	int i;

	for (i=0; i<6; i++) {
		sprintf (&s[i*3], "%02x%s", mac->byte[i], i<5?":":"");
	}
}

int
mc_mac_read_string (mac_t *mac, char *string)
{
	int nbyte = 5;

	/* Check the format */
	if (strlen(string) != 17) {
		fprintf (stderr, "[ERROR] Incorrect format: MAC length should be 17. %s(%lu)\n", string, strlen(string));
		return -1;
	}

	for (nbyte=2; nbyte<16; nbyte+=3) {
		if (string[nbyte] != ':') {
			fprintf (stderr, "[ERROR] Incorrect format: %s\n", string);
			return -1;
		}
	}

	/* Read the values */
	for (nbyte=0; nbyte<6; nbyte++) {
		mac->byte[nbyte] = (char) (strtoul(string+nbyte*3, 0, 16) & 0xFF);
	}

	return 0;
}
