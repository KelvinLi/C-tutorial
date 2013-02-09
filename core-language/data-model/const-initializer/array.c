#include <stdio.h>

int
main (int argc, char **argv)
{
    /* Array size is inferred from number of
     * elements in initializer.
     * Can also be explicitly set.
     */
    int values[] = {35, 57, 2, -9, 1, 1, -46};
    size_t i;

    printf ("All elements: [");
    for (i = 0; i < 7; i++) {
        printf ("%d, ", values[i]);
    }
    printf("]\n");

    return 0;
}
