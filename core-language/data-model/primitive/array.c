#include <stdio.h>

int
main (int argc, char **argv)
{
    /* Array sizes are determined at compilation time.
     * In other words, arrays can never be resized.
     */
    int values[5];

    /* The size_t integer type is guaranteed
     * not to overflow for array indices.
     */
    size_t i;

    values[0] = 2;
    values[1] = 8;
    values[2] = -9;
    values[3] = 100;
    values[4] = 0;

    printf ("First element: %d\n", values[0]);
    printf ("Last element: %d\n", values[4]);

    printf ("All elements: [");
    for (i = 0; i < 5; i++) {
        printf ("%d, ", values[i]);
    }
    printf ("]\n");

    return 0;
}
