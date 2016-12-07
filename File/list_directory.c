#include <stdio.h> 
#include <dirent.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

/*struct dirent
{
    ino_t          d_ino;        inode number 
    off_t          d_off;        offset to the next dirent 
    unsigned short d_reclen;     length of this record 
    unsigned char  d_type;       type of file; not supported
                                   by all file system types 
    char           d_name[256]; filename
};*/

int main(int argc, char *argv[]) {
    DIR *pdir;
    struct dirent *entry;

    char buffer[30];

    if (argc == 2) {
        memset(buffer, 0, sizeof (buffer));
        strcpy(buffer, argv[1]);
    }

    pdir = opendir(buffer);

    if (pdir) {
        while ((entry = readdir(pdir)) != NULL) {
            printf("%s\n", entry->d_name);
            //printf(" and type :%d\n", entry->d_type);
        }

        closedir(pdir);
    }

    return 0;
}
