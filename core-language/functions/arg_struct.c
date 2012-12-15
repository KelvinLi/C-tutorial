#include <stdio.h>

struct tomato {
    int water;
    int redness;
};

void
display_status (struct tomato *t)
{
    printf ("tomato{water=%d redness=%d}\n", t->water, t->redness);
}

void
fry (struct tomato t)
{
    t.water = t.water * t.water;
    t.redness = t.redness / 2;
}

void
boil (struct tomato *t)
{
    t->water = t->water * t->water;
    t->redness = t->redness / 2;
}

int
main (int argc, char **argv)
{
    struct tomato *thomp;
    struct tomato thom = {5, 31};

    thomp = &thom;

    printf ("Initial: ");
    display_status (thomp);

    fry (*thomp);

    printf ("After fry(): ");
    display_status (thomp);

    boil (thomp);

    printf ("After boil(): ");
    display_status (thomp);

    return 0;
}
