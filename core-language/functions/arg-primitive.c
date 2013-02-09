#include <stdio.h>

void
display_status (int x)
{
    printf ("%d\n", x);
}

void
fry (int x)
{
    x = x * x;
    printf ("In fry(), I got: ");
    display_status (x);
}

void
boil (int *x)
{
    *x = *x * *x;
    printf ("In boil(), I got: ");
    display_status (*x);
}

int
main (int argc, char **argv)
{
    int n = 5;

    printf ("Initial: ");
    display_status (n);
    printf ("\n");

    fry (n);

    printf ("After fry(): ");
    display_status (n);
    printf ("\n");

    boil (&n);

    printf ("After boil(): ");
    display_status (n);

    return 0;
}
