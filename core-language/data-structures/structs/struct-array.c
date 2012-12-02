#include <stdio.h>
int
main (int argc, char **argv)
{
    struct onion_layer {
        double area;
        double thickness;
    };

    struct onion {
        struct onion_layer layers[3];
        double weight;
    };

    int i;
    double layers_volume;
    struct onion smelly = {{{0.2, 1.3}, {0.7, 0.9}, {2.6, 0.8}}, 250.0};

    for (i = 0; i < 3; i++) {
        layers_volume += smelly.layers[i].area * smelly.layers[i].thickness;
    }

    printf ("Average density of layers: %.3g\n", smelly.weight / layers_volume);

    return 0;
}
