#include <stdio.h>

void
display_status (int *x)
{
    printf ("*x == %d\n", *x);
}

void
fry (int *x, int *p)
{
    x = p;
}

void
boil (int **x, int *p)
{
    *x = p;
}

int
main (int argc, char **argv)
{
    int m = 5;
    int n = -8293;
    int *p;
    int *x;

    p = &m;
    x = &n;

    printf ("Initial: ");
    display_status (x);

    fry (x, p);
    printf ("After fry(): ");
    display_status (x);

    boil (&x, p);
    printf ("After boil(): ");
    display_status (x);

    return 0;
}
