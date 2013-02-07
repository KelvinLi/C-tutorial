#include <stdio.h>

struct tomato {
    int redness;
    char name[10];
};

void
display_status (struct tomato *t)
{
    printf ("tomato{redness=(%d) name=(%s)}\n",
            t->redness, t->name);
}

void
fry (struct tomato t)
{
    t.redness = t.redness / 2;
    t.name[0] = 'x';
    t.name[1] = 'y';
    t.name[2] = 'z';
    printf ("In fry(), I got: ");
    display_status (&t);
}

void
boil (struct tomato *t)
{
    char newname[10] = "boiled";
    t->redness = t->redness / 2;
    t->name[0] = 'x';
    t->name[1] = 'y';
    t->name[2] = 'z';
    printf ("In boil(), I got: ");
    display_status (t);
}

int
main (int argc, char **argv)
{
    struct tomato thom = {112, "Thomas"};

    printf ("Initial: ");
    display_status (&thom);
    printf ("\n");

    fry (thom);

    printf ("After fry(): ");
    display_status (&thom);
    printf ("\n");

    boil (&thom);

    printf ("After boil(): ");
    display_status (&thom);

    return 0;
}
