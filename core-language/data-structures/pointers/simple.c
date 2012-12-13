#include <stdio.h>

int
main (int argc, char **argv)
{
    int a, b;
    int *x, *y;

    a = 5;
    b = 3;

    x = &a;
    y = &b;

    printf (" a = %-12d\t  b = %d\n", a, b);
    printf ("*x = %-12d\t *y = %d\n", *x, *y);

    printf ("&a = %p\t &b = %p\n", (void *) &a, (void *) &b);
    printf (" x = %p\t  y = %p\n", (void *) x, (void *) y);

    return 0;
}
