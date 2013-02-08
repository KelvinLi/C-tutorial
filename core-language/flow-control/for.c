#include <stdio.h>

int
main (int argc, char **argv)
{
    int i;

    printf ("First loop:\n");

    for (i = 6; i < 15; i = i + 2) {
        printf ("%d\n", i);
    }

    printf ("\nSecond loop:\n");

    for (i = 0; i < 8; i++) {
        printf ("%d, ", i);
    }
    printf ("%d\n", i);

    printf ("\nThird loop (with break):\n");

    for (i = 0; i < 3; i++) {
        printf ("ping\n");
        break;
        printf ("pong\n");
    }

    printf ("\nFourth loop (with continue):\n");

    for (i = 0; i < 3; i++) {
        printf ("ping\n");
        continue;
        printf ("pong\n");
    }

    return 0;
}
