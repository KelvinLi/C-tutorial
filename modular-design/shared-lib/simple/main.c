#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <libeasy.h>
#include <libstupid.h>

#if RAND_MAX <= 256
#error
#endif

static void
do_body (void)
{
    int r;
    r = rand ();
    libeasy_print_integer (r % 10);
    libstupid_print_integer ((r >> 4) % 10);
}

static void
seed_with_time (void)
{
    struct timeval t;
    if (gettimeofday (&t, NULL) < 0)
        fputs ("warning: failed to seed random number generator.\n", stdout);
    srand (t.tv_usec);
}

int
main (int argc, char **argv)
{
    fputs ("\n.-------------------."
           "\n| simple says hello |"
           "\n.-------------------."
           "\n\n", stdout);

    seed_with_time ();
    do_body ();

    fputs ("\n.-----------------."
           "\n| simple says bye |"
           "\n.-----------------."
           "\n\n", stdout);

    return 0;
}
