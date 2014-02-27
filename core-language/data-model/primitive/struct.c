#include <stdio.h>

struct carrot {
    double length;
    double water_content;
    int ridge_count;
};

int
main (int argc, char **argv)
{
    struct carrot henry_snack;

    henry_snack.length = 10.2;
    henry_snack.water_content = 40.7;
    henry_snack.ridge_count = 4;

    printf ("Henry's snack is %gcm long, ", henry_snack.length);
    printf ("contains %gg of water, ", henry_snack.water_content);
    printf ("and has %d ridges.\n", henry_snack.ridge_count);
    return 0;
}
