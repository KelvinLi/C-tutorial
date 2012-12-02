#include <stdio.h>
#include <math.h>

int
main (int argc, char **argv)
{
    struct carrot {
        double length, diameter, water_content;
        int num_ridges;
    };

    double base_area, volume, water_mass;
    struct carrot henry_snack = {10.2, 2.5, 0.184, 4};

    base_area = M_PI_4 * henry_snack.diameter * henry_snack.diameter;
    volume = henry_snack.length * base_area / 3.0;
    water_mass = volume * henry_snack.water_content;

    printf ("Henry's carrot contains %.3g grams of water and %s smooth.\n",
            water_mass, henry_snack.num_ridges == 0 ? "is" : "is not");

    return 0;
}
