#include "easy.h"

static int
colliding_name (void)
{
    return 1;
}

int
easy_square (int x)
{
    return colliding_name () * x * x;
}
