#include <stdio.h>

int
main (int argc, char **argv)
{
    int x = 5;
    switch (x) {
    case 3:
        printf ("3!\n");
        break;
    case 7:
        printf ("7!\n");
        break;
    case -2:
        printf ("-2!\n");
        break;
    default:
        printf ("nope\n");
    }
    return 0;
}
