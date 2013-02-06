#include <stdio.h>

#define GREETING_FORMAT "Need %d dozens (%d per dozen).\n"
#define EGG_COUNT 84
#define DOZEN_SIZE 13

typedef int egg_count;
typedef struct tomato veggie;

struct tomato {
    egg_count eggs;
};

int
count_dozens (egg_count c)
{
    return (c - 1) / DOZEN_SIZE + 1; /* ceiling div for positive c */
}

void
display_veggie (veggie *v)
{
    printf (GREETING_FORMAT, count_dozens(v->eggs), DOZEN_SIZE);
}

int
main (int argc, char **argv)
{
    veggie tom;
    tom.eggs = EGG_COUNT;
    display_veggie (&tom);
    return 0;
}
