#include "stupid.h"

static int
colliding_name (void)
{
    return -1;
}

int
stupid_average (int x, int y)
{
    return colliding_name () * (x + y) / 2;
}
