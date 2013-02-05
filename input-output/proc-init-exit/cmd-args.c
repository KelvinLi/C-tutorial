#include <stdio.h>

int
main (int argc, char **argv)
{
    int i;

    printf ("I got %d command-line arguments:\n", argc);
    for (i = 0; i < argc; i++) {
        printf ("\targument %d is: (%s).\n", i, argv[i]);
    }
    return 0;
}
