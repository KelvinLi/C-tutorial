#include <stdio.h>

#define GREETING_FORMAT "Filled %d dozens (%d per dozen).\n"
#define EGG_COUNT 84
#define DOZEN_SIZE 13

int
main (int argc, char **argv)
{
    int c = EGG_COUNT;
    printf (GREETING_FORMAT, c / DOZEN_SIZE, DOZEN_SIZE);
    return 0;
}
