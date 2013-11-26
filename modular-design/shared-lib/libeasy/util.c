#include <stdio.h>

static void __attribute__ ((constructor)) my_init (void);
static void __attribute__ ((destructor)) my_fini (void);

static void
my_init (void)
{
    fputs ("libeasy loaded\n", stdout);
}

static void
my_fini (void)
{
    fputs ("libeasy unloaded\n", stdout);
}
