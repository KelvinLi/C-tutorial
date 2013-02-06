#include <stdio.h>

#define VERBOSITY 4
#undef DO_LOOP
#define LOOP_COUNT 8

#if LOOP_COUNT > 10
#error that is a lot of loops
#endif

int
main (int argc, char **argv)
{
#ifdef DO_LOOP
    int i;
#endif

#if (VERBOSITY > 3)
#if 1
    printf ("hi\n");
#elif 0
    printf ("bye\n");
#else
    printf ("spam!\n");
#endif
#endif

#ifdef DO_LOOP
    for (i = 0; i < LOOP_COUNT; i++) {
        printf ("Looped! ");
    }
    printf ("that's enough\n");
#endif
    return 0;
}
