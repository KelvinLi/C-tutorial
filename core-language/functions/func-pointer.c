#include <stdio.h>
#include <string.h>

int
multiply_operator (int x, int y)
{
    fputs ("> multiply_operator got: ", stdout);
    printf ("%d, %d\n", x, y);
    return x * y;
}

int
difference_operator (int x, int y)
{
    fputs ("> difference_operator got: ", stdout);
    printf ("%d, %d\n", x, y);
    return x - y;
}

int
(*get_operator_by_name (const char *name))
(int, int)
{
    if (! strcmp (name, "times"))
        return multiply_operator;
    if (! strcmp (name, "minus"))
        return difference_operator;
    return NULL;
}

int
main (int argc, char **argv)
{
    int (*binary_operator) (int, int);

    fputs ("=== Direct assignment to function pointer ===\n", stdout);
    binary_operator = multiply_operator;
    printf ("%d\n", binary_operator (4, 3));

    binary_operator = difference_operator;
    printf ("%d\n", binary_operator (4, 3));

    fputs ("\n", stdout);

    fputs ("=== Lookup by name ===\n", stdout);
    binary_operator = get_operator_by_name ("times");
    printf ("%d\n", binary_operator (5, 8));

    binary_operator = get_operator_by_name ("minus");
    printf ("%d\n", binary_operator (5, 8));

    fputs ("\n", stdout);

    fputs ("=== Skip assignment to function pointer === \n", stdout);
    printf ("%d\n", get_operator_by_name ("times") (-2, 3));

    return 0;
}
