#include <stdio.h>

int
main (int argc, char **argv)
{
    char *p;
    char sentence[] = "I smell onions.";
    p = sentence;
    printf ("You got a message: (%s)\n", p);
    return 0;
}
