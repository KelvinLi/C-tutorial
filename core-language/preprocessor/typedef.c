#include <stdio.h>

/* typedef is not part of the preprocessor,
 * but it is nothing more than aliases for types.
 */
typedef int egg_count;
typedef struct tomato veggie;
typedef int (*count_fn) (egg_count);

struct tomato {
    egg_count eggs;
};

int
count_dozens (egg_count c)
{
    return (c - 1) / 12 + 1; /* ceiling div for positive c */
}

int
count_weird (egg_count c)
{
    return (3 - c) * (3 - c);
}

void
display_veggie (veggie *v, count_fn f)
{
    printf ("Got %d groups\n", f(v->eggs));
}

int
main (int argc, char **argv)
{
    veggie tom;
    tom.eggs = 85;
    display_veggie (&tom, count_dozens);
    display_veggie (&tom, count_weird);
    return 0;
}
