#include "conflict.h"

static const char *const table[] = {
    "zero",
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine",
};

const char *
colliding_convert (int x)
{

    return 0 <= x && x <= 9 ? table[x] : "NO ENGLISH WORD";
}
