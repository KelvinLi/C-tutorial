#include <stdio.h>

int
main (int argc, char **argv)
{
    int i, j;
    int values[][4] =
    {
        {41, 31, 21, 11},
        {-100, -200, -300, -400},
        {3, -9, 27, -81},         /* trailing comma is okay */
    };

    printf ("Element (0, 0): %d\n", values[0][0]);
    printf ("Element (2, 1): %d\n", values[2][1]);

    for (i = 0; i < 3; i++) {
        printf ("[ ");
        for (j = 0; j < 4; j++) {
            printf ("%5d ", values[i][j]);
        }
        printf ("]\n");
    }

    return 0;
}
