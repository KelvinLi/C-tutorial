#include <stdio.h>
#include "conflict.h"
#include "libeasy.h"

int
libeasy_print_integer (int x)
{
    return printf ("libeasy: "
                   "In English, %d is %s\n", x, colliding_convert (x));
}
