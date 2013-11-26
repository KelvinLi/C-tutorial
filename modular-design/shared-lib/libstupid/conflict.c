#include "conflict.h"

static const char *const table[] = {
    "O",
    "I",
    "II",
    "III",
    "IV",
    "V",
    "VI",
    "VII",
    "VIII",
    "IX",
};

const char *
colliding_convert (int x)
{
    return 0 <= x && x <= 9 ? table[x] : "NO ROMAN NUMERAL";
}
