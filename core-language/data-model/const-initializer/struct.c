#include <stdio.h>

struct carrot {
    double length;
    double water_content;
    int ridge_count;
};

int
main (int argc, char **argv)
{
    struct carrot henry_snack = {10.2, 40.7, 4};

    printf ("Henry's snack:\n");
    printf ("  %gcm long\n", henry_snack.length);
    printf ("  %gg of water\n", henry_snack.water_content);
    printf ("  %d ridges\n", henry_snack.ridge_count);
    return 0;
}
