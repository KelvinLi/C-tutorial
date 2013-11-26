#include <stdio.h>
#include "conflict.h"
#include "libstupid.h"

int
libstupid_print_integer (int x)
{
    return printf ("libstupid: "
                   "In Roman numerals, %d is %s\n", x, colliding_convert (x));
}
