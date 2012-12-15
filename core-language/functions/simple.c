#include <stdio.h>

int
squares_up_to (int x)
{
    int i, count;
    for (i = 1, count = 0; i * i <= x; i++, count++) {}
    return count;
}

int
main (int argc, char **argv)
{
    int n, result;
    n = 1052;
    result = squares_up_to (n);

    printf ("There are %d square numbers less than or equal to %d.\n",
            result, n);

    return 0;
}
