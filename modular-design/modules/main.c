#include <stdio.h>

#include "easy.h"
#include "stupid.h"

int
main (int argc, char **argv)
{
    printf ("%d\n", easy_square (5));
    printf ("%d\n", stupid_average (100, 150));
    return 0;
}
