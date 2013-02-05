#include <stdio.h>

void
display_status (int x)
{
    printf ("value is %d.\n", x);
}

void
fry (int x)
{
    x = x * x;
}

void
boil (int *x)
{
    *x = *x * *x;
}

int
main (int argc, char **argv)
{
    int n = 5;
    printf ("Initial: ");
    display_status (n);

    fry (n);
    printf ("After fry(): ");
    display_status (n);

    boil (&n);
    printf ("After boil(): ");
    display_status (n);

    return 0;
}
