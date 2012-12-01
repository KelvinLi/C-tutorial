#include <stdio.h>

int
main (int argc, char **argv)
{
    int values[] = {2, 8, -9, 100, 0};
    int i;

    printf ("First element: %d\n", values[0]);
    printf ("Last element: %d\n", values[5 - 1]);

    printf ("All elements: [");
    for (i = 0; i < 5; i++) {
        printf ("%d, ", values[i]);
    }
    printf("]\n");

    return 0;
}
