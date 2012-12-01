#include <stdio.h>

int
main (int argc, char **argv)
{
    int x = 100;
    int i = 1;

    printf ("First loop\n");
    while (x > 0) {
        i = 2*i;
        x = x - i;
    }
    printf ("x = %d, i = %d\n", x, i);

    printf ("\nSecond (infinite) loop...");
    fflush (stdout);
    while (1) {
    }

    return 0;
}
