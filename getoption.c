#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <getopt.h>

int main(int argc, char **argv) {
    char option;
    int option_index;

    static struct option long_options[] = {
        {"opt_a", required_argument, NULL, 'a'},
        {"opt_b", required_argument, NULL, 'b'},
        {"opt_c", no_argument, NULL, 'c'},
        {"help", no_argument, NULL, 'h'},
        {0, 0, 0, 0}
    };

    while ((option = getopt_long(argc, argv, "a:b:ch", long_options, &option_index)) != -1) {
        switch (option) {
            case 'a':
                printf("option a =%s\n", optarg);
                break;
            case 'b':
                printf("option b =%s\n", optarg);
                break;
            case 'c':
                printf("you select option c !!!\n");
                break;
            case 'h':
                printf("you select option help !!!\n");
                break;

        }
    }

    return 0;
}
