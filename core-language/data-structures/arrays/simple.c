#include <stdio.h>

int
main (int argc, char **argv)
{
    int values[5];
    int i;

    values[0] = 2;
    values[1] = 8;
    values[2] = -9;
    values[3] = 100;
    values[4] = 0;

    printf ("First element: %d\n", values[0]);
    printf ("Last element: %d\n", values[5 - 1]);

    printf ("All elements: [");
    for (i = 0; i < 5; i++) {
        printf ("%d, ", values[i]);
    }
    printf("]\n");

    return 0;
}
