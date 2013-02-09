#include <stdio.h>

/* pointer to a struct */

struct fish {
    double position;
    double velocity;
};

int
main (int argc, char **argv)
{
    struct fish nemo = {3.4, -1.0};
    struct fish *nemop;
    double final_position;

    nemop = &nemo;

    printf ("(*nemop).position == %g\n",             (*nemop).position );
    printf ("nemop->position == %g   (shorthand)\n", nemop->position   );

    printf ("\n");

    final_position = 2.0 * nemop->velocity + nemop->position;
    printf ("Nemo will be at position (%g) in 2 seconds...\n",
            final_position);

    return 0;
}
