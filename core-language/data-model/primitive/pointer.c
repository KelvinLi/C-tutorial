#include <stdio.h>

int
main (int argc, char **argv)
{
    int a; /* These hold integers */
    int b;
    int *x; /* These hold memory addresses */
    int *y;

    a = 5;
    b = 3;

    /* Store addresses of local variables */
    x = &a;
    y = &b;

    printf ("values of integer variables:\n");
    printf ("  a = %d\n", a);
    printf ("  b = %d\n", b);

    /* We cast from type (int *) to type (void *) to match the printf
     * function signature. These casts do not change any values.
     */
    printf ("\naddresses of integer variables:\n");
    printf ("  &a = %p\n", (void *) &a);
    printf ("  &b = %p\n", (void *) &b);

    printf ("\nvalues of pointers:\n");
    printf ("  x = %p\n", (void *) x);
    printf ("  y = %p\n", (void *) y);

    printf ("\ndereferenced pointers:\n");
    printf ("  *x = %d\n", *x);
    printf ("  *y = %d\n", *y);

    printf ("\naddresses of pointers: (not to be confused with the above!)\n");
    printf ("  &x = %p\n", (void *) &x);
    printf ("  &y = %p\n", (void *) &y);

    return 0;
}
