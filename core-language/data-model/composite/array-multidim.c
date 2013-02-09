#include <stdio.h>

/* array of arrays (multidimensional array) */

int
main (int argc, char **argv)
{
    size_t i;
    size_t j;

    /* The compiler infers only the outermost array dimension.
     * The inner array dimension(s) must be constant size as well.
     */
    int values[][4] = {
        {41, 31, 21, 11},
        {-100, -200, -300, -400},
        {3, -9, 27, -81},         /* trailing comma is okay */
    };

    printf ("values[0][0] == %d\n", values[0][0]);
    printf ("values[2][1] == %d\n", values[2][1]);
    printf ("\n");
    for (i = 0; i < 3; i++) {
        printf ("[ ");
        for (j = 0; j < 4; j++)
            printf ("%5d ", values[i][j]);
        printf ("]\n");
    }

    return 0;
}
