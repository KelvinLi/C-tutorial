#include <stdio.h>

static void __attribute__ ((constructor)) my_init (void);
static void __attribute__ ((destructor)) my_fini (void);

static void
my_init (void)
{
    fputs ("libstupid loaded\n", stdout);
}

static void
my_fini (void)
{
    fputs ("libstupid unloaded\n", stdout);
}
