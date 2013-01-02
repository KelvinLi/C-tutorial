#include <stdio.h>

void __attribute__ ((constructor)) my_init (void);
void __attribute__ ((destructor)) my_fini (void);

void
my_init (void)
{
    printf ("libeasy loaded\n");
}

void
my_fini (void)
{
    printf ("libeasy unloaded\n");
}
