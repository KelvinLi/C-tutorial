#include <stdio.h>

int
main (int argc, char **argv)
{
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;

    if (2 + 2 == 4) {
        printf ("Two and two sum to four.\n");
    }

    if (a > b) {
        printf ("%d is greater than %d.\n", a, b);
    } else {
        printf ("%d is not greater than %d.\n", a, b);
    }

    if (a < b && c >= d) {
        printf ("%d < %d && %d > %d is true.\n", a, b, c, d);
    } else {
        printf ("%d < %d && %d > %d is false.\n", a, b, c, d);
    }

    if (a == 1 || b != 2) {
        printf ("%d == 1 || %d != 2 is true.\n", a, b);
    } else {
        printf ("%d == 1 || %d != 2 is false.\n", a, b);
    }

    return 0;
}
