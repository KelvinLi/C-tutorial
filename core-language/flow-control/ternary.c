#include <stdio.h>

int
main (int argc, char **argv)
{
    int a = 1;
    int b = 2;
    char x[] = "HI";
    char y[] = "BYE";
    printf ("Magic message is: %s\n", a > b ? x : y);
    return 0;
}
