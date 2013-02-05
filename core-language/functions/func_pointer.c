#include <stdio.h>

int
boil (int x, int y)
{
    printf ("boil got: %d, %d\n", x, y);
    return x + y;
}

int
fry (int x, int y)
{
    printf ("fry got: %d, %d\n", x, y);
    return x - y;
}

int
main (int argc, char **argv)
{
    int (* cook_method) (int, int);
    int tmp;

    cook_method = fry;
    tmp = cook_method (4, 3);

    cook_method = boil;
    tmp = cook_method (6, tmp);

    cook_method = fry;
    cook_method (tmp, tmp);

    return 0;
}
