#include <stdio.h>

/* pointer arithmetic */

int
main (int argc, char **argv)
{
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19};
    int *p;

    /* Assign p to the ADDRESS of the first element of primes. */
    p = primes;

    /* We can dereference p as usual. */
    printf ("*p == %d\n",                               *p    );
    printf ("*p + 4 == %d    (integer arithmetic)\n\n", *p + 4);

    printf ("*(p + 4) == %d (dereferenced at offset)\n", *(p + 4) );
    printf ("p[4] == %d     (shorthand)\n",              p[4]     );

    return 0;
}
