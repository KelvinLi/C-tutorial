#include <stdio.h>

#include <libeasy.h>
#include <libstupid.h>

int
main (int argc, char **argv)
{
    printf ("%d\n", libeasy_square (5));
    printf ("%d\n", libstupid_average (100, 150));
    return 0;
}
